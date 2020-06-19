#include <iostream>
#include "Building.h"
#include "Shop.h"
#include "House.h"

using namespace std;

int main(){
	Building b;
	Shop s;
	House h;
	int selectShop, selectHouse;
	
	cout << "\n**********************************************\n";
	cout << "         WELCOME TO SHAHJAHAN APPARTMENT";
	cout << "\n**********************************************\n";
	b.setHeight(30.5);
	cout << "\nTotal Height of this Building is " << b.getHeight() << "meters" <<endl;
	
	b.setCity("Attock");
	cout << "\nThis Building is Located in " << b.getCity() << " City" <<endl;
	
	b.setFloors(6);
	cout << "\nThis Building has Total " << b.getFloors() << " Floors" <<endl;
	
	b.floorRooms();
	
	b.paintBuilding();
	
	b.paintfloor();
	
//	Shop Details
	system("cls");
	cout << "\t\t\t\t******************************************\n";
	cout << "\t\t\t\t Welcome to ZK HARDWARE AND ELECTRIC STORE\n";
	cout << "\t\t\t\t******************************************\n\n";
	s.setShopName("ZK Hardware and Electric Store");
	cout << "Shop Name is " << s.getShopName() <<endl;
	
	s.setProprietor("Shehzad Khan");
	cout << "Shop Owner is " << s.getProprietor() <<endl;
	
	s.setStatus("Open");
	cout << "Shop is now " << s.getStatus() <<endl;
	
	s.setBusiness("Hardware", "Electric");
	cout << "Business of this Shop is " << s.getBusiness() <<endl;

	cout << "\n****************************\n";
	cout << "\t Main Menu\n";
	cout << "****************************\n\n";	
	cout << "1. Open/Close Shop\n";
	cout << "2. Change Proprietor Name\n";
	cout << "3. Add kind of business the shop runs\n";
	cout << "4. Remove kind of business the shop runs\n";
	cout << "5. Exit\n\n";
	cout << "Choose any number from given Menu (1 to 5): ";
	cin >> selectShop;
	
	switch(selectShop){
		case 1:
			system("cls");
			s.shopStatus();
			break;
		
		case 2:
			system("cls");
			s.changeOwner();
			break;
			
		case 3:
			system("cls");
			s.addBusiness();
			break;
			
		case 4:
			system("cls");
			s.reductBusiness();
			break;
			
		case 5:
			return 0;
			break;
			
		default:
			cout << "Please Enter value from 1 to 5\n";
			system("pause");
			main();
	}

//	House Details
	system("cls");
	cout << "\t\t\t\t******************************************\n";
	cout << "\t\t\t\t Welcome to SHEHZAD KHAN's HOUSE'\n";
	cout << "\t\t\t\t******************************************\n\n";
	h.setHouseOwner("Shehzad Khan");
	cout << "\t\t\t\tHouse Owner is " << h.getHouseOwner() <<endl;	
	
	h.setRoom(5);
	cout << "\t\t\t\tThere are " << h.getRoom() << " Rooms in this House" <<endl;
	
	cout << "\n****************************\n";
	cout << "\t Main Menu\n";
	cout << "****************************\n\n";	
	cout << "1. Change Ownership\n";
	cout << "2. Add room in the House\n";
	cout << "3. Exit\n\n";
	cout << "Choose any number from given Menu: ";
	cin >> selectHouse;

	switch(selectHouse){
		case 1:
			system("cls");
			h.changeHouseOwner();
			break;
		
		case 2:
			system("cls");
			h.addRoom();
			break;
			
		case 3:
			return 0;
			break;

		default:
			cout << "Please Enter value from 1 to 3\n";
			system("pause");
			main();
	}
	
	return 0;
}
