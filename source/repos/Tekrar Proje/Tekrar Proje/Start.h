#pragma once
#include <iostream> 
#include "Entities.h"
#include "Functions.h"
using namespace std; 

void ShowMenu() {
	cout << "------------------------------------" << endl;
	cout << "Show All Contacts    [1]" << endl; 
	cout << "Add New Contact      [2]" << endl; 
	cout << "Delete Contact       [3]" << endl;
	cout << "Search Contact       [4]" << endl;
	cout << "Sorted Contacts  A-Z [5]" << endl;
	cout << "Sorted Contacts  Z-A [6]" << endl;
}


void Start() {

	Human* h1 = new Human{
		new char[30] {"John"},
		new char[30] {"+994552111111"},
		__DATE__
	};

	Human* h2 = new Human{
		new char[30] {"Aydin"},
		new char[30] {"+994554665555"},
		__DATE__
	};

	Human* h3 = new Human{
		new char[30] {"Leyla"},
		new char[30] {"+994556476787"},
		__DATE__
	};

	Human* h4 = new Human{
		new char[30] {"Akif"},
		new char[30] {"+994555487963"},
		__DATE__
	};

	auto humans = new Human * [4] {h1, h2, h3, h4};
	Contact* contact = new Contact{ humans,4 };

	while (true)
	{
		ShowMenu();
		cout << "Please enter the chooice :";
		int select = 0;
		cin >> select;
		system("cls");
		if (select == 1) {
			ShowAll(*contact);
		}
		else if (select == 2) {
			Human* item = GetNewHuman();
			AddNewHuman(*contact, *item);
		}
		else if (select == 3) {
			cin.ignore();
			cin.clear();
			ShowAll(*contact);
			cout << "Please enter the Human ID :";
			int id;
			cin >> id;
			cin.ignore();
			cin.clear();
			if (id >= 1 && id <= contact->count) {
				int index = id - 1;
				DeleteHuman(*contact, index);
				cout << "Deleted succeffully" << endl;
			}
		}
		else if (select == 4) {
			cin.ignore();
			cin.clear();
			cout << "Enter the Human name :";
			char* name = new char[20] {};
			cin.getline(name, 20); 
			SearchHuman(*contact, name);
			cout << "Successfully found" << endl;
		}
		else if (select == 5) {
			SortAZ(*contact);
			system("cls");
			ShowAll(*contact);
		}
		else if (select == 6) {
			SortAZ(*contact, true);
			system("cls");
			ShowAll(*contact);
		}
	}
}