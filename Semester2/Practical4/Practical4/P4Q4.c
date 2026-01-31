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
//	FILE* fPtr = fopen("Student.txt", "r");
//
//	printf("\t\tLIST OF STUDENTS\n");
//	printf("Student ID\t\tName\t\t\tCGPA\n");
//	printf("----------\t\t----\t\t\t----\n");
//	while (fscanf(fPtr, "%[^|]|%[^|]|%lf\n", &student.studId, &student.name, &student.cGpa) != EOF) {
//		printf("%s\t%-25s\t%.2f\n", student.studId, student.name, student.cGpa);
//	}
//	system("pause");
//
//}