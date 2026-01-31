//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable: 4996)
//
//double TriangleArea(int, int);
//double TrianglePerimeter(int, int);
//void Menu();
//
//double TriangleArea(int a, int b) {
//	return (a * b) / 2;
//}
//
//double TrianglePerimeter(int a, int b) {
//	return a + b + sqrt(pow(a, 2), pow(b, 2));
//}
//
//void Menu() {
//	printf("  /|                          |\\\n");
//	printf(" / |  TRIANGLE EXPERT        b| \\\n");
//	printf("/__|                          |__\\\n");
//	printf("                                  a\n\n");
//	printf("What do you want to calculate?\n");
//	printf("[1]\t\tArea of Triangle\n");
//	printf("[2]\t\tPerimeter of Triangle\n");
//	printf("[other number]\tEXIT\n\n");
//	printf("Your selecction (Choose a number): ");
//}
//
//void main() {
//	int select;
//	int a, b;
//	do {
//		Menu();
//		rewind(stdin);
//		scanf("%d", &select);
//		if (select != 1 && select != 2) {
//			printf("Good bye!\n");
//			break;
//		}
//		else {
//			rewind(stdin);
//			printf("Enter value a: ");
//			scanf("%d", &a);
//			rewind(stdin);
//			printf("Enter value b: ");
//			scanf("%d", &b);
//			if (select == 1) {
//				printf("Area of Triangle is %.2f\n", TriangleArea(a, b));
//			}
//			else {
//				printf("Perimeter of Triangle is %.2f\n", TrianglePerimeter(a, b));
//			}
//		}
//	} while (1);
//}