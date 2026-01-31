//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <math.h>
//#pragma warning (disable: 4996)
//
//void getGradeAndGp(char* , int* );
//
//void getGradeAndGp(char* grade, int* gp) {
//	printf("Enter your grade: ");
//	rewind(stdin);
//	scanf("%c", grade);
//	*grade = toupper(*grade);
//
//	switch (*grade) {
//	case 'A': *gp = 4; break;
//	case 'B': *gp = 3; break;
//	case 'C': *gp = 2; break;
//	case 'D': *gp = 1; break;
//	case 'F': *gp = 0; break;
//	default:
//		*gp = 0;
//	}
//}
//
//void main() {
//	int credit, qp, gp;
//	char grade;
//
//	printf("Enter your credit hours: ");
//	scanf("%d", &credit);
//
//	getGradeAndGp(&grade, &gp);
//	qp = credit * gp;
//	printf("Your quality point for the subject is %d\n", qp);
//}