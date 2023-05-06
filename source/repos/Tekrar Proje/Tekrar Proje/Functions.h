#pragma once
#include <iostream> 
#include "Entities.h" 
using namespace std; 

void ShowHuman(const Human& human) {
	cout << "=================================" << endl;
	cout << "Name : " << human.name << endl; 
	cout << "Phone : " << human.phone << endl; 
	cout << "Created Date : " << human.createData << endl;
}

void ShowAll(const Contact& contact) {
	for (size_t i = 0; i < contact.count; i++)
	{
		cout << "No :" << i + 1 << endl;
		ShowHuman(*contact.humans[i]);
	}
}

Human* GetNewHuman() {
	cin.ignore();
	cin.clear();
	cout << "Enter the name :";
	char* name = new char[20] {};
	cin.getline(name, 20);

	cout << "Enter the phone :";
	char* phone = new char[20] {};
	cin.getline(phone, 20);

	Human* human = new Human{ name,phone,__DATE__ };
	return human;
}

void AddNewHuman(Contact& contact, const Human& human ) {
	int count = contact.count;
	auto temp = new Human * [count + 1];
	for (size_t i = 0; i < count; i++)
	{
		temp[i] = contact.humans[i];
	}
	temp[count] = new Human{ human };
	contact.humans = temp;
	contact.count += 1;
	temp = nullptr;
	cout << "New contact added successfully" << endl;
}

void DeleteHuman(Contact& contact, int index) {
	auto temp = new Human * [contact.count - 1];
	for (size_t i = 0; i < index; i++)
	{
		temp[i] = contact.humans[i];
	}

	for (size_t i = index+1; i < contact.count-1; i++)
	{
		temp[i - 1] = contact.humans[i];
	}
	contact.humans = temp;
	temp = nullptr;
	contact.count--;
}

void SearchHuman(Contact& contact, char* name) {
	bool flag = false;
	for (size_t i = 0; i < contact.count; i++)
	{
		if (strstr(contact.humans[i]->name, name) != nullptr) {
			ShowHuman(*contact.humans[i]);
			flag = true;
		}
		if (flag) {
			cout << "Is not find human" << endl;
		}
	}
}

void SortAZ(Contact& contact, bool reverse = false) {
	int data = 1;
	if (reverse) {
		data = -1;
	}
	
	for (size_t i = 0; i < contact.count-1; i++)
	{
		for (size_t k = 0; k < contact.count-i-1; k++)
		{
			if (strcmp(contact.humans[k]->name, contact.humans[k + 1]->name)==data) {
				auto temp = contact.humans[k];
				contact.humans[k] = contact.humans[k + 1];
				contact.humans[k + 1] = temp;
			}
		}
	}
}