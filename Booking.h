//============================================================================
// Name        : Assignment2_Part1.cpp
// Author      : Pierre-Olivier Marquis ID: 40284322
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================
#ifndef BOOKING_H
#define BOOKING_H

#include "Flight.h"
#include "Passenger.h"
#include <string>

class Booking {
public:
    // Constructor
    Booking(const Flight& flight, const Passenger& passenger, std::string seatNumber);

    // Getters
    const Flight& getFlight() const;
    const Passenger& getPassenger() const;
    std::string getSeatNumber() const;

private:
    const Flight& flight;
    const Passenger& passenger;
    std::string seatNumber;
};

#endif // BOOKING_H
