//#include <stdio.h>
//#include <stdlib.h>
//#pragma warning (disable: 4996)
//#define CAR_RATE 1.00
//#define BUS_RATE 2.00
//#define TRUCK_RATE 3.00
//
//void main()
//{
//	int hour;
//	char vehicleCode;
//	double parkingRate, amount;
//
//	printf("Vechile code (C,B,T)  : ");
//	scanf("%c", &vehicleCode);
//	printf("Number of hours parked: ");
//	scanf("%d", &hour);
//	printf("\n\n");
//	printf("\tParking Ticket\n");
//	printf("\t================\n");
//	printf("Vehicle Type         : ");
//
//	switch (vehicleCode)
//	{
//		case 'C' :
//		case 'c' : printf("Car\n"); 
//			parkingRate = CAR_RATE; 
//			break;
//		case 'b' : 
//		case 'B' : printf("Bus\n"); 
//			parkingRate = BUS_RATE;
//			break;
//		case 't' :
//		case 'T' : printf("Truck\n"); 
//			parkingRate = TRUCK_RATE;
//			break;
//		default:
//			printf("Error\n");
//			parkingRate = 0.0;
//	}
//
//	amount = hour * parkingRate;
//
//	printf("Hour Parked          : %d\n", hour);
//	printf("Parking Rate / Hour  : RM %.2f\n", parkingRate);
//	printf("Amount to Pay        : RM %.2f\n", amount);
//
//	system("pause");
//}