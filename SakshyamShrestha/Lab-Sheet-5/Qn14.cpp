/*
    Now write a progarm that prints all the flight information for a specific airport entered by the user.
*/

#include <stdio.h>
#include <string.h>

struct Airline {
    char flightNumber[11];
    char originAirportCode[5];
    char destinationAirportCode[5];
    char startingTime[7];
    char arrivingTime[7];
};

int main() {
    struct Airline flights[5];
    char airportCode[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter flight number (10 digits): ");
        scanf("%s", flights[i].flightNumber);
        printf("Enter originating airport code (4 digits): ");
        scanf("%s", flights[i].originAirportCode);
        printf("Enter destination airport code (4 digits): ");
        scanf("%s", flights[i].destinationAirportCode);
        printf("Enter starting time (HH:MM) (6 digits): ");
        scanf("%s", flights[i].startingTime);
        printf("Enter arriving time (HH:MM) (6 digits): ");
        scanf("%s", flights[i].arrivingTime);
    }

    printf("Enter airport code to search for: ");
    scanf("%s", airportCode);

    printf("\nFlights departing from or arriving at %s:\n", airportCode);
    for (int i = 0; i < 5; i++) {
        if (strcmp(flights[i].originAirportCode, airportCode) == 0 || strcmp(flights[i].destinationAirportCode, airportCode) == 0) {
            printf("Flight Number: %s\n", flights[i].flightNumber);
            printf("Origin: %s\n", flights[i].originAirportCode);
            printf("Destination: %s\n", flights[i].destinationAirportCode);
            printf("Starting Time: %s\n", flights[i].startingTime);
            printf("Arriving Time: %s\n\n", flights[i].arrivingTime);
        }
    }

    return 0;
}