#ifndef INVITEM_H
#define INVITEM_H
#include <string>
using namespace std;

class InventoryItem
{
private:
	// Declare the private variables as per the assignment instructions.
	long serialNum;
	string manufactDate;
	int lotNum;

public:
	// Default constructor
	InventoryItem()
	{ serialNum = 0; manufactDate = ""; lotNum = 0; }

	// Constructor
	InventoryItem(long s, string m, int lot)
	{ serialNum = s; manufactDate = m; lotNum = lot; }
	
	// Mutator functions
	void setSerialNum(long s)
	{ serialNum = s; }
	
	void setManufactDate(string m)
	{ manufactDate = m; }

	void setLotNum(int lot)
	{ lotNum = lot; }

	// Accessor functions
	long getSerialNum() const
	{ return serialNum; }

	string setManufactDate()
	{ return manufactDate; }

	int getLotNum() const
	{ return lotNum; }

};
#endif
