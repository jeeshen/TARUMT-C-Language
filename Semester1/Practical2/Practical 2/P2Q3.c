//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning (disable: 4996)
//
//void main()
//{
//	//step 1, variables declaration
//	char firstName[11], lastName[21];
//	int heightCM;
//	double heightIN;
//	//step 2, prompt user to enter data
//	printf("Enter your first name > \n");
//	//scanf("%n", &firstName);
//	//scanf("%[^\n]", &firstName);
//	gets(firstName);
//	printf("Enter your last name > \n");
//	rewind(stdin);
//	//scanf("%n", &lastName);
//	scanf("%[^\n]", &lastName);
//	printf("Enter your height > \n");
//	rewind(stdin);
//	scanf("%d", &heightCM); 
//	
//	//step 3, calculation or process
//	heightIN = heightCM / 2.54;
//
//	//step 4, display answer
//	printf("\n%s %s, ", firstName, lastName);
//	printf("Your height is %f inches!!!\n\n", heightIN);
//
//	system("pause");
//
///*
//Enter your first name >
//jee
//Enter your last name >
//shen
//Enter your height >
//180
//
//jee shen, Your height is 70.866142 inches!!!
//
//Press any key to continue . . .
//*/
//
//}