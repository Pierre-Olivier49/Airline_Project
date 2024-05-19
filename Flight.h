//============================================================================
// Name        : Assignment2_Part1.cpp
// Author      : Pierre-Olivier Marquis ID: 40284322
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================
#ifndef FLIGHT_H
#define FLIGHT_H

#include "Time.h"
#include <string>
#include <vector>

class Flight {
public:
    // Constructors
    Flight(); // Default constructor
    Flight(std::string identifier, std::string departureCity, std::string arrivalCity, int duration); // Parameterized constructor
    Flight(const Flight& other); // Copy constructor

    // Destructor
    ~Flight();

    // Getters
    std::string getFlightIdentifier() const;
    std::string getDepartureCity() const;
    std::string getArrivalCity() const;
    int getFlightDuration() const;
    const Time* getDepartureTime() const;
    const Time* getArrivalTime() const;

private:
    std::string flightIdentifier;
    std::string departureCity;
    std::string arrivalCity;
    Time* departureTime;
    Time* arrivalTime;
    int flightDuration;
    std::vector<Booking> bookings;
};

#endif // FLIGHT_H
