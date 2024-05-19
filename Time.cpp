//============================================================================
// Name        : Assignment2_Part1.cpp
// Author      : Pierre-Olivier Marquis ID: 40284322
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include "Time.h"

Time::Time()								//Default constructor
{
	hours = 0;
	minutes = 0;
}

Time::Time(int hours, int minutes)			//Constructor
{
	this->hours = hours;
	this->minutes = minutes;
}

int Time::getHour()						//Getters
{
	return hours;
}
int Time::getMinute()
{
	return minutes;
}

void Time::setHour(int newHours)			//Setters
{	
	hours = newHours;
}
void Time::setMinute(int newMinutes)
{
	minutes = newMinutes;
}


void Time::printTime(Time time1)			//Print fct.
{
	std::cout << "Time: " << hours << " hours " << minutes << " minutes." << std::endl;
}
