// Assignment10-InventoryBinStack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "InvItem.h"
#include "DynStack.h"
using namespace std;


int main()
{
	DynStack<InventoryItem> stack;
	InventoryItem item;

	int choice;
	long serial;
	string mdate;

	do
	{
		//Display menu.
		cout << "\n************************INVENTORY MENU************************************\n\n";
		cout << "1. Add a part.\n";
		cout << "2. Remove a part.\n";
		cout << "3. Quit.\n\n";
		cout << "\n\nPlease select from the menu above (1, 2, or 3).\n\n>>>>>>>>>> ";
		cin >> choice;
		cin.ignore();

		// input validation
		while (choice < 1||choice > 3)
		{
			cout << "ERROR! Invalid input!\n";
			system("pause");
			system("cls");
			cout << "\n************************INVENTORY MENU************************************\n\n";
			cout << "1. Add a part.\n";
			cout << "2. Remove a part.\n";
			cout << "3. Quit.\n\n";
			cout << "\n\nPlease select from the menu above (1, 2, or 3).\n\n>>>>>>>>>> ";
			cin >> choice;
			cin.ignore();
		}

		// Execute user command
		switch(choice)
		{
		case 1:
			// Add part to inventory
			cout << "\nEnter the item's serial number.\n\n>>>>>>>>> ";
			cin >> serial;
			cin.ignore();
			item.setSerialNum(serial);
			cout << "Enter the manufacture date.\n\n>>>>>>>>> ";
			cin >> mdate;
			item.setManufactDate(mdate);
			stack.push(item);
			break;
		
		case 2:
			//Remove part from inventory.
			if(stack.isEmpty())
				cout << "Nothing to remove. This bin is empty.\n";
			else
			{
				stack.pop(item);
				cout << "\nYou removed:\n";
				cout << "\tSerial number: " << item.getSerialNum() << "\n";
				cout << "\tManufacture date: " << item.setManufactDate() << "\n";
				cout << "\n";
			}
			break;

		case 3:
			cout << "\nGoodbye, and have a pleasant evening!\n";
			system("pause");
			break;
		}
	} while (choice !=3);



	return 0;
}

