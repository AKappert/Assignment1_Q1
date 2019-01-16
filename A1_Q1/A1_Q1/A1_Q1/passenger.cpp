#include "pch.h"
#include "passenger.h"
#include <string>
#include <iostream>
#include "date.h"

using namespace std;

Passenger::Passenger()
{
	passID = 0;
	passName = "N/A";
	passAddress = "N/A";
	passPhone = "N/A";
	passDOB = Date();
}

Passenger::Passenger(int id, string name, string address, string phone, Date dob)
{
	passID = id;
	passName = name;
	passAddress = address;
	passPhone = phone;
	passDOB = dob;
}

void Passenger::setPassengerID(int id)
{
	passID = id;
}

void Passenger::setPassengerName(string name)
{
	passName = name;
}

void Passenger::setPassengerAddress(string address)
{
	passAddress = address;
}

void Passenger::setPassengerPhone(string phone)
{
	passPhone = phone;
}

void Passenger::setPassengerDOB(Date dob)
{
	passDOB = dob;
}

int Passenger::getPassengerID(int)
{
	return passID;
}

string Passenger::getPassengerName(string)
{
	return passName;
}

string Passenger::getPassengerAddress(string)
{
	return passAddress;
}

string Passenger::getPassengerPhone(string)
{
	return passPhone;
}

Date Passenger::getPassengerDOB(Date)
{
	return passDOB;
}

void Passenger::printPassengerInfo()
{
	cout << "\nID Number: " << passID << "\n";
	cout << "Name: " << passName << "\n";
	cout << "Address: " << passAddress << "\n";
	cout << "Phone Number: " << passPhone << "\n";
	cout << "Date of Birth: ";
	passDOB.printDate();
}


Passenger::~Passenger()
{
	cout << "\nPassenger destructor executed";
}
