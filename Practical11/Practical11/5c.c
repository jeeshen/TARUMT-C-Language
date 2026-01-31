//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable: 4996)
//
//void encryptWord() {
//	char letter[9], enLetter[9] = "";
//	int digitKey, i;
//	
//	printf("Enter a character > ");
//	scanf("%[^\n]s", &letter);
//	rewind(stdin);
//	printf("Enter 2-digit key > ");
//	scanf("%d", &digitKey);
//	
//	for (i = 0; i < 8; i++) {
//		enLetter[i] = letter[i] ^ digitKey;
//	}
//
//	printf("\nString '%s' is encrypted to: %s\n", letter, enLetter);
//}
//
//void decryptWord() {
//	char letter[9], deLetter[9] = "";
//	int digitKey, i;
//
//	rewind(stdin);
//	printf("Enter a character to decrypt > ");
//	scanf("%[^\n]s", &letter);
//	rewind(stdin);
//	printf("Enter 2-digit decryption key > ");
//	scanf("%d", &digitKey);
//
//	for (i = 0; i < 8; i++) {
//		deLetter[i] = letter[i] ^ digitKey;
//	}
//
//	printf("\nString '%s' is decrypted to: %s\n", letter, deLetter);
//}
//
//void main() {
//	encryptWord();
//
//	printf("\n---------------------------------------------\n\n");
//	decryptWord();
//
//	system("pause");
//}