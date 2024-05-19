//============================================================================
// Name        : Assignment2_Part1.cpp
// Author      : Pierre-Olivier Marquis ID: 40284322
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================
#ifndef AIRLINE_H
#define AIRLINE_H

#include "Flight.h"
#include <string>
#include <vector>

class Airline {
public:
    // Constructors
    Airline(std::string name, std::string address, std::string phoneNumber);

    // Functionalities
    void addFlight(const Flight& flight);
    void removeFlight(const std::string& flightIdentifier);
    void listAllFlights() const;
    void listFlightsDepartingFrom(const std::string& city) const;
    void listFlightsArrivingTo(const std::string& city) const;
    void listFlightsDepartingAndArriving(const std::string& departureCity, const std::string& arrivalCity) const;
    int getNumFlights() const;

private:
    std::string name;
    std::string address;
    std::string phoneNumber;
    std::vector<Flight> flights;
};

#endif // AIRLINE_H
