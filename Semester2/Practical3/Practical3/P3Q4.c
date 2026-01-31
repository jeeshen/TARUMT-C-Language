//#include <stdlib.h>
//#include <stdio.h>
//#include <ctype.h>
//#pragma warning (disable: 4996)
//
//void main() {
//	int letter[26] = { 0 };
//	int blank = 0, word = 0;
//	char ch;
//	char fileName[30];
//
//	printf("Enter File Name: ");
//	scanf("%[^\n]s", &fileName);
//
//	FILE* fPtr = fopen(fileName, "r");
//	
//	if (fPtr == NULL) {
//		printf("File not found.\n");
//		exit(-1);
//	}
//
//	while (fscanf(fPtr, "%c", &ch) != EOF) {
//		if (isalpha(ch)) {
//			switch (toupper(ch)) {
//			case 'A': letter[0]++; break;
//			case 'B': letter[1]++; break;
//			case 'C': letter[2]++; break;
//			case 'D': letter[3]++; break;
//			case 'E': letter[4]++; break;
//			case 'F': letter[5]++; break;
//			case 'G': letter[6]++; break;
//			case 'H': letter[7]++; break;
//			case 'I': letter[8]++; break;
//			case 'J': letter[9]++; break;
//			case 'K': letter[10]++; break;
//			case 'L': letter[11]++; break;
//			case 'M': letter[12]++; break;
//			case 'N': letter[13]++; break;
//			case 'O': letter[14]++; break;
//			case 'P': letter[15]++; break;
//			case 'Q': letter[16]++; break;
//			case 'R': letter[17]++; break;
//			case 'S': letter[18]++; break;
//			case 'T': letter[19]++; break;
//			case 'U': letter[20]++; break;
//			case 'V': letter[21]++; break;
//			case 'W': letter[22]++; break;
//			case 'X': letter[23]++; break;
//			case 'Y': letter[24]++; break;
//			case 'Z': letter[25]++; break;
//			}
//		}
//		else if (ch == ' ') {
//			blank++;
//		}
//	}
//	word = blank + 1;
//	printf("Letter :-\n");
//	printf("\tA = %d\n", letter[0]);
//	printf("\tB = %d\n", letter[1]);
//	printf("\tC = %d\n", letter[2]);
//	printf("\tD = %d\n", letter[3]);
//	printf("\tE = %d\n", letter[4]);
//	printf("\tF = %d\n", letter[5]);
//	printf("\tG = %d\n", letter[6]);
//	printf("\tH = %d\n", letter[7]);
//	printf("\tI = %d\n", letter[8]);
//	printf("\tJ = %d\n", letter[9]);
//	printf("\tK = %d\n", letter[10]);
//	printf("\tL = %d\n", letter[11]);
//	printf("\tM = %d\n", letter[12]);
//	printf("\tN = %d\n", letter[13]);
//	printf("\tO = %d\n", letter[14]);
//	printf("\tP = %d\n", letter[15]);
//	printf("\tQ = %d\n", letter[16]);
//	printf("\tR = %d\n", letter[17]);
//	printf("\tS = %d\n", letter[18]);
//	printf("\tT = %d\n", letter[19]);
//	printf("\tU = %d\n", letter[20]);
//	printf("\tV = %d\n", letter[21]);
//	printf("\tW = %d\n", letter[22]);
//	printf("\tX = %d\n", letter[23]);
//	printf("\tY = %d\n", letter[24]);
//	printf("\tZ = %d\n", letter[25]);
//	printf("No. of words = %d\n", word);
//
//	fclose(fPtr);
//	system("pause");
//}