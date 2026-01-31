//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable: 4996)
//
//void main() {
//	int num, i;
//	int counter1 = 0; // 1- 50
//	int counter2 = 0; // 51 - 100
//	int counter3 = 0; // 101 - 150
//	int counter4 = 0; // 151 - 200
//	int invalid = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		printf("Enter number %d: ", i);
//		scanf("%d", &num);
//
//		if (num < 0 || num > 200)
//			counter1++;
//		else if (num <= 50)
//			counter1++;
//		else if (num <= 100)
//			counter2++;
//		else if (num <= 150)
//			counter3++;
//		else
//			counter4++;
//
//	}
//
//	printf(" Range   Total\n");
//	printf("========   =====\n");
//	printf(" 1-50   %d\n", counter1);
//	printf("51-100   %d\n", counter2);
//	printf("101-150   %d\n", counter3);
//	printf("151-200   %d\n", counter4);
//	printf("Invalid   %d\n", invalid);
//
//	system("pause");
//
//}