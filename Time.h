	//============================================================================
// Name        : Assignment2_Part1.cpp
// Author      : Pierre-Olivier Marquis ID: 40284322
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================
#pragma once

#ifndef TIME_H
#define TIME_H

class Time {
private:
	int hours, minutes;

public:
	Time();				//Default constructor
	Time(int, int);		//Constructor

	int getHour();				//Getters
	int getMinute();

	void setHour(int);			//Setters
	void setMinute(int);

	void printTime(Time);		//Print fct

};


#endif
