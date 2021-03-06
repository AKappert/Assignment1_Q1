//Test

#include "pch.h"
#include <iostream>
#include "date.h"
#include "passenger.h"

using namespace std;


int main()
{
	int id;
	string name, name1, name2;
	string address;
	string phone;
	Date DOB;
	int day;
	int month;
	int year;

	cout << "Set passenger's ID number: ";
	cin >> id;
	cout << "Set passenger's name: ";
	cin >> name1;
	getline(cin, name2);
	name = name1 + name2;
	cout << "Set passenger's address: ";
	getline(cin, address);
	cout << "Set passenger's phone number: ";
	getline(cin, phone);
	cout << "Set passenger's date of birth (day): ";
	cin >> day;
	cout << "Set passenger's date of birth (month): ";
	cin >> month;
	cout << "Set passenger's date of birth (year): ";
	cin >> year;

	DOB.setDate(day, month, year);
	Passenger passenger1(id, name, address, phone, DOB);
	passenger1.printPassengerInfo();
	
	cout << endl;
	system("pause");
	return 0;
}
