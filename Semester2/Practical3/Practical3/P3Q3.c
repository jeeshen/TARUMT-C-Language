//#include <stdlib.h>
//#include <stdio.h>
//#pragma warning (disable: 4996)
//
//void displayRecords();
//void addRecords();
//
//typedef struct {
//	char name[20];
//	int mark;
//} StudentMark;
//
//void main() {
//	displayRecords();
//
//	system("pause");
//}
//
//void addRecords() {
//	FILE* ptr = fopen("mixed.txt", "a");
//
//	StudentMark stud;
//	char continueAdd;
//	int count = 0;
//	printf("Add Records\n");
//	printf("-----------\n");
//	printf("Add another record (Y = yes)? ");
//	continueAdd = tolower(getchar());
//	while (continueAdd != 'n') {
//		rewind(stdin);
//		printf("\tEnter name: ");
//		gets(stud.name);
//		rewind(stdin);
//		printf("\tEnter mark: ");
//		scanf("%d", &stud.mark);
//		count++;
//		printf("Record successfully added...\n\n");
//		fprintf(ptr, "\n%s\n%d\n", stud.name, stud.mark);
//		rewind(stdin);
//		printf("Add another record (Y=yes)? ");
//		continueAdd = tolower(getchar());
//	}
//	printf("\n%d records have been added to mixed.txt\n", count);
//
//}
//
//void displayRecords() {
//	FILE* ptr = fopen("mixed.txt", "r");
//
//	if (ptr == NULL) {
//		printf("Error open file\n");
//		exit(-1);
//	}
//
//	int count = 0;
//	StudentMark stud;
//
//	printf("LIST OF RECORDS - mixed.txt\n");
//	printf("\tNAME\t\t\tMARK\n");
//	printf("\t====\t\t\t====\n");
//	while (fscanf(ptr, "%99[^\n] %d\n", &stud.name, &stud.mark) != EOF) {
//		printf("\t%-20s\t%2d\n", stud.name, stud.mark);
//		count++;
//	}
//	printf("\n\tNumber of records = %d\n", count);
//}
