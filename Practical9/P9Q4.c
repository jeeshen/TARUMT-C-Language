//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable: 4996)
//
//void main() {
//	int num[30], j;
//	int evenCount = 0;
//	int count = 0;
//	int sum = 0;
//
//	for (j = 0; j < 30; j++) {
//		num[j] = -50 + rand() % 100;
//	}
//
//	for (j = 0; j < 30; j++) {
//		printf("%d ", num[j]);
//		count++;
//
//		if (count % 10 == 0)
//			printf("\n");
//	}
//
//	printf("\n");
//
//	for (j = 0; j < 30; j++) {
//		if (num[j] % 2 != 0) {
//			printf("%d ", num[j]);
//			count++;
//			if (count % 10 == 0)
//				printf("\n");
//		}
//	}
//
//	printf("\n\n");
//
//	for (j = 0; j < 30; j++) {
//		if (j % 2 != 0) {
//			printf("num[%d] ", j);
//			count++;
//			if (count % 10 == 0)
//				printf("\n");
//		}
//	}
//
//
//	for (j = 0; j < 30; j++) {
//		if (num[j] % 2 == 0)
//			evenCount++;
//	}
//
//	printf("\nEven counter: %d\n", evenCount);
//
//	for (j = 0; j < 30; j++) {
//		sum += num[j];
//	}
//
//	printf("Sum = %d\n",  sum);
//
//	int smallest = 9999;
//	int smallestLocation;
//
//	for (j = 0; j < 30; j++) {
//		if (num[j] < smallest) {
//			smallest = num[j];
//			smallestLocation = j;
//		}
//	}
//
//	printf("Smallest value: %d, location: num[%d]\n", smallest, smallestLocation);
//
//	system("pause");
//}