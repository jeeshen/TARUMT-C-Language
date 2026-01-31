//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable: 4996)
//
//typedef struct {
//	char prodCode[6];
//	int expiryYear;
//	char country[25];
//}Product;
//
//void main() {
//	char choice;
//	Product prod;
//	FILE* fPtr = fopen("product.dat", "ab");
//	int i;
//
//	do {
//		rewind(stdin);
//		printf("Enter product code: ");
//		scanf("%[^\n]s", &prod.prodCode);
//		rewind(stdin);
//		printf("Enter expiry date: ");
//		scanf("%d", &prod.expiryYear);
//		rewind(stdin);
//		printf("Enter country: ");
//		scanf("%[^\n]s", &prod.country);
//		fwrite(&prod, sizeof(Product), 1, fPtr);
//		rewind(stdin);
//		printf("Do you want to add more product? ");
//		scanf("%c", &choice);
//	} while (toupper(choice) == 'Y');
//
//	fclose(fPtr);
//}