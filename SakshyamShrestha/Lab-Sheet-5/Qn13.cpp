/*
    Design a airline data structure that stores the following.
    Flight number
    Originating airport code
    Destination airport code
    Starting time
    Arriving time 
*/

#include <stdio.h>

struct Airline {
    char flightNumber[11];
    char originAirportCode[5];
    char destinationAirportCode[5];
    char startingTime[7];
    char arrivingTime[7];
};

int main() {
    struct Airline flight;

    printf("Enter flight number (10 digits): ");
    scanf("%s", flight.flightNumber);
    printf("Enter originating airport code (4 digits): ");
    scanf("%s", flight.originAirportCode);
    printf("Enter destination airport code (4 digits): ");
    scanf("%s", flight.destinationAirportCode);
    printf("Enter starting time (HH:MM) (6 digits): ");
    scanf("%s", flight.startingTime);
    printf("Enter arriving time (HH:MM) (6 digits): ");
    scanf("%s", flight.arrivingTime);

    return 0;
}

