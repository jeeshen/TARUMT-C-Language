//#include <stdlib.h>
//#include <stdio.h>
//#pragma warning (disable:4996)
//
//int finalMark(int practical, int coursework, int exam);
//int markIsValid(int mark, int maxmark);
//
//int finalMark(int practical, int coursework, int exam) {
//	int finalMark = practical + coursework + exam;
//	return finalMark;
//}
//
//int markIsValid(int mark, int maxMark) {
//	if (mark > 0 && mark <= maxMark) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//void main() {
//	int practicalMark, courseworkMark, examMark;
//	do {
//		rewind(stdin);
//		printf("Practical Mark (0 to 30): ");
//		scanf("%d", &practicalMark);
//	} while (!markIsValid(practicalMark, 30));
//	do {
//		rewind(stdin);
//		printf("Courswork Mark (0 to 20): ");
//		scanf("%d", &courseworkMark);
//	} while (!markIsValid(courseworkMark, 20));
//	do {
//		rewind(stdin);
//		printf("Exam Mark (0 to 50): ");
//		scanf("%d", &examMark);
//	} while (!markIsValid(examMark, 50));
//	printf("Final Mark = %d", finalMark(practicalMark, courseworkMark, examMark));
//}