//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable: 4996)
//
//void binary(int num) {
//	int a, temp;
//	for (a = 7; a >= 0; a--) {
//		temp = num >> a; //move required bit to extreme right
//		if (temp & 1) //determine if the bit is 0 or 1
//			printf("1");
//		else
//			printf("0");
//	}
//}
//void main() {
//	int num, shiftBit, rightShifted, leftShifted;
//
//	printf("Enter a decimal number > ");
//	scanf("%d", &num);
//	rewind(stdin);
//	printf("Enter number of places to shift bit > ");
//	scanf("%d", &shiftBit);
//	printf("\nNumber\t\t: ");
//	binary(num);
//
//	printf("\n\nLeft Shifted\t: ");
//	leftShifted = num << shiftBit;
//	binary(leftShifted);
//
//	printf("\n\nRight Shifted\t: ");
//	rightShifted = num >> shiftBit;
//	binary(rightShifted);
//
//	printf("\n\n");
//	system("pause");
//}
//
