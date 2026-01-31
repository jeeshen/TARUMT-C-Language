//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable: 4996)
//
//int getExam();
//int getCourseWork();
//int calculateFinal(int, int);
//void printResults(int);
//
//void main() {
//	int exam, coursework, final;
//
//	exam = getExam();
//	coursework = getCourseWork();
//	final = calculateFinal(exam, coursework);
//	printResults(final);
//	
//	system("pause");
//}
//
//int getExam() {
//	int exam;
//	do {
//		rewind(stdin);
//		printf("Enter your exam mark: ");
//		scanf("%d", &exam);
//	} while (exam < 0 || exam > 100);
//	return exam;
//}
//
//int getCourseWork() {
//	int coursework;
//	do {
//		rewind(stdin);
//		printf("Enter your coursework mark: ");
//		scanf("%d", &coursework);
//	} while (coursework < 0 || coursework > 40);
//	return coursework;
//}
//
//int calculateFinal(int exam, int coursework) {
//	return (60 * exam / 100) + coursework;
//}
//
//void printResults(int final) {
//	printf("Final mark: %d\n", final);
//}