//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <ctype.h>
//#pragma warning (disable: 4996)
//
//void main() {
//	double x, y, result1, result2;
//	char select;
//
//	do {
//
//		printf("Enter 2 numbers > ");
//		scanf("%lf %lf", &x, &y);
//
//		result1 = pow(x, y);
//		result2 = sqrt(result1);
//
//		printf("The result of %.0f to the power of %.0f\n", x, result1);
//		printf("Square root of %.2f = %.2f\n", result1, result2);
//
//		rewind(stdin);
//		printf("Enter 'y' to continue or 'n' to stop > ");
//		select = toupper(getchar());
//
//	} while (toupper(select) != 'N');
//	system("pause");
//}