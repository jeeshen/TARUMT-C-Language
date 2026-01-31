#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void menu();
void displaySmallest();
void displayLargest();
void displaySum();
void displayAverage();

//global variables
int sum, smallest, largest;
double average;

void main() {
	int i, num, option;

	sum = 0;
	smallest = 9999;
	largest = -9999;

	for (i = 1; i <= 5; i++)
	{
		printf("Enter number %d: ", i);
		scanf("%d", &num);

		if (num < smallest)
			smallest = num;

		if (num > largest)
			largest = num;

		sum += num;
	}
	average = sum / 5.0;

	do {
		menu();
		scanf("%d", &option);

		switch (option) {
		case 1: displaySmallest(); break;
		case 2: displayLargest(); break;
		case 3: displaySum(); break;
		case 4: displayAverage(); break;
		case 0: break;
		default: printf("Invalid Entry");
		}
	} while (option != 0);


	system("pause");
}

void menu() {
	printf("\nOptions: \n");
	printf("1. Display smallest number\n");
	printf("2. Display largest number\n");
	printf("3. Display sum\n");
	printf("4. Display average\n");
	printf("0. Exit\n");
	printf("\nSelect your option > ");
}

void displaySmallest() {
	printf("\nSmallest = %d\n", smallest);
}

void displayLargest() {
	printf("\nLargest = %d\n", largest);

}

void displaySum() {
	printf("\nSum = %d\n", sum);
}

void displayAverage() {
	printf("\nAverage = %d\n", average);
}