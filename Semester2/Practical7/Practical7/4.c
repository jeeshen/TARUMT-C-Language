//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable: 4996)
//
//char markToGrade(mark);
//int finalMark(int practical, int coursework, int exam);
//int markIsValid(int mark, int maxmark);
//
//char markToGrade(int mark) {
//	if (mark < 0 || mark > 100) {
//		return 'Z';
//	}
//	else if (mark > 80) {
//		return 'A';
//	}
//	else if (mark > 65) {
//		return 'B';
//	}
//	else if (mark > 50) {
//		return 'C';
//	}
//	else if (mark > 40) {
//		return 'D';
//	}
//	else {
//		return 'F';
//	}
//}
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
//	int practicalMark, courseworkMark, examMark, finalMarks;
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
//	finalMarks = finalMark(practicalMark, courseworkMark, examMark);
//	printf("RESULTS: Final Mark = %d  GRADE = %c", finalMarks, markToGrade(finalMarks));
//}