#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

struct Date {
	int day, month, year;
};

typedef struct {
	char id[4], name[20];
	struct Date joinDate;
	char department[15];
}Employee;

#define MAX_SIZE 20
void displayAll(Employee emp[], int nEmployees);
void searchAll(Employee emp[], int nEmployees);
void viewRecord(Employee emp[], int nEmployees);
void editRecord(Employee emp[], int nEmployees);
void addRecord(Employee emp[], int *nEmployees);

void main() {

	Employee emp[MAX_SIZE] = {
		{"E01", "Alice Chin", 5, 12, 2008, "R&D"},
		{"E02", "John", 9,12,2011,"IT"},
		{"E03", "Vivian", 3,3,2015,"HR"},
		{"E04", "Alice Chin", 4,4,2011,"IT"},
		{"E05","Vivien Tan", 5,3,2015, "HR"}
	};

	int nEmployees = 5;
	int select;
	do {
		printf("-------------------------------\n");
		printf("Select your option:\n");
		printf("1. Display all employees\n");
		printf("2. Search employee\n");
		printf("3. View record\n");
		printf("4. Edit record\n");
		printf("5. Add record\n");
		printf("-------------------------------\n");
		rewind(stdin);
		printf("\tEnter your selection in number (0 to exit): ");
		scanf("%d", &select);

		switch (select) {
		case 1: displayAll(emp, nEmployees); break;
		case 2: searchAll(emp, nEmployees); break;
		case 3: viewRecord(emp, nEmployees); break;
		case 4: editRecord(emp, nEmployees); break;
		case 5: addRecord(emp, &nEmployees); break;
		}

	} while (select != 0);

	system("pause");
}

void displayAll(Employee emp[], int nEmployees) {
	printf("%-4s %-20s %-10s %-20s\n", "ID", "Name", "Date", "Department");
	printf("---------------------------------------------------------\n");
	for (int i = 0; i < nEmployees; i++) {
		printf("%-4s %-20s %02d/%02d/%04d %-20s\n", emp[i].id, emp[i].name, emp[i].joinDate.day, emp[i].joinDate.month, emp[i].joinDate.year, emp[i].department);
	}
	printf("---------------------------------------------------------\n");
}

void searchAll(Employee emp[], int nEmployees) {
	int month, year;
	rewind(stdin);
	printf("\nSearch month & year (EG: 03/2015): ");
	scanf("%d/%d", &month, &year);
	printf("\n%-4s %-20s %-10s %-20s\n", "ID", "Name", "Date", "Department");
	printf("---------------------------------------------------------\n");
	for (int i = 0; i < nEmployees; i++) {
		if (emp[i].joinDate.month == month && emp[i].joinDate.year == year) {
		printf("%-4s %-20s %02d/%02d/%04d %-20s\n", emp[i].id, emp[i].name, emp[i].joinDate.day, emp[i].joinDate.month, emp[i].joinDate.year, emp[i].department);
		}
	}
	printf("---------------------------------------------------------\n");
}

void viewRecord (Employee emp[], int nEmployees) {
	char empId[4];
	rewind(stdin);
	printf("\nEnter ID of Employee to view: ");
	scanf("%[^\n]s", &empId);
	for (int i = 0; i < nEmployees; i++) {
		if (strcmp(emp[i].id,empId) == 0 ) {
			printf("\nEmployee ID\t: %s\n", emp[i].id);
			printf("Employee Name\t: %s\n", emp[i].name);
			printf("Date Joined\t: %02d-%02d-%04d\n", emp[i].joinDate.day, emp[i].joinDate.month, emp[i].joinDate.year);
			printf("Department\t: %s\n", emp[i].department);
		}
	}

}

void editRecord(Employee emp[], int nEmployees) {
	char empId[4];
	rewind(stdin);
	printf("\nEnter ID of Employee to edit: ");
	scanf("%[^\n]s", &empId);
	for (int i = 0; i < nEmployees; i++) {
		if (strcmp(emp[i].id, empId) == 0) {
			printf("\nEmployee ID\t\t\t: %s\n", emp[i].id);
			rewind(stdin);
			printf("Employee Name\t\t\t: ");
			scanf("%[^\n]s", &emp[i].name);
			rewind(stdin);
			printf("Date Joined (EG:03/04/2015)\t: ");
			scanf("%d/%d/%d", &emp[i].joinDate.day, &emp[i].joinDate.month, &emp[i].joinDate.year);
			rewind(stdin);
			printf("Department\t\t\t: ");
			scanf("%[^\n]s", &emp[i].department);
			printf("\n");
		}
	}
	displayAll(emp, nEmployees);
}

void addRecord(Employee emp[], int *nEmployees) {
	if (*nEmployees <= MAX_SIZE) {
		rewind(stdin);
		printf("\nEnter ID for new employee (EG:E05)\t: ");
		scanf("%[^\n]s", &emp[*nEmployees].id);
		rewind(stdin);
		printf("Enter Employee Name\t\t: ");
		scanf("%[^\n]s", &emp[*nEmployees].name);
		rewind(stdin);
		printf("Enter Date Joined (EG:03/04/2015)\t: ");
		scanf("%d/%d/%d", &emp[*nEmployees].joinDate.day, &emp[*nEmployees].joinDate.month, &emp[*nEmployees].joinDate.year);
		while (emp[*nEmployees].joinDate.day < 0 || emp[*nEmployees].joinDate.day > 31 && emp[*nEmployees].joinDate.month < 0 || emp[*nEmployees].joinDate.month> 12) {
			rewind(stdin);
			printf("Invalid day or month!\n");
			printf("Enter Date Joined (EG:03/04/2015)\t: ");
			scanf("%d/%d/%d", &emp[*nEmployees].joinDate.day, &emp[*nEmployees].joinDate.month, &emp[*nEmployees].joinDate.year);
		}
		rewind(stdin);
		printf("Enter Department\t\t\t: ");
		scanf("%[^\n]s", &emp[*nEmployees].department);
		(*nEmployees)++;	
	}
	else {
		printf("Maximum reached.\n");
	}
	displayAll(emp, *nEmployees);
}
