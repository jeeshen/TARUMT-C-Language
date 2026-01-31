#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void main() {
	int subject, student, n, mark, sum = 0;
	double average;
	int highestMark = -9999, topstudent;
	
	printf("========================================\n");
	printf("      MARKS PROCESSING SYSTEM\n");
	printf("========================================\n");
	printf("Please enter the number of student: ");
	scanf("%d", &n);

	for (student = 1; student <= n; student++) {
		printf("Student No. %d\n", student);
		for (subject = 1; subject <= 3; subject++) {
			printf("\tMarks for Subject %d: ", subject);
			scanf("%d", &mark);
			sum += mark;
		}

		if (sum > highestMark) {
			highestMark = sum;
			topstudent = student;
		}

		average = (double)sum / 3;
		printf("\tTOTAL MARK -------------> %d\n", sum);
		printf("\tAVERAGE MARK -----------> %.2f\n", average);
	}
	printf("THE HIGHEST TOTAL MARK IS -------------> %d\n", highestMark);
	printf("THE TOP STUDENT IS STUDENT NO -------> %d\n", topstudent);
	printf("========================================\n");
	printf("     THANK YOU FOR USING THIS SYSTEM!!\n");
	printf("========================================\n");
	system("pause");
}