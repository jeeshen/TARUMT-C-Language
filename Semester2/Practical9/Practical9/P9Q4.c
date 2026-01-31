#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void sum(int, int);
void difference(int, int);
void product(int, int);
void quotient(int, int);

void main() {
	int choice;
	int a, b;
	rewind(stdin);
	printf("Enter value a: ");
	scanf("%d", &a);
	rewind(stdin);
	printf("Enter value b: ");
	scanf("%d", &b);
	do {
		printf("\n1. Sum\n2. Difference\n3. Product\n4. Quotient\n5. Exit\n\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1: sum(a, b); break;
		case 2: difference(a, b); break;
		case 3: product(a, b); break;
		case 4: quotient(a, b); break;
		case 5: printf("Exiting..\n"); break;
		}
	} while (choice != 5);
}

void sum(int a, int b) {
	printf("%d + %d = %d\n", a, b, a + b);
}

void difference(int a, int b) {
	if (a > b) {
		printf("%d - %d = %d\n", a, b, a - b);
	}
	else {
		printf("%d - %d = %d\n", b, a, b - a);
	}
}

void product(int a, int b) {
	printf("%d * %d = %d\n", a, b, a * b);
}

void quotient(int a, int b) {
	printf("%d %% %d = %d\n", a, b, a % b);
}