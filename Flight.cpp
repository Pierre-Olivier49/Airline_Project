//============================================================================
// Name        : Assignment2_Part1.cpp
// Author      : Pierre-Olivier Marquis ID: 40284322
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Flight.h"
#include <iostream>

// Default constructor
Flight::Flight() : departureTime(nullptr), arrivalTime(nullptr) {}

// Parameterized constructor
Flight::Flight(std::string identifier, std::string departureCity, std::string arrivalCity, int duration)
    : flightIdentifier(identifier), departureCity(departureCity), arrivalCity(arrivalCity), flightDuration(duration),
    departureTime(nullptr), arrivalTime(nullptr) {}

// Copy constructor
Flight::Flight(const Flight& other)
    : flightIdentifier(other.flightIdentifier), departureCity(other.departureCity), arrivalCity(other.arrivalCity),
    flightDuration(other.flightDuration) {
    // Deep copy for departureTime
    if (other.departureTime)
        departureTime = new Time(*other.departureTime);
    else
        departureTime = nullptr;

    // Deep copy for arrivalTime
    if (other.arrivalTime)
        arrivalTime = new Time(*other.arrivalTime);
    else
        arrivalTime = nullptr;
}

// Destructor
Flight::~Flight() {
    delete departureTime;
    delete arrivalTime;
}

// Getters
std::string Flight::getFlightIdentifier() const {
    return flightIdentifier;
}

std::string Flight::getDepartureCity() const {
    return departureCity;
}

std::string Flight::getArrivalCity() const {
    return arrivalCity;
}

int Flight::getFlightDuration() const {
    return flightDuration;
}

const Time* Flight::getDepartureTime() const {
    return departureTime;
}

const Time* Flight::getArrivalTime() const {
    return arrivalTime;
}
