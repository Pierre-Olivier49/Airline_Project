//============================================================================
// Name        : Assignment2_Part1.cpp
// Author      : Pierre-Olivier Marquis ID: 40284322
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Time.h"
#include "Flight.h"
#include "Airline.h"
#include "Passenger.h"
#include "Booking.h"
using namespace std;

int main() {
    //Testing Flight and Airline:
    Flight flight1("F001", "New York", "London", 8);
    Flight flight2("F002", "London", "Paris", 2);
    Flight flight3("F003", "Paris", "Rome", 3);

    // Creating an Airline
    Airline airline("CoenAir", "123 Main St", "555-1234");

    // Adding flights to the airline
    airline.addFlight(flight1);
    airline.addFlight(flight2);
    airline.addFlight(flight3);

    // Listing all flights in the airline
    std::cout << "All flights in the airline:" << std::endl;
    airline.listAllFlights();
    std::cout << std::endl;

    // Listing flights departing from "New York"
    std::cout << "Flights departing from New York:" << std::endl;
    airline.listFlightsDepartingFrom("New York");
    std::cout << std::endl;

    // Listing flights arriving at "Rome"
    std::cout << "Flights arriving at Rome:" << std::endl;
    airline.listFlightsArrivingTo("Rome");
    std::cout << std::endl;

    // Listing flights departing from "Paris" and arriving at "Rome"
    std::cout << "Flights departing from Paris and arriving at Rome:" << std::endl;
    airline.listFlightsDepartingAndArriving("Paris", "Rome");
    std::cout << std::endl;

    // Removing a flight from the airline
    airline.removeFlight("F002");

    // Listing all flights in the airline after removal
    std::cout << "All flights in the airline after removing one flight:" << std::endl;
    airline.listAllFlights();
    std::cout << std::endl;

    //Testing Passengers:
    // Creating passengers
    Passenger passenger1("P001", "John Doe", "123 Elm St", "555-5678");
    Passenger passenger2("P002", "Jane Smith", "456 Oak St", "555-9876");
    passenger1.printInfo();
    passenger2.printInfo();

    //Bookings testing
    // Creating bookings
    Booking booking1(flight1, passenger1, "A1");
    Booking booking2(flight3, passenger2, "B2");

    // Getting booking details
    std::cout << "Booking 1 details:" << std::endl;
    std::cout << "Flight: " << booking1.getFlight().getFlightIdentifier() << std::endl;
    std::cout << "Passenger: " << booking1.getPassenger().getName() << std::endl;
    std::cout << "Seat: " << booking1.getSeatNumber() << std::endl;
    std::cout << std::endl;

    std::cout << "Booking 2 details:" << std::endl;
    std::cout << "Flight: " << booking2.getFlight().getFlightIdentifier() << std::endl;
    std::cout << "Passenger: " << booking2.getPassenger().getName() << std::endl;
    std::cout << "Seat: " << booking2.getSeatNumber() << std::endl;

    return 0;
}
