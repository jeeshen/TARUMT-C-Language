//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include <math.h>
//#pragma warning (disable: 4996)
//
//void additionQuiz(int, int*, double*);
//
//void additionQuiz(int level, int* correct, double* score) {
//	int n, x, y, ans;
//	*correct = 0;
//	for (int i = 0; i < 5; i++) {
//		n = level * 20;
//		x = rand() % n + 1;
//		y = rand() % n + 1;
//		rewind(stdin);
//		printf("%d + %d = ", x, y);
//		scanf("%d", &ans);
//		if (ans == x + y) {
//			printf("Correct!\n");
//			(*correct)++;
//		}
//		else {
//			printf("Wrong!\n");
//		}
//
//		*score = *correct / 5.0;
//	}
//}
//
//void main() {
//	int level, correct;
//	double score;
//	printf("Select your level in number: ");
//	scanf("%d", &level);
//
//	additionQuiz(level, &correct, &score);
//	printf("You got %d correct answers out of 5 question.\n", correct);
//	printf("Your score: %.0f%%", score*100);
//}