//============================================================================
// Name        : Assignment2_Part1.cpp
// Author      : Pierre-Olivier Marquis ID: 40284322
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================
#ifndef PASSENGER_H
#define PASSENGER_H
#include "Booking.h"
#include <iostream>
#include <string>

class Passenger {
public:
    // Constructors
    Passenger(std::string id, std::string name, std::string address, std::string phoneNumber);

    // Getters
    std::string getId() const;
    std::string getName() const;
    std::string getAddress() const;
    std::string getPhoneNumber() const;
    void printInfo() const;
    
private:
    std::string id;
    std::string name;
    std::string address;
    std::string phoneNumber;
    std::vector<Booking> bookings;
    
};

#endif // PASSENGER_H
