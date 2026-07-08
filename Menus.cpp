#include <iostream>
#include "Menus.h"
using namespace std;

void mainMenu(){
	int choice = 0;
	while (choice != 4) {
		cout << "====================================" << endl;
		cout << "\tMain Menu " << endl;
		cout << "====================================" << endl;
		cout << "1. Abstract Data Types" << endl;
		cout << "2. Sorting Algorithms" << endl;
		cout << "3. Searching Algorithms" << endl;
		cout << "4. Exit" << endl << endl;
		
		cout << "Enter choice: ";
		cin >> choice;
		
		switch(choice){
			case 1:
				dsaMenu();
				break;
				
			case 2:
				searchMenu();
				break;
			
			case 3:
				sortMenu();
				break;
			
			case 4:
				cout << "\nProgram exited successfully.";
				break;
				
			default:
				cout << "Invalid choice! Pick from 1-4 only." << endl << endl;
				break;
		}
	}
}

void adtMenu(){
	system("cls");
	cout << "====================================" << endl;
	cout << "Abstract Data Types" << endl;
	cout << "====================================" << endl;
	cout << "1. Stack" << endl;
	cout << "2. Queue" << endl;
	cout << "3. Trees" << endl;
	cout << "4. Graphs" << endl;
	cout << "5. "
}

void sortMenu(){
	system("cls");
	cout << "====================================" << endl;
	cout << "Sorting Algorithms" << endl;
	cout << "====================================" << endl;
	

}

void searchMenu(){
	system("cls");
	cout << "====================================" << endl;
	cout << "Searching Algorithms" << endl;
	cout << "====================================" << endl;
}



