#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable: 4996)
#define MAXIMUM_LOAN_PERIOD 14
#define FINE_RATE 0.2

void main()
{
	int numberOfBooks, daysBorrowed, daysOverdue;
	double amountFined;

	printf("----------------\n");
	printf("BOOK LOAN SYSTEM\n");
	printf("----------------\n");
	printf("Enter the number of books  : ");
	scanf("%d", &numberOfBooks);
	printf("Enter the days of loan     : ");
	scanf("%d", &daysBorrowed);

	daysOverdue = daysBorrowed - MAXIMUM_LOAN_PERIOD;
	amountFined = numberOfBooks * daysOverdue * FINE_RATE;

	printf("----------------------------------------\n");
	if (daysBorrowed > 14)
		{printf("Days overdue : %d\n", daysOverdue);}
	else 
		{printf("Days overdue : 0\n");}
	if (amountFined >= 0)
		{printf("Fine         : RM % .2f\n", amountFined);}
	else
		{printf("Fine         : RM 0.00\n");}
	printf("----------------------------------------\n");

	system("pause");
}

/*
if (daysOverdue > 0)
   amountFined = daysOverdue * FINE_RATE * numBooks;
 else
 {
     daysOverdue = 0;
	 amountFined = 0;
}/