#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#pragma warning (disable: 4996)


void main() {
	int count = 0, noQuestion = 0;
	double score;
	char addQuestion;
	char question[99], answer[99];
	char userInput[99];
	FILE* fPtr = fopen("Questions.txt", "a+");
	FILE* fPtr2 = fopen("Answers.txt", "a+");

	while (fscanf(fPtr, "%[^\n]\n", &question) != EOF && fscanf(fPtr2, "%[^\n]\n", &answer) != EOF ) {
		rewind(stdin);
		printf("%s ", question);
		scanf("%[^\n]", &userInput);

		if (strcmp(userInput, answer) == 0) {
			printf("Correct!\n");
			count++;
		}
		else {
			printf("Wrong, answer should be %s.\n", answer);
		}
		noQuestion++;
	}
	
	score = ((double)count / noQuestion) * 100;
	printf("\nNumber of correct answers = %d\n", count);
	printf("Total number of questions = %d\n", noQuestion);
	printf("\tYour score >>>>>> %2.0f%%\n", score);

	char inputQuestion[99];
	char inputAnswer[99];
	do {
		rewind(stdin);
		printf("\nDo you want to add question (Y/N)? ");
		scanf("%c", &addQuestion);
		rewind(stdin);
		printf("Enter question: ");
		scanf("%[^\n]s", &inputQuestion);
		rewind(stdin);
		fprintf(fPtr, "%s\n", inputQuestion);
		printf("Enter answer: ");
		scanf("%[^\n]s", &inputAnswer);
		fprintf(fPtr2, "%s\n", inputAnswer);
		printf("Successfully added!\n");
		rewind(stdin);
		printf("Do you want to add question (Y/N)? ");
		scanf("%c", &addQuestion);
	} while (toupper(addQuestion) != 'N');
	system("pause");

}