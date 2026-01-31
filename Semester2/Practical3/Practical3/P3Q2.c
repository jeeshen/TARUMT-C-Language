//#include <stdlib.h>
//#include <stdio.h>
//#include <ctype.h>
//#pragma warning (disable: 4996)
//
//void main() {
//	char character;
//	int numChar = 0;
//	int numLetter = 0;
//	int numVowels = 0;
//	int numConson = 0;
//	int numBlank = 0;
//	int approxWord = 0;
//
//	FILE* fPtr = fopen("text.txt", "r");
//
//	if (fPtr == NULL) {
//		printf("Failed to open file\n");
//		exit(-1);
//	}
//
//	while (fscanf(fPtr, "%c", &character) != EOF) {
//		numChar++;
//
//		if (isalpha(character)) {
//			numLetter++;
//		}
//		else if (character == ' ') {
//			numBlank++;
//		}
//
//		if (isalpha(character)) {
//			switch (tolower(character)) {
//			case 'a': numVowels++; break;
//			case 'e': numVowels++; break;
//			case 'i': numVowels++; break;
//			case 'o':numVowels++; break;
//			case 'u': numVowels++; break;
//			default: numConson++; break;
//			}
//		}
//	}
//	approxWord = numBlank + 1;
//	fclose(fPtr);
//	printf("Total number of character\t: %d\n", numChar);
//	printf("Number of letters\t\t: %d\n", numLetter);
//	printf("Number of vowels\t\t: %d\n", numVowels);
//	printf("Number of consonants\t\t: %d\n", numConson);
//	printf("Number of blanks (spaces)\t: %d\n", numBlank);
//	printf("Approx no. of words\t\t: %d\n", approxWord);
//}