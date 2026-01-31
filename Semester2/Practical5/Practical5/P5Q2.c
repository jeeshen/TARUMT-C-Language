#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctype.h>
#pragma warning (disable: 4996)

typedef struct {
	char prodCode[6];
	int expiryYear;
	char country[25];
}Product;

void displayProducts() {
	Product prod;
	SYSTEMTIME t;
	int count = 0;

	GetLocalTime(&t);
	FILE* fPtr = fopen("product.dat", "rb");

	if (fPtr == NULL) {
		printf("System Error\n");
		exit(-1);
	}

	printf("Product Details - as at %d-%d-%d %02d:%02d\n", t.wDay, t.wMonth, t.wYear, t.wHour, t.wMinute);
	printf("\nProduct Code\tExpiry Year\tCountry\n");
	printf("============\t===========\t========\n");
	while (fread(&prod, sizeof(prod), 1, fPtr)) {
		printf("%12s\t%d %20s\n", prod.prodCode, prod.expiryYear, prod.country);
		count++;
	}
	printf("\n< %d products listed >\n", count);

	fclose(fPtr);
}

void addProduct() {
	Product prod;
	FILE* fPtr = fopen("product.dat", "ab");
	char option;

	rewind(stdin);
	printf("Enter product code: ");
	scanf("%[^\n]s", &prod.prodCode);
	rewind(stdin);
	printf("Enter expiry date: ");
	scanf("%d", &prod.expiryYear);
	rewind(stdin);
	printf("Enter country: ");
	scanf("%[^\n]s", &prod.country);
	fwrite(&prod, sizeof(Product), 1, fPtr);
	rewind(stdin);
	printf("Do you want to add more products? ");
	scanf("%c", &option);
	
	while (toupper(option) != 'N') {
		rewind(stdin);
		printf("Enter product code: ");
		scanf("%[^\n]s", &prod.prodCode);
		rewind(stdin);
		printf("Enter expiry date: ");
		scanf("%d", &prod.expiryYear);
		rewind(stdin);
		printf("Enter country: ");
		scanf("%[^\n]s", &prod.country);
		fwrite(&prod, sizeof(Product), 1, fPtr);
		rewind(stdin);
		printf("Do you want to add more products (Y/N)? ");
		scanf("%c", &option);
	}

	fclose(fPtr);
}

void modifyProduct() {
    Product p[20];
    int i = 0;
    int pCount;
    char option;
    char prodCode[6];
    char showProdCode[6] = "", showCountry[25] = "";
    int showYear = 0, prodArrayToModify = -1;
    char tempProd[6], tempCountry[25];
    int tempYear;
    char makesure;
    int amountModify = 0;
    FILE* fPtr;

    fPtr = fopen("product.dat", "rb");
    if (fPtr == NULL) {
        printf("System Error\n");
        return;
    }

    while (fread(&p[i], sizeof(Product), 1, fPtr)) {
        i++;
    }
    fclose(fPtr);
    pCount = i;

    do {
        rewind(stdin);
        printf("Enter product code to modify: ");
        scanf("%[^\n]s", prodCode);

        for (i = 0; i < pCount; i++) {
            if (strcmp(prodCode, p[i].prodCode) == 0) {
                strcpy(showProdCode, p[i].prodCode);
                strcpy(showCountry, p[i].country);
                showYear = p[i].expiryYear;
                prodArrayToModify = i;
                break;
            }
        }

        if (prodArrayToModify == -1) {
            printf("There is no record for the product code\n");
        }
        else {
            printf("Product Code: %s\nExpiry Year: %d\nCountry: %s\n", showProdCode, showYear, showCountry);
            rewind(stdin);
            printf("Enter new expiry year: ");
            scanf("%d", &tempYear);
            rewind(stdin);
            printf("Enter new country: ");
            scanf("%[^\n]s", tempCountry);
            rewind(stdin);
            printf("Are you sure to modify the following product (%s) (Y/N)? ", showProdCode);
            scanf(" %c", &makesure);
            if (toupper(makesure) == 'Y') {
                strcpy(p[prodArrayToModify].country, tempCountry);
                p[prodArrayToModify].expiryYear = tempYear;
                printf("Successfully modified product.\n");
                printf("Product Code: %s\nNew Expiry Year: %d\nNew Country: %s\n", showProdCode, tempYear, tempCountry);
                amountModify++;
            }
            else {
                printf("You have cancelled the modification.\n");
            }
        }

        printf("Do you want to modify another product? (Y/N): ");
        scanf(" %c", &option);
    } while (toupper(option) != 'N');

    FILE* fPtr2;
    fPtr2 = fopen("product.dat", "wb");

    if (fPtr2 == NULL) {
        printf("System Error\n");
        return;
    }

    for (i = 0; i < pCount; i++) {
        fwrite(&p[i], sizeof(Product), 1, fPtr2);
    }
    fclose(fPtr2);
    printf("You have modified %d record(s)\n", amountModify);
}

void deleteProduct() {
    int inputYear;
    Product p[20];
    Product p2[20];
    int i = 0;
    int j;
    int pCount;
    char choice;
    int recordDeleted = 0;
    int count = 0;
    rewind(stdin);
    printf("Enter year you want to remove: ");
    scanf("%d", &inputYear);

    FILE* fPtr;
    fPtr = fopen("product.dat", "rb");

    while (fread(&p[i], sizeof(Product), 1, fPtr)) {
        i++;
    }
    fclose(fPtr);
    pCount = i;
    rewind(stdin);
    printf("Are you sure you want to delete the record (Y/N)? ");
    scanf("%c", &choice);

    if (toupper(choice) == 'Y') {
        for (i = 0; i < pCount; i++) {
            if (p[i].expiryYear == inputYear) {
                recordDeleted++;
            }
            else {
                p2[count] = p[i];
                count++;
            }
        }
    }
    else {
        printf("Deletion cancelled.\n");
    }
    int gap = pCount - count;
    FILE* fPtr2;
    fPtr2 = fopen("product.dat", "wb");
    for (i = 0; i < pCount - gap; i++) {
        fwrite(&p2[i], sizeof(Product), 1, fPtr2);
    }
    fclose(fPtr2);
    printf("You have successfully deleted %d record(s)\n", recordDeleted);
}

void displayProducts();
void addProduct();
void modifyProduct();
void deleteProduct();

void main() {
	int choice;
	do {
		printf("1. Display all products\n");
		printf("2. Add product\n");
		printf("3. Modify product\n");
        printf("4. Delete product\n");
		printf("0. Exit\n");
		printf("\tSelect your action: ");
		scanf("%d", &choice);
		switch (choice) {
		case 1: displayProducts(); break;
		case 2: addProduct(); break;
        case 3: modifyProduct(); break;
        case 4: deleteProduct(); break;
		case 0: printf("Exiting...\n"); break;
		}
	} while (choice != 0);
	system("pause");
}
