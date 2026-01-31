//#include <stdlib.h>
//#include <stdio.h>
//#include <ctype.h>
//#pragma warning (disable: 4996)
//
//typedef struct {
//	char name[20];
//	char gender;
//	char playerType;
//	char countryCode[3];
//	int rank;
//} Player;
//
//void main() {
//	Player p;
//	FILE* fPtr = fopen("badmintonPlayers.txt", "a");
//	int i;
//
//	do {
//		rewind(stdin);
//		printf("Name: ");
//		scanf("%[^\n]s", &p.name);
//
//		if (strcmp(p.name, "XXX") != 0 ) {
//			rewind(stdin);
//			printf("Gender: ");
//			scanf("%c", &p.gender);
//			rewind(stdin);
//			printf("Player type(S=singles, d=doubles, x= mixed doubles): ");
//			scanf("%c", &p.playerType);
//			rewind(stdin);
//			printf("Country code: ");
//			scanf("%[^\n]s", &p.countryCode);
//			rewind(stdin);
//			printf("Ranking:  ");
//			scanf("%d", &p.rank);
//			fprintf(fPtr, "%s|%c|%c|%s|%d\n", p.name, p.gender, p.playerType, p.countryCode, p.rank);	
//		}
//	} while (strcmp(p.name, "XXX") != 0);
//
//	system("pause");
//}