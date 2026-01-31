#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

#define MAX_TRAINS 100
#define MAX_BOOKINGS 100

int bookingIdCounter = 0;

typedef struct {
    // train information
    int trainId;
    char departureDate[20];
    int availableSeats;
} Train;

typedef struct {
    //booking information
    int bookingId;
    int trainId;
    char departureDate[20];
    int seatNumber;
    char status[20];
    int quantity;
    // Payment information
    char paymentStatus[20];
    double amount;
    char paymentMethod[20];
} Booking;

void book_ticket(Train* trains, Booking* bookings, int trainCount, int* bookingCount);


void book_ticket(Train* trains, Booking* bookings, int trainCount, int* bookingCount)
{
    Booking book, temp;
    FILE* fPtr;
    int seatNumber;
    char trainId[10];
    int quantity;
    float totalAmount;
    int trainIndex = -1;
    double price = 24.5;

    char paymentmethod[20];

    printf("Enter Train ID: ");
    scanf("%d", &book.trainId);

    for (int i = 0; i < trainCount; i++) {
        if (trains[i].trainId == book.trainId) {
            trainIndex = i;
            break;
        }
    }



    printf("Enter departure date: ");
    scanf("%s", &book.departureDate);

    printf("Enter Seat Number: ");
    scanf("%d", &book.seatNumber);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    strcpy(book.status, "Confirmed");

    printf("Select your payment method (Card/ Bank Transfer): ");
    scanf("%19s", book.paymentMethod);

    strcpy(book.paymentStatus, "Confirmed");

    book.amount = quantity * price;
    printf("You are required to pay RM%.2f\n via %s\n", book.amount, book.paymentMethod);



    printf("Press Enter to continue...");
    getchar();
    getchar();

    // Assign booking ID and increment the counter
    book.bookingId = 1000;
    fPtr = fopen("booked_tickets.bin", "rb");
    while (fread(&temp, sizeof(Booking), 1, fPtr)) {
        if (temp.bookingId > book.bookingId) {
            book.bookingId = temp.bookingId;
        }
    }

    book.bookingId++;

    // Decrease available seats in the selected train
    trains[trainIndex].availableSeats -= quantity;

    // Add booking to the array
    bookings[*bookingCount] = book;
    (*bookingCount)++;

    fPtr = fopen("booked_tickets.bin", "ab");
    fwrite(&book, sizeof(Booking), 1, fPtr);
    fclose(fPtr);
}

void add_train(Train trains[], int* trainCount) {
    if (*trainCount >= MAX_TRAINS) {
        printf("Maximum trains reached.\n");
        return;
    }

    Train new_train;

    // Input train details
    printf("Enter Train ID: ");
    scanf("%d", &new_train.trainId);

    printf("Enter Departure Date: ");
    scanf("%s", new_train.departureDate);

    printf("Enter Available Seats: ");
    scanf("%d", &new_train.availableSeats);

    // Add new train
    trains[*trainCount] = new_train;
    (*trainCount)++;

    printf("Train added successfully.\n");
}

// Function to save trains to a binary file
void save_trains(const Train trains[], int trainCount) {
    FILE* file = fopen("trains.bin", "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fwrite(trains, sizeof(Train), trainCount, file);
    fclose(file);
}
void load_trains(Train trains[], int* trainCount) {
    FILE* file = fopen("trains.bin", "rb");
    if (file == NULL) {
        printf("No existing trains found.\n");
        return;
    }
    *trainCount = fread(trains, sizeof(Train), MAX_TRAINS, file);
    fclose(file);
    printf("Trains loaded successfully.\n");
}

void cancel_ticket(Booking* bookings, int booking_count) {
    int bookingId;
    FILE* fPtr;
    FILE* fPtr2;
    Booking book;

    printf("\n==========================================");
    printf("\n\tEnter Booking ID to cancel: ");
    scanf("%d", &bookingId);
    fPtr = fopen("booked_tickets.bin", "rb");
    fPtr2 = fopen("tempbooked.bin", "ab");
    if (bookingId < 0 || bookingId >= booking_count) {
        printf("Invalid Booking ID\n");
        return;
    }

    // Update booking status
    while (fread(&book, sizeof(Booking), 1, fPtr)) {
        if (bookingId != book.bookingId) {
            fwrite(&book, sizeof(Booking), 1, fPtr2);
        }
    }
    fclose(fPtr);
    fclose(fPtr2);
    remove("booked_tickets.bin");
    rename("tempbooked.bin", "booked_tickets.bin");
    printf("Ticket canceled successfully!\n");
}

void display_trains(Train* trains, int train_count) {
    printf("Available Trains:\n");
    printf("Train ID\tDeparture Date\tAvailable Seats\n");
    for (int i = 0; i < train_count; i++) {
        printf("%d\t\t%s\t%d\n", trains[i].trainId, trains[i].departureDate, trains[i].availableSeats);
    }
}

void display_bookings(Booking* bookings, int booking_count) {
    printf("Bookings:\n");
    printf("Booking ID\tTrain ID\tDeparture Date\tSeat Number\tStatus\tPayment Status\tAmount\tPayment Method\n");
    for (int i = 0; i < booking_count; i++) {
        printf("%d\t\t%d\t\t%s\t%d\t\t%s\t%s\t%.2f\t%s\n",
            bookings[i].bookingId, bookings[i].trainId, bookings[i].departureDate, bookings[i].seatNumber,
            bookings[i].status, bookings[i].paymentStatus, bookings[i].amount, bookings[i].paymentMethod);
    }
}

void save_data(Train* trains, Booking* bookings, int train_count, int booking_count) {
    FILE* trainFile = fopen("trains.bin", "wb");
    FILE* bookingFile = fopen("booked_tickets.bin", "wb");

    if (trainFile == NULL || bookingFile == NULL) {
        printf("Error opening files for writing.\n");
        return;
    }

    fwrite(trains, sizeof(Train), train_count, trainFile);
    fwrite(bookings, sizeof(Booking), booking_count, bookingFile);

    fclose(trainFile);
    fclose(bookingFile);
}

void load_data(Train* trains, Booking* bookings, int* train_count, int* booking_count) {
    FILE* trainFile = fopen("trains.bin", "rb");
    FILE* bookingFile = fopen("booked_tickets.bin", "rb");

    if (trainFile == NULL || bookingFile == NULL) {
        printf("Error opening files for reading.\n");
        return;
    }

    *train_count = fread(trains, sizeof(Train), MAX_TRAINS, trainFile);
    *booking_count = fread(bookings, sizeof(Booking), MAX_BOOKINGS, bookingFile);

    fclose(trainFile);
    fclose(bookingFile);
}

float calculate_ticket_price(int quantity) {
    double ticketprice = (double)quantity * 24.5;
    printf("%.2f", &ticketprice);
    return (double)quantity * 24.5;
}

int main() {
    Train trains[MAX_TRAINS];
    Booking bookings[MAX_BOOKINGS];
    int trainCount = 0;
    int bookingCount = 0;


    load_data(trains, bookings, &trainCount, &bookingCount);


    int choice;
    do {
        printf("==============");
        printf("Ticket Booking");
        printf("==============");
        printf("\n1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Display Available Trains\n");
        printf("4. Display Bookings\n");
        printf("5. Save and Exit\n");
        printf("6. add Trains\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            book_ticket(trains, bookings, trainCount, &bookingCount);
            break;
        case 2:
            cancel_ticket(bookings, bookingCount);
            break;
        case 3:
            display_trains(trains, trainCount);
            break;
        case 4:
            display_bookings(bookings, bookingCount);
            break;
        case 5:
            save_data(trains, bookings, trainCount, bookingCount);
            printf("Data saved. Exiting program...\n");
            break;
        case 6:
            add_train(trains, &trainCount); // Call the function to add trains
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}