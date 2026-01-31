//#include <stdlib.h>
//#include <stdio.h>
//#pragma warning (disable: 4996)
//
//void displayVehicleRate(char type);
//char getVehicleType();
//int calHoursParked(int inHr, int inMin, int outHr, int outMin);
//double parkingCharge(char vehicleType, int hrsParked);
//
//void displayVehicleRate(char type) {
//	if (type == 'c') {
//		printf("Car = RM 2 per hour, or part thereof\n");
//	}
//	else if (type == 'b') {
//		printf("Bus = RM 3 per hour, or part thereof\n");
//	}
//	else if (type == 't') {
//		printf("Truck = RM 4 per hour, or part thereof\n");
//	}
//}
//
//char getVehicleType() {
//	int result;
//	char type;
//	do {
//		rewind(stdin);
//		printf("Enter vehicle type (c,b,t): ");
//		scanf("%c", &type);
//		if (type == 'c' || type == 'b' || type == 't') {
//			result = 1;
//		}
//		else {
//			result = 0;
//		}
//	} while (!result);
//	return type;
//}
//
//int calHoursParked(int inHr, int inMin, int outHr, int outMin) {
//	int hoursParked;
//	if (inHr < 7 || inHr > 23 || outHr < 7 || outHr > 23 || (inHr == outHr && inMin > outMin)) {
//		return -1;
//	}
//
//	hoursParked = outHr - inHr;
//	if (outMin > inMin) {
//		hoursParked++;
//	}
//	return hoursParked;
//}
//
//double parkingCharge(char vehicleType, int hrsParked) {
//	double charge = 0;
//	if (vehicleType == 'c') {
//		charge = hrsParked * 2;
//	}
//	else if (vehicleType == 'b') {
//		charge = hrsParked * 3;						
//	}
//	else if (vehicleType == 't') {
//		charge = hrsParked * 4;
//	}
//	return charge;
//}
//
//void main() {
//	int inHr, inMin, outHr, outMin;
//	char type = getVehicleType();
//	
//	rewind(stdin);
//	printf("Time entered car park (hh mm): ");
//	scanf("%d %d", &inHr, &inMin);
//	rewind(stdin);
//	printf("Time exited car park  (hh mm): ");
//	scanf("%d %d", &outHr, &outMin);
//	int hoursParked = calHoursParked(inHr, inMin, outHr, outMin);
//	printf("\n\n==============================================\n");
//	printf("\t\tParking Ticket\n");
//	printf("Vehicle Type: ");
//	displayVehicleRate(type);
//	printf("Hours parked: %d\n", hoursParked);
//	printf("Please pay this amount ------------> RM %.2f\n", parkingCharge(type, hoursParked));
//	printf("Thank you & have a nice day!\n");
//	printf("==============================================\n");
//	system("pause");
//}