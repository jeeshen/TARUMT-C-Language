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
//}Player;
//void main() {
//	Player p;
//	char gameType[20] = "";
//	int count = 0;
//	FILE* fPtr = fopen("badmintonPlayers.txt", "r");
//	printf("%20s %10s %10s %20s %10s\n", "Name", "Gender", "Country", "Game Type", "Ranking");
//	printf("---------------------------------------------------------------------------\n");
//	while (fscanf(fPtr, "%19[^|]|%c|%c|%[^|]|%d\n", &p.name, &p.gender, &p.playerType, &p.countryCode, &p.rank) != EOF) {
//		if (p.gender == 'M') {
//			if (p.playerType == 'S') {
//				strcpy(gameType, "Men's Single");
//			}
//			else if (p.playerType == 'D') {
//				strcpy(gameType ,"Men's Double");
//			}
//			else if (p.playerType == 'X') {
//				strcpy(gameType,"Mixed Double");
//			}
//		}
//		else if (p.gender == 'F') {
//			if (p.playerType == 'S') {
//				strcpy(gameType,"Female's Single");
//			}
//			else if (p.playerType == 'D') {
//				strcpy(gameType ,"Female's Double");
//			}
//			else if (p.playerType == 'X') {
//				strcpy(gameType ,"Mixed Double");
//			}
//		}
//		printf("%20s %10c %10c %20s %10d\n", p.name, p.gender, p.playerType, gameType, p.rank);
//		count++;
//	}
//	printf("---------------------------------------------------------------------------\n");
//	printf("\t%d player (s) listed.\n", count);
//}