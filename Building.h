#ifndef BUILDING_H
#define BUILDING_H
using namespace std;

class Building
{
	private:
		float height;
		int floors;
		string city;
	public:
		void setHeight(float x);
		float getHeight();
		
		void setFloors(int y);
		int getFloors();
		
		void setCity(string z);
		string getCity();
		
		void floorRooms();
		void paintfloor();
		void paintBuilding();
};

#endif
