//#include <stdlib.h>
//#include <stdio.h>
//#pragma warning (disable: 4996)
//
//typedef struct {
//	char bookID[8];
//	char authorName[35];
//	char bookTitle[50];
//	char publisher[20];
//	int yearPublication;
//	int stockQuantity;
//}BookInventory;
//
//struct Transactions {
//	char transactionCode; 
//	int quantity;
//};
//
//void main() {
//	BookInventory book = {
//		"Bk-2004", "JK Rowling", "Harry Potter and the Prisoner of Azkaban","Bloombury", 1999, 25
//	};
//
//	printf("Book Details:\n");
//	printf("=============\n");
//	printf("Book ID\t\t\t:%s\n", book.bookID);
//	printf("Author Name\t\t:%s\n", book.authorName);
//	printf("Book Title\t\t:%s\n", book.bookTitle);
//	printf("Publisher\t\t:%s\n", book.publisher);
//	printf("Year of Publication\t:%d\n", book.yearPublication);
//	printf("Quantity in Stock\t:%d\n", book.stockQuantity);
//
//	struct Transactions txn;
//	//printf("\n\nEnter transaction code (S=sold,P=purchassed, X=exit): ");
//	//scanf("%c", &txn.transactionCode);
//	//rewind(stdin);
//	//printf("Enter quantity: ");
//	//scanf("%d", &txn.quantity);
//	//if (txn.transactionCode == 'S') {
//	//	book.stockQuantity -= txn.quantity;
//	//	printf("\nSold\t:%d copies of \"Harry Potter and the Prisoner of Azkaban\" by JK Rowling.\n", txn.quantity);
//	//	printf("There are now %d copies in stock.\n\n", book.stockQuantity);
//	//}
//	//else if (txn.transactionCode == 'P') {
//	//	book.stockQuantity += txn.quantity;
//	//	printf("\nPurchased\t:%d copies of \"Harry Potter and the Prisoner of Azkaban\" by JK Rowling.\n", txn.quantity);
//	//	printf("There are now %d copies in stock.\n\n", book.stockQuantity);
//	//}
//	//else {
//	//	printf("Invalid transaction code!");
//	//}
//	do {
//		rewind(stdin);
//		printf("\nEnter transaction code (S=sold,P=purchassed, X=exit): ");
//		scanf("%c", &txn.transactionCode);
//		if (txn.transactionCode == 'P' || txn.transactionCode == 'S') {
//			rewind(stdin);
//			printf("Enter quantity: ");
//			scanf("%d", &txn.quantity);
//			if (txn.transactionCode == 'P') {
//				book.stockQuantity += txn.quantity;
//				printf("\n\nPurchased\t:%d copies of \"Harry Potter and the Prisoner of Azkaban\" by JK Rowling.\n", txn.quantity);
//				printf("There are now %d copies in stock.\n\n", book.stockQuantity);
//			}
//			else {
//				book.stockQuantity -= txn.quantity;
//				printf("Sold\t:%d copies of \"Harry Potter and the Prisoner of Azkaban\" by JK Rowling.\n", txn.quantity);
//				printf("There are now %d copies in stock.\n\n", book.stockQuantity);
//			}
//		}
//		else if (txn.transactionCode == 'X') {
//			break;
//		}
//		else {
//			printf("Invalid transaction code!\n");
//		}
//		//attendance code 339866
//
//	} while (txn.transactionCode != 'X');
//	printf("Exited - End of Transactions.\n");
//	system("pause");
//}
