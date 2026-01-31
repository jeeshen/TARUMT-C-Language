//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable: 4996)
//
//int upgrade(int, int*);
//
//int upgrade(int mgTest, int* cwMark) {
//	if (*cwMark > 39 && *cwMark < 50 && mgTest >= 50) {
//		*cwMark += mgTest / 10;
//		if (*cwMark > 50) {
//			*cwMark = 50;
//		}
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//void main() {
//	int mgTest, cwMark, upgrades;
//
//	do {
//		printf("Enter your make good test mark: ");
//		scanf("%d", &mgTest);
//	} while (mgTest < 0 || mgTest > 100);
//
//	do {
//		printf("Enter your coursework mark: ");
//		scanf("%d", &cwMark);
//	} while (cwMark < 0 || cwMark > 100);
//
//	upgrades = upgrade(mgTest, &cwMark);
//
//	if (upgrade) {
//		printf("Your coursework mark have been upgraded to %d\n", cwMark);
//	}
//	else {
//		printf("Your coursework mark remains as %d\n", cwMark);
//	}
//}