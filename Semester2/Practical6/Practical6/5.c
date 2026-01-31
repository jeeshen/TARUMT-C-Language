//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable: 4996)
//
//int getValidMark();
//
//void main() {
//	int mark = getValidMark();
//	printf("Your mark is %d, ", mark);
//	if (mark >= 50) {
//		printf("PASS\n");
//	}
//	else {
//		printf("FAIL\n");
//	}
//	system("pause");
//}
//
//int getValidMark() {
//	int mark;
//
//	do {
//		rewind(stdin);
//		printf("Enter mark: ");
//		scanf("%d", &mark);
//	} while (!(mark >= 0 && mark <= 100));
//	
//	return mark;
//}