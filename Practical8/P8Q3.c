//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable: 4996)
//s
//void menuEast();
//void menuWest();
//void menuNorthern();
//void menuCentral();
//void menuSouthern();
//void menuEastCoast();
//
//void main() {
//	int option;
//
//	do {
//		system("cls");
//		printf("Malaysia menu:\n");
//		printf("1. East Malaysia\n");
//		printf("2. West Malaysia\n");
//		printf("0. Exit\n");
//		printf("Enter your option > ");
//		scanf("%d", &option);
//
//		switch (option) {
//		case 1: menuEast(); break;
//		case 2: menuWest(); break;
//		case 0: break;
//		default: printf("Invalid option!\n");
//		}
//
//	} while (option != 0);
//
//
//	system("pause");
//}
//
//void menuEast() {
//	printf("\nWelcome to East Malaysia\n");
//
//	system("pause");
//}
//
//void menuWest() {
//	int option;
//
//	do {
//		system("cls");
//		printf("Malaysia menu:\n");
//		printf("1. Northern Region of Malaysia\n");
//		printf("2. Central Region of Malaysia\n");
//		printf("3. Southern Region of Malaysia\n");
//		printf("4. East Coast of Malaysia\n");
//		printf("0. Back\n");
//		printf("Enter your option > ");
//		scanf("%d", &option);
//
//		switch (option) {
//		case 1: menuNorthern(); break;
//		case 2: menuCentral(); break;
//		case 3: menuSouthern(); break;
//		case 4: menuEastCoast(); break;
//		case 0: break;
//		default: printf("Invalid option!\n");
//		}
//
//	} while (option != 0);
//
//}
//
//void menuNorthern() {
//	printf("\nWelcome to Northern Region of Malaysia\n");
//	system("pause");
//}
//
//void menuCentral() {
//	printf("\nWelcome to Central Region of Malaysia\n");
//	system("pause");
//}
//
//void menuSouthern() {
//	printf("\nWelcome to Southern Region of Malaysia\n");
//	system("pause");
//}
//
//void menuEastCoast() {
//	printf("\nWelcome to East Coast Region of Malaysia\n");
//	system("pause");
//
//	int option;
//
//	do {
//		system("cls");
//		printf("State of Northern Region menu:\n");
//		printf("1. Kelantan\n");
//		printf("2. Pahang\n");
//		printf("3. Terengganu\n");
//		printf("0. Back\n");
//		printf("Enter your option > ");
//		scanf("%d", &option);
//
//		switch (option) {
//		case 1:
//			printf("Capital of Kelantan is Kota Bharu\n");
//			system("pause");
//			break;
//		case 2:
//			printf("Capital of Pahang is Kuantan\n");
//			system("pause");
//			break;
//		case 3:
//			printf("Capital of Terengganu is Kuala Terengganu\n");
//			system("pause");
//			break;
//		case 0: break;
//		default: printf("Invalid option!\n");
//		}
//	} while (option != 0);
//}