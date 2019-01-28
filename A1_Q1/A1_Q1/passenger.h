#pragma once
#include <string>
#include "date.h"

using namespace std;

class Passenger
{
public:
	Passenger();
	Passenger(int, string, string, string, Date);
	void setPassenger(int, string, string, string, Date);
	void setPassengerID(int);
	void setPassengerName(string);
	void setPassengerAddress(string);
	void setPassengerPhone(string);
	void setPassengerDOB(Date);

	int getPassengerID(int);
	string getPassengerName(string);
	string getPassengerAddress(string);
	string getPassengerPhone(string);
	Date getPassengerDOB(Date);

	void printPassengerInfo();

	~Passenger();


private:
	int passID;
	string passName;
	string passAddress;
	string passPhone;
	Date passDOB;
};

