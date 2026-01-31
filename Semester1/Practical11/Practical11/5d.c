#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)


void main() {
	char message[9], hiddenMsg[9] = "";
	int i,j, key = 0;

	printf("Enter a character to decrypt > ");
	scanf("%[^\n]s", &message);

	for (j = 0; j < 99; j++) {
		key++;
		for (i = 0; i < 8; i++) {
			hiddenMsg[i] = message[i] ^ key;
		}
		printf("%d. %s\n",key,  hiddenMsg);
	}

	system("pause");
}