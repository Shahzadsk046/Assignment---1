#include <iostream>
#include <string>
#include "House.h"

string House::getHouseOwner()
{
	return houseOwner;
}

void House::setHouseOwner(string a)
{
	houseOwner = a;
}

int House::getRoom()
{
	return rooms;
}

void House::setRoom(int b)
{
	rooms = b;
}

void House::changeHouseOwner()
{
	string input, name;
	cout << "House Owner is " << houseOwner <<endl;
	cout << "If you want to change Owner then press \'Y\' otherwise press \'N\' to remain this owner\n";
	cin >> input;
	if(input == "Y" || input == "y"){
		cout << "\n\nPlease Enter new Owner Name\n";
		cin >> name;
		cout << "\nNew Owner is of this House is now " << name <<endl;
		system("pause");
	}
	else if(input == "N" || input == "n"){
		cout << "\n\nOwner of this House is " << houseOwner <<endl;
		system("pause");
	}
	else{
		cout << "Invalid Character\n";
		system("pause");
		changeHouseOwner();
	}
}

void House::addRoom()
{
	string input;
	int addRoom;
	cout << "There are " << rooms << " Rooms in this House\n";
	cout << "If you want to Add Rooms then press \'Y\' otherwise press \'N\' to remain " << rooms << " Rooms\n";
	cin >> input;
	if(input == "Y" || input == "y"){
		cout << "\n\nHow many Rooms do you want to add?\n";
		cin >> addRoom;
		cout<< addRoom << " room has been added to this House and now it has " << (rooms + addRoom) << " Rooms"<<endl;
		system("pause");
	}
	else if(input == "N" || input == "n"){
		cout << "\n\nThere are " << rooms << " Rooms in this House." <<endl;
		system("pause");
	}
	else{
		cout << "Invalid Character\n";
		system("pause");
		changeHouseOwner();
	}
}

