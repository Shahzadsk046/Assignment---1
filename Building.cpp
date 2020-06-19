#include<iostream>
#include <string>
#include "Building.h"

float Building::getHeight()
{
	return height;
}

void Building::setHeight(float x)
{
	height = x;
}

string Building::getCity()
{
	return city;
}

void Building::setCity(string z)
{
	city = z;
}

int Building::getFloors()
{
	return floors;
}

void Building::setFloors(int y)
{
	floors = y;
}

void Building::floorRooms()
{
	int rooms[2][6] = { {1, 4, 2, 3, 3, 5},
						{4, 4, 5, 3, 6, 2}};
	int add, merge;
	cout << "\nDetails of Every Floor" <<endl;
	cout << "\nFloor " << rooms[0][0] << " has " << rooms[0][1] << " Rooms " <<endl;
	cout << "Floor " << rooms[0][2] << " has " << rooms[0][3] << " Rooms " <<endl;
	cout << "Floor " << rooms[0][4] << " has " << rooms[0][5] << " Rooms " <<endl;
	cout << "Floor " << rooms[1][0] << " has " << rooms[1][1] << " Rooms " <<endl;
	cout << "Floor " << rooms[1][2] << " has " << rooms[1][3] << " Rooms " <<endl;
	cout << "Floor " << rooms[1][4] << " has " << rooms[1][5] << " Rooms " <<endl;
	
	int select, option;
	cout << "\n     Which floor do you want to update?\n";
	cin >> select;
	switch(select){
		case 1:
			cout << "\n1st floor has " << rooms[0][1] << " Rooms\n";
			cout << "\n1. Add Room(s) in this floor\n";
			cout << "\n2. Merge Room(s) in this floor\n";
			cin >> option;
			if(option == 1){
				cout << "\nHow many rooms do you want to add in this Floor?\n";
				cin >> add;
				cout << add << " Rooms has been added\n";
				cout << "\nNow there are " << rooms[0][1] + add << " Rooms in this floor\n";
				system("pause");
			}
			else if(option == 2){
				cout << "\nHow many rooms do you want to Merge in this floor?\n";
				cin >> merge;
				cout << merge << " Rooms are merged\n";
				cout << "\n Now there are " << rooms[0][1] - --merge << " Rooms remaining in this floor\n";
				system("pause");
			}
			else{
				cout << "Wrong Input. Please Select from 1 to 6";
				system("pause");
			}
			break;
			
		case 2:
			cout << "\n2nd floor has " << rooms[0][3] << " Rooms\n";
			cout << "\n1. Add Room(s) in this floor\n";
			cout << "\n2. Merge Room(s) in this floor\n";
			cin >> option;
			if(option == 1){
				cout << "\nHow many rooms do you want to add in this Floor?\n";
				cin >> add;
				cout << add << " Rooms has been added\n";
				cout << "\nNow there are " << rooms[0][3] + add << " Rooms in this floor\n";
				system("pause");
			}
			else if(option == 2){
				cout << "\nHow many rooms do you want to Merge in this floor?\n";
				cin >> merge;
				cout << merge << " Rooms are merged\n";
				cout << "\n Now there are " << rooms[0][3] - --merge << " Rooms remaining in this floor\n";
				system("pause");
			}
			else{
				cout << "Wrong Input. Please Select from 1 to 6";
				system("pause");
			}
			break;
		
		case 3:
			cout << "\n3rd floor has " << rooms[0][5] << " Rooms\n";
			cout << "\n1. Add Room(s) in this floor\n";
			cout << "\n2. Merge Room(s) in this floor\n";
			cin >> option;
			if(option == 1){
				cout << "\nHow many rooms do you want to add in this Floor?\n";
				cin >> add;
				cout << add << " Rooms has been added\n";
				cout << "\nNow there are " << rooms[0][5] + add << " Rooms in this floor\n";
				system("pause");
			}
			else if(option == 2){
				cout << "\nHow many rooms do you want to Merge in this floor?\n";
				cin >> merge;
				cout << merge << " Rooms are merged\n";
				cout << "\n Now there are " << rooms[0][5] - --merge << " Rooms remaining in this floor\n";
				system("pause");
			}
			else{
				cout << "Wrong Input. Please Select from 1 to 6";
				system("pause");
			}
			break;
		
		case 4:
			cout << "\n4th floor has " << rooms[1][1] << " Rooms\n";
			cout << "\n1. Add Room(s) in this floor\n";
			cout << "\n2. Merge Room(s) in this floor\n";
			cin >> option;
			if(option == 1){
				cout << "\nHow many rooms do you want to add in this Floor?\n";
				cin >> add;
				cout << add << " Rooms has been added\n";
				cout << "\nNow there are " << rooms[1][1] + add << " Rooms in this floor\n";
				system("pause");
			}
			else if(option == 2){
				cout << "\nHow many rooms do you want to Merge in this floor?\n";
				cin >> merge;
				cout << merge << " Rooms are merged\n";
				cout << "\n Now there are " << rooms[1][1] - --merge << " Rooms remaining in this floor\n";
				system("pause");
			}
			else{
				cout << "Wrong Input. Please Select from 1 to 6";
				system("pause");
			}
			break;
		
		case 5:
			cout << "\n5th floor has " << rooms[1][3] << " Rooms\n";
			cout << "\n1. Add Room(s) in this floor\n";
			cout << "\n2. Merge Room(s) in this floor\n";
			cin >> option;
			if(option == 1){
				cout << "\nHow many rooms do you want to add in this Floor?\n";
				cin >> add;
				cout << add << " Rooms has been added\n";
				cout << "\nNow there are " << rooms[1][3] + add << " Rooms in this floor\n";
				system("pause");
			}
			else if(option == 2){
				cout << "\nHow many rooms do you want to Merge in this floor?\n";
				cin >> merge;
				cout << merge << " Rooms are merged\n";
				cout << "\n Now there are " << rooms[1][3] - --merge << " Rooms remaining in this floor\n";
				system("pause");
			}
			else{
				cout << "Wrong Input. Please Select from 1 to 6";
				system("pause");
			}
			break;
			
		case 6:
			cout << "\n6th floor has " << rooms[1][5] << " Rooms\n";
			cout << "\n1. Add Room(s) in this floor\n";
			cout << "\n2. Merge Room(s) in this floor\n";
			cin >> option;
			if(option == 1){
				cout << "\nHow many rooms do you want to add in this Floor?\n";
				cin >> add;
				cout << add << " Rooms has been added\n";
				cout << "\nNow there are " << rooms[1][5] + add << " Rooms in this floor\n";
				system("pause");
			}
			else if(option == 2){
				cout << "\nHow many rooms do you want to Merge in this floor?\n";
				cin >> merge;
				cout << merge << " Rooms are merged\n";
				cout << "\n Now there are " << rooms[1][5] - --merge << " Rooms remaining in this floor\n";
				system("pause");
			}
			else{
				cout << "Wrong Input. Please Select from 1 to 6";
				system("pause");
			}
			break;
		
		default:	
			cout << "Wrong Input. Please Select from 1 to 6";
			system("pause");
			floorRooms();
	}

}

