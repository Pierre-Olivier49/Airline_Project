//============================================================================
// Name        : Assignment2_Part1.cpp
// Author      : Pierre-Olivier Marquis ID: 40284322
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Passenger.h"
#include <iostream>
using namespace std;

// Constructor
Passenger::Passenger(std::string id, std::string name, std::string address, std::string phoneNumber)
    : id(id), name(name), address(address), phoneNumber(phoneNumber) {}

// Getters
std::string Passenger::getId() const {
    return id;
}

std::string Passenger::getName() const {
    return name;
}

std::string Passenger::getAddress() const {
    return address;
}

std::string Passenger::getPhoneNumber() const {
    return phoneNumber;
}
void Passenger::printInfo() const {
    std::cout << "Passenger ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Address: " << address << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
}
