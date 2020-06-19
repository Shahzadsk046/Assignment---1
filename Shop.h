#ifndef SHOP_H
#define SHOP_H
#include <string>
using namespace std;

class Shop
{
	private:
		string shopname;
		string proprietor;
		string status;
		string business1, business2;
	public:
		void setShopName(string a);
		string getShopName();
		
		void setProprietor(string b);
		string getProprietor();
		
		void setStatus(string c);
		string getStatus();
		
		void setBusiness(string d, string e);
		string getBusiness();
		
		void shopStatus();
		void changeOwner();
		void addBusiness();
		void reductBusiness();
};

#endif

