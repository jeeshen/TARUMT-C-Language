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
//	int count = 0;
//	FILE* fPtr = fopen("Student.txt", "r");
//	FILE* fPtr2 = fopen("BookPrize.txt", "w");
//
//	while (fscanf(fPtr, "%[^|]|%[^|]|%lf\n", &student.studId, &student.name, &student.cGpa) != EOF) {
//		if (student.cGpa >= 3.5) {
//			fprintf(fPtr2, "%s|%s|%.2f\n", student.studId, student.name, student.cGpa);
//			count++;
//		}
//	}
//		printf("%d record(s) copied to BookPrize.txt\n", count);
//	system("pause");
//
//}