//#include <stdio.h>
//#include <math.h>
//#pragma warning (disable: 4996)
//
//void displaySquareCubes();
//double triangleArea();
//void displayCircleInfo();
//void welcome();
//
//void main() {
//	double area1, area2;
//
//	area1 = triangleArea();
//	printf("Area of 1st triangle = %.2f\n\n", area1);
//	rewind(stdin);
//	printf("Area of 2nd triangle = %.2f\n\n", area2 = triangleArea());
//	system("pause");
//}
//
//void displaySquareCubes() {
//	for (int i = 1; i <= 10; i++) {
//		printf("%-10d %-10d %-10d\n", i, i * i, i * i * i);
//	}
//}
//
//double triangleArea() {
//	double a, b, area;
//	rewind(stdin);
//	printf("Enter value a: ");
//	scanf("%lf", &a);
//	rewind(stdin);
//	printf("Enter value b: ");
//	scanf("%lf", &b);
//
//	area = 0.5 * a * b;
//	return area;
//}
//
//void displayCircleInfo() {
//	double radius, diameter, circumference, area;
//	const double pi = 3.14159;
//	printf("Enter radius > ");
//	scanf("%lf", &radius);
//
//	diameter = 2 * radius;
//	circumference = 2 * pi * radius;
//	area = pi * pow(radius, 2);
//
//	printf("Diameter: %.5f\n", diameter);
//	printf("Circumference: %.5f\n", circumference);
//	printf("Area: %.5f\n", area);
//}
//
//void welcome() {
//	printf("WELCOME !                        *  *\n");
//	printf("This program will calculate    *      *\n");
//	printf("a circle's diamter,            *      *\n");
//	printf("circumference and area.          *  *\n");
//}