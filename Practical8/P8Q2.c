//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning(disable: 4996)
//
//void main() {
//	char name[31], gender;
//	int day, month, year;
//	double salary;
//
//	printf("Enter name: ");
//	gets(name);
//	rewind(stdin);
//	printf("Enter gender: ");
//	gender = toupper(getchar());
//
//	while (gender != 'M' && gender != 'F') {
//		printf("Invalid gender!\n");
//		printf("Enter gender: ");
//		gender = toupper(getchar());
//	}
//
//	rewind(stdin);
//	printf("Enter birth day: ");
//	scanf("%d", &day);
//
//	while (day < 1 || day > 31) {
//		printf("Invalid birth day!\n");
//		printf("Enter birth day: ");
//		scanf("%d", &day);
//	}
//
//	rewind(stdin);
//	printf("Enter birth month: ");
//	scanf("%d", &month);
//
//	while (month < 1 || month > 12) {
//		printf("Invalid birth month!\n");
//		printf("Enter birth month: ");
//		scanf("%d", &month);
//	}
//	
//	rewind(stdin);
//	printf("Enter birth year: ");
//	scanf("%d", &year);
//
//	while (year < 1) {
//		printf("Invalid birth year!\n");
//		printf("Enter birth year: ");
//		scanf("%d", &year);
//	}
//
//	printf("Enter starting salary: ");
//	scanf("%.2f", &salary);
//
//	while (salary < 1500) {
//		printf("Invalid starting salary!\n");
//		printf("Enter starting salary: ");
//		scanf("%.2f", &salary);
//	}
//
//	printf("Name: %s\n", name);
//	printf("Gender: %c\n", gender);
//	printf("Birth date: %2d -%2d-%2d\n", day, month, year);
//	printf("Starting salary: %.2f", salary);
//
//	system("pause");
//}