#include <iostream>
#include <string>
#include "Shop.h"


string Shop::getShopName()
{
	return shopname;
}

void Shop::setShopName(string a)
{
	shopname = a;
}

string Shop::getProprietor()
{
	return proprietor;
}

void Shop::setProprietor(string b)
{
	proprietor = b;
}

string Shop::getStatus()
{
	return status;
}

void Shop::setStatus(string c)
{
	status = c;
}

string Shop::getBusiness()
{
	return (business1 + " " + business2);
}

void Shop::setBusiness(string d, string e)
{
	business1 = d;
	business2 = e;
}

void Shop::shopStatus()
{
	string input;
	cout << "Shop is " << status << " Now\n";
	cout << "If you want to close it press \'Y\' otherwise press \'N\' to remain Open\n";
	cin >> input;
	if(input == "Y" || input == "y"){
		cout << "\n\nThis Shop is now Closed\n";
		system("pause");
	}
	else if(input == "N" || input == "n"){
		cout << "\n\nThis Shop is still Open\n";
		system("pause");
	}
	else{
		cout << "Invalid Character\n";
		system("pause");
		shopStatus();
	}
}

void Shop::changeOwner()
{
	string input;
	string name;
	cout << "Shop Proprietor name is " << proprietor <<endl;
	cout << "If you want to change Proprietor press \'Y\' otherwise press \'N\' to remain " << proprietor << " as an owner." <<endl;
	cin >> input;
	if(input == "Y" || input == "y"){
		cout << "\n\nWho is new Proprietor?\n";
		cin >> name;
		cout << "\nNew Proprietor is " << name <<endl;
		system("pause");
		cout << "\nWelcome " << name << " Sir" <<endl;
		system("pause");
	}
	else if(input == "N" || input == "n"){
		cout << "\n\n" << proprietor << " is still owner of " << shopname <<endl;
		system("pause");
		cout << "\nThanks for being owner of this Shop\n";
		system("pause");
	}
	else{
		cout << "Invalid Character\n";
		system("pause");
		changeOwner();
	}
}

void Shop::addBusiness()
{
	string input, newBusiness;
	cout << "This shop currently have Business of " << business1 << " & " << business2 <<endl;
	cout << "If you want to add Business press \'Y\' otherwise press \'N\' to remain " << business1 << " & " << business2 << " business." <<endl;
	cin >> input;
	if(input == "Y" || input == "y"){
		cout << "\n\nWhich Business do you want to add in your Shop?" <<endl;
		cin >> newBusiness;
		cout << "\n New Business added to your shop and now this shop businesses are " << business1 << ", " << business2 << " & " << newBusiness << " Store" <<endl;
		system("pause");
		cout << "\nThanks for adding New Business\n";
		system("pause");
	}
	else if(input == "N" || input == "n"){
		cout << "\n\n" << "This Shop Business is " << business1 << " & " << business2 <<endl;
		system("pause");
	}
	else{
		cout << "\nInvalid Character\n";
		system("pause");
		addBusiness();
	}
}

void Shop::reductBusiness()
{
	string input;
	int removeBusiness;
	cout << "This shop currently have Business of " << business1 << " & " << business2 <<endl;
	cout << "If you want to removes Business press \'Y\' otherwise press \'N\' to remain " << business1 << " & " << business2 << " business." <<endl;
	cin >> input;
	if(input == "Y" || input == "y"){
		cout << "\n\nWhich Business do you want to remove from your Shop?\n";
		cout << "1. Hardware\n2. Electric" <<endl;
		cout << "Press 1 or 2 to remove a business from given list." <<endl;
		cin >> removeBusiness;
		if(removeBusiness == 1){
			cout << "\n" << business1 << " business has been removed from your shop" <<endl;
			system("pause");
			cout << "\nFeeling Sad to remove " << business1 << " Business\n";
			cout << "\nCurrent Business in this Shop is " << business2 <<endl;
			system("pause");
		}
		else if(removeBusiness == 2){
			cout << "\n" << business2 << " business has been removed from your shop" <<endl;
			system("pause");
			cout << "\nFeeling Sad to remove " << business2 << " Business\n";
			cout << "\nCurrent Business in this Shop is " << business1 <<endl;
			system("pause");
		}
		else{
			cout << "Wrong Input!!! Please choose 1 or 2 to remove business";
			system("pause");
			reductBusiness();
		}
	}
	else if(input == "N" || input == "n"){
		cout << "\n\n" << "This Shop Business is " << business1 << " & " << business2 <<endl;
		system("pause");
	}
	else{
		cout << "Invalid Character\n";
		reductBusiness();
	}
}