void Building::paintBuilding()
{	
	string color;
	system("cls");
	cout << "\n **********************************************\n";
	cout << "          WELCOME TO SHAHJAHAN APPARTMENT";
	cout << "\n **********************************************\n";
	cout << "\nWhich color do you want to paint on this Building\n";
	cin >> color;
	cout << "\n" << color << " color has been painted to SHAHJAHAN APPARTMENT\n";
	system("pause");
}


void Building::paintfloor()
{
	int selectfloor;
	system("cls");
	cout << "\n**********************************************\n";
	cout << "         WELCOME TO SHAHJAHAN APPARTMENT";
	cout << "\n**********************************************\n";
	cout << "\n  There are 6 floors in Shahjahan Appartment.\n";
	cout << "\n      Which floor do you want to paint?\n";
	cin >> selectfloor;
	if(selectfloor == 1){
		cout << "1st floor has been painted\n";
		system("pause");
	}
	else if(selectfloor == 2){
		cout << "2nd floor has been painted\n";
		system("pause");
	}
	else if(selectfloor == 3){
		cout << "3rd floor has been painted\n";
		system("pause");
	}
	else if(selectfloor == 4){
		cout << "4th floor has been painted\n";
		system("pause");
	}
	else if(selectfloor == 5){
		cout << "5th floor has been painted\n";
		system("pause");
	}
	else if(selectfloor == 6){
		cout << "6th floor has been painted\n";
		system("pause");
	}
	else{
		cout << "Wrong Input. Please Select from 1 to 6\n";
		system("pause");
		paintfloor();
	}
}
