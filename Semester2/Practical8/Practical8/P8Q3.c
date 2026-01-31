//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#pragma warning (disable: 4996)
//
//int bigger(int, int);
//int smaller(int, int);
//void hiLo(int, int, int, int*, int*);
//
//void main() {
//	int a = 1, b = 4, c = 7, h, l;
//	hiLo(a, b, c, &h, &l);
//	printf("Highest: %d\n", h);
//	printf("Lowest: %d\n", l);
//}
//
//void hiLo(int x, int y, int z, int* highest, int* lowest) {
//	*highest = bigger(bigger(x, y), z);
//	*lowest = smaller(smaller(x, y), z);
//}
//
//int bigger(int x, int y) {
//	return x > y ? x : y;
//}
//
//int smaller(int x, int y) {
//	return x < y ? x : y;
//}