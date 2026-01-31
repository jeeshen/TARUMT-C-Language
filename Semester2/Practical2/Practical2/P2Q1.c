//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable:4996)
//
//typedef struct {
//	char performanceName[50];
//	char songName[50];
//	int year;
//	int totalPlayTimeInSecond;
//}Songs;
//
//void main() {
//	Songs songList[10] = {
//	{ "Ed Sheeran", "Perfect Place", 2019, 253 },
//	{ "Taylor Swift", "Love Story", 2008, 260 },
//	{ "Taylor Swift", "September", 2018, 225 },
//	{ "Bruno Mars", "24K Magic", 2016, 249 },
//	{ "Taylor Swift", "Style", 2014, 194 },
//	{ "Ed Sheeran", "Happier", 2018, 203 },
//	{ "Taylor Swift", "You belong with me", 2008, 235 },
//	{ "Bruno Mars", "Just the way you are", 2010, 190 },
//	{ "Ed Sheeran", "Lego home", 2011, 193 },
//	{ "Bruno Mars", "It will rain", 2011, 195 } };
//
//	printf("My collection of songs:\n");
//	printf("%20s\t%20s\tYear\tPlaytime\n", "Performer", "Song");
//	printf("-----------------------------------------------------------------------\n");
//
//	int i;
//	int playTime = 0;
//	int count = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%20s\t%20s\t%d\t%ds\n", songList[i].performanceName, songList[i].songName, songList[i].year, songList[i].totalPlayTimeInSecond);
//		playTime += songList[i].totalPlayTimeInSecond;
//	}
//	printf("-----------------------------------------------------------------------\n");
//	printf("Total Playing Time = %d seconds (= %d min %d sec)\n\n", playTime, playTime/60, playTime%60);
//	
//	printf("List of songs - 2015 and ealier:\n");
//		printf("%20s\t%20s\t\tYear\tPlaytime\n", "Performer", "Song");
//	printf("-----------------------------------------------------------------------\n");
//	for (i = 0; i < 10; i++) {
//		if (songList[i].year < 2015) {
//			count += 1;
//			printf("%2d. %20s\t%20s\t%d\t%ds\n", count, songList[i].performanceName, songList[i].songName, songList[i].year, songList[i].totalPlayTimeInSecond);
//		}
//	}
//	printf("-----------------------------------------------------------------------\n");
//
//	//int count2 = 0;
//	//char singerName[50];
//	//printf("\n\nPerformer's Name to search > ");
//	//scanf("%[^\n]s", &singerName);
//	//rewind(stdin);
//	//printf("%20s\t\tYear\tPlaytime\n", "Song");
//	//printf("----------------------------------------------------------\n");
//	//for (i = 0; i < 10; i++) {
//	//	if (strcmp(songList[i].performanceName,singerName) == 0 ) {
//	//		count2 += 1;
//	//		printf("%2d. %20s\t%d\t%ds\n", count2, songList[i].songName, songList[i].year, songList[i].totalPlayTimeInSecond);
//	//	}
//	//}
//	//printf("----------------------------------------------------------\n");
//	//printf("\t%d records found for Performer's Name = %s\n\n", count2, singerName);
//
//	int count3 = 0;
//	char singerName2[50];
//	int searchTimeStart;
//	int searchTimeEnd;
//	int totalTime = 0;
//	printf("Searching based on 2 criteria:");
//	printf("\n\n1. Performer's Name to search > ");
//	scanf("%[^\n]s", &singerName2);
//	rewind(stdin);
//	printf("\n2. Playing Time range - From > ");
//	scanf("%d", &searchTimeStart);
//	rewind(stdin);
//	printf("\t\t\tTo >  ");
//	scanf("%d", &searchTimeEnd);
//	printf("%20s\t%20s\t\tYear\tPlaytime\n", "Performer", "Song");
//	printf("-----------------------------------------------------------------------\n");
//	for (i = 0; i < 10; i++) {
//		if (strcmp(songList[i].performanceName, singerName2) == 0 && songList[i].totalPlayTimeInSecond > searchTimeStart && songList[i].totalPlayTimeInSecond < searchTimeEnd) {
//			count3 += 1;
//			printf("%2d. %20s\t%20s\t%d\t%ds\n", count3,songList[i].performanceName, songList[i].songName, songList[i].year, songList[i].totalPlayTimeInSecond);
//			totalTime += songList[i].totalPlayTimeInSecond;
//		}
//	}
//	printf("-----------------------------------------------------------------------\n");
//	printf("\tTotal Playing Time = %d seconds (= %d minutes %d seconds)\n", totalTime, totalTime / 60, totalTime % 60);
//	system("pause");
//}