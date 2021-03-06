//Andrew Kappert (40063638)
//August Marco Eine ()

#include "pch.h"
#include <iostream>
#include "date.h"
#include "passenger.h"

using namespace std;


int main()
{																 //variables used
	int id;														 //variables used
	string name, name1, name2;									 //variables used
	string address;												 //variables used
	string phone;												 //variables used
	Date DOB;													 //create object DATE
	int day;													 //variables used
	int month;													 //variables used
	int year;													 //variables used

	cout << "Set passenger's ID number: ";											 //Prompt for user input
	cin >> id;																		 //Prompt for user input
	cout << "Set passenger's name: ";												 //Prompt for user input
	cin >> name1;																	 //Prompt for user input
	getline(cin, name2);															 //Prompt for user input
	name = name1 + name2;															 //Prompt for user input
	cout << "Set passenger's address: ";											 //Prompt for user input
	getline(cin, address);															 //Prompt for user input
	cout << "Set passenger's phone number: ";										 //Prompt for user input
	getline(cin, phone);															 //Prompt for user input
	cout << "Set passenger's date of birth (day): ";								 //Prompt for user input
	cin >> day;																		 //Prompt for user input
	cout << "Set passenger's date of birth (month): ";								 //Prompt for user input
	cin >> month;																	 //Prompt for user input
	cout << "Set passenger's date of birth (year): ";								 //Prompt for user input
	cin >> year;																	 //Prompt for user input

	DOB.setDate(day, month, year);										   //Set date of birth
	Passenger passenger1(id, name, address, phone, DOB);				   //construct object passenger with info
	passenger1.printPassengerInfo();									   //print passenger info
	
	cout << endl;
	system("pause");
	return 0;
}
