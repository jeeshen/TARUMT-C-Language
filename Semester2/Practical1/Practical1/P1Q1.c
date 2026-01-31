//#include <stdlib.h>
//#include <stdio.h>
//#pragma warning (disable: 4996)
//
//struct Attendance {
//	char studentName[40];
//	char programmeCode[4];
//	int yearOfStudy;
//	int groupNo;
//	int daysAbsent;
//};
//
//void main() {
//	struct Attendance att = {
//		"Tan Ah Kow", "DFT", 1, 14,0
//	};
//	//struct Attendance att;
//	//strcpy(att.studentName, "Tan Ah Kow");
//	//strcpy(att.programmeCode, "DFT");
//	//att.yearOfStudy = 1;
//	//att.groupNo = 14;
//	//att.daysAbsent = 0;
//
//	/*struct Attendance att;*/
//
//	//printf("Please enter your name: ");
//	//scanf("%[^\n]s", &att.studentName);
//	//rewind(stdin);
//	//printf("Please enter your programme code: ");
//	//scanf("%[^\n]s", &att.programmeCode);
//	//rewind(stdin);
//	//printf("Please enter your year of study: ");
//	//scanf("%d", &att.yearOfStudy);
//	//rewind(stdin);
//	//printf("Please enter your group number: ");
//	//scanf("%d", &att.groupNo);
//	//rewind(stdin);
//	//printf("Please enter your days of absent: ");
//	//scanf("%d", &att.daysAbsent);
//
//	printf("Name\t\tProgramme\tYear of study\tGroup\tDays Absent\tAction\n");
//	printf("===============================================================================\n");
//	printf("%s\t%s\t\t\t%d\t%d\t%d\t\t", att.studentName, att.programmeCode, att.yearOfStudy,att.groupNo,att.daysAbsent);
//	if (att.daysAbsent >= 5) {
//		printf("Ban from exam\n");
//	}
//	else if (att.daysAbsent > 2) {
//		printf("Inform parents\n");
//	}
//	else if (att.daysAbsent > 0) {
//		printf("Warning\n");
//	}
//	else {
//		printf("None\n");
//	}
//	printf("\n");
//	system("pause");
//}