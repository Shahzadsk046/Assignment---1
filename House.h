#ifndef HOUSE_H
#define HOUSE_H
#include <string>
using namespace std;

class House
{
	private:
		string houseOwner;
		int rooms;
	public:
		void setHouseOwner(string a);
		string getHouseOwner();
		
		void setRoom(int b);
		int getRoom();
		
		void changeHouseOwner();
		void addRoom();
};

#endif

