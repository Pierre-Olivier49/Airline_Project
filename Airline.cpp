//============================================================================
// Name        : Assignment2_Part1.cpp
// Author      : Pierre-Olivier Marquis ID: 40284322
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Airline.h"
#include <iostream>

// Constructor
Airline::Airline(std::string name, std::string address, std::string phoneNumber)
    : name(name), address(address), phoneNumber(phoneNumber) {}

void Airline::addFlight(const Flight& flight) {
    flights.push_back(flight);
}

void Airline::removeFlight(const std::string& flightIdentifier) {
    for (auto it = flights.begin(); it != flights.end(); ++it) {
        if (it->getFlightIdentifier() == flightIdentifier) {
            flights.erase(it);
            return;
        }
    }
    std::cout << "Flight with identifier " << flightIdentifier << " not found." << std::endl;
}

void Airline::listAllFlights() const {
    std::cout << "List of all flights:" << std::endl;
    for (const auto& flight : flights) {
        std::cout << "Flight " << flight.getFlightIdentifier() << " - Departure: "
            << flight.getDepartureCity() << " - Arrival: " << flight.getArrivalCity() << std::endl;
    }
}

void Airline::listFlightsDepartingFrom(const std::string& city) const {
    std::cout << "Flights departing from " << city << ":" << std::endl;
    for (const auto& flight : flights) {
        if (flight.getDepartureCity() == city) {
            std::cout << "Flight " << flight.getFlightIdentifier() << " - Arrival: " << flight.getArrivalCity() << std::endl;
        }
    }
}

void Airline::listFlightsArrivingTo(const std::string& city) const {
    std::cout << "Flights arriving to " << city << ":" << std::endl;
    for (const auto& flight : flights) {
        if (flight.getArrivalCity() == city) {
            std::cout << "Flight " << flight.getFlightIdentifier() << " - Departure: " << flight.getDepartureCity() << std::endl;
        }
    }
}

void Airline::listFlightsDepartingAndArriving(const std::string& departureCity, const std::string& arrivalCity) const {
    std::cout << "Flights departing from " << departureCity << " and arriving to " << arrivalCity << ":" << std::endl;
    for (const auto& flight : flights) {
        if (flight.getDepartureCity() == departureCity && flight.getArrivalCity() == arrivalCity) {
            std::cout << "Flight " << flight.getFlightIdentifier() << std::endl;
        }
    }
}

int Airline::getNumFlights() const {
    return flights.size();
}
