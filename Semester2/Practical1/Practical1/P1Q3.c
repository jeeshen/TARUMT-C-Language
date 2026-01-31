#include <stdlib.h>
#include <stdio.h>
#pragma warning (disable: 4996)

typedef struct {
	int hours, minutes;
} Time;

void main() {
	Time current, nextMin;

	printf("Enter hours: ");
	scanf("%d", &current.hours);
	rewind(stdin);
	printf("Enter minutes: ");
	scanf("%d", &current.minutes);

	nextMin.hours = current.hours;
	 nextMin.minutes = current.minutes + 1;
	if (nextMin.minutes >= 60) {
		nextMin.minutes = 0;
		nextMin.hours += 1;
	}
	if (nextMin.hours >= 12) {
		nextMin.hours -= 12;
	}
	printf("It is now %02d:%02d. Next minute it will be %02d:%02d\n", current.hours, current.minutes, nextMin.hours, nextMin.minutes);

	system("pause");
}
