//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <math.h>
//#pragma warning (disable: 4996)
//#define CURRENT_YEAR 2019
//#define MONTH 11
//
//void age(int, int, int*, int*);
//
//void age(int monthBorn, int yearBorn, int* ageYrs, int* ageMths) {
//	if (!(MONTH >= monthBorn)) {
//		monthBorn += 12;
//		yearBorn -= 1;
//	}
//	*ageMths = MONTH - monthBorn;
//	*ageYrs = CURRENT_YEAR - yearBorn;
//}
//
//void main() {
//	int monthBorn, yearBorn, ageYrs, ageMth;
//
//	rewind(stdin);
//	printf("Enter your birth month in number: ");
//	scanf("%d", &monthBorn);
//
//	rewind(stdin);
//	printf("Enter your birth year: ");
//	scanf("%d", &yearBorn);
//
//	age(monthBorn, yearBorn, &ageYrs, &ageMth);
//	printf("Age is %d yrs %d mth", ageYrs, ageMth);
//}