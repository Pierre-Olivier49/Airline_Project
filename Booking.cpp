//============================================================================
// Name        : Assignment2_Part1.cpp
// Author      : Pierre-Olivier Marquis ID: 40284322
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Booking.h"

// Constructor
Booking::Booking(const Flight& flight, const Passenger& passenger, std::string seatNumber)
    : flight(flight), passenger(passenger), seatNumber(seatNumber) {}

// Getters
const Flight& Booking::getFlight() const {
    return flight;
}

const Passenger& Booking::getPassenger() const {
    return passenger;
}

std::string Booking::getSeatNumber() const {
    return seatNumber;
}
