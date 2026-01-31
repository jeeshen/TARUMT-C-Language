//#include <stdlib.h>
//#include <stdio.h>
//#include <ctype.h>
//#pragma warning (disable: 4996)
//
//typedef struct {
//	char studId[20];
//	char name[20];
//	double cGpa;
//}Student;
//
//void main() {
//	Student student;
//	char record;
//	FILE* fPtr = fopen("Student.txt", "a");
//
//	do {
//		rewind(stdin);
//		printf("Enter student ID: ");
//		scanf("%[^\n]s", &student.studId);
//		rewind(stdin);
//		printf("Enter student name: ");
//		scanf("%[^\n]s", &student.name);
//		rewind(stdin);
//		printf("Enter CGPA: ");
//		scanf("%lf", &student.cGpa);
//		rewind(stdin);
//		printf("Any more records? ");
//		scanf("%c", &record);
//		fprintf(fPtr, "%s|%s|%.2f\n", student.studId, student.name, student.cGpa);
//	} while (toupper(record) != 'N');
//
//}