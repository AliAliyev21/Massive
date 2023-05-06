#pragma once
#include <iostream> 
#include <Windows.h>
#include "Entities.h"
using namespace std;


void ShowIntro();
void Start() {
	while (true)
	{
		ShowIntro();
		system("cls");
	}
}


int w_count = 2;
Worker** workers = new Worker * [2] {
	new Worker{ new char[30] {"elvin123"},new char[30] {"Elvin"},
	new char[30] {"Programmer"},NULL,NULL,NULL },

	new Worker{ new char[30] {"john123"},new char[30] {"John"},
	new char[30] {"UI/UX Designer"},NULL,NULL,NULL }
};


int e_count = 1;
Employer** employers = new Employer * [1] {
	new Employer{ new char[30] {"rafiq123"},new char[30] {"Rafiq Eliyev"},
	new char[30] {"Rafiq MMC"},NULL,NULL }
};


Employer* GetEmployerByUsername(const char* username) {
	for (size_t	i = 0; i < e_count; i++)
	{
		if (strcmp(employers[i]->Eusername, username) == 0) {
			return employers[i];
		}
	}
	return nullptr;
}


void ShowEmployerMenu() {
	cout << "Add advertisement [1]" << endl;
	cout << "Show Appliers     [2]" << endl;
}


int global_id = 0;
AD* GetNewAD() {
	cin.ignore();
	cin.clear();
	cout << "Enter of advertisiment title : ";
	char* title = new char[100] {};
	cin.getline(title, 100);

	cout << "Enter of salary : ";
	double salary;
	cin >> salary;
	++global_id;

	AD* ad = new AD{ global_id,title,salary };
	return ad;
}


void AddToEmployer(Employer* employer, AD* ad) {
	auto temp = new AD * [employer->count + 1] {};
	for (size_t i = 0; i < employer->count; i++)
	{
		temp[i] = employer->ads[i];
	}
	temp[employer->count] = ad;
	employer->ads = temp;
	temp = nullptr;
	employer->count++;
}


Worker* GetWorkerByUsername(const char* username) {
	for (size_t i = 0; i < w_count; i++)
	{
		if (strcmp(workers[i]->Wusername, username) == 0) {
			return workers[i];
		}
	}
	return nullptr;
}


void ShowWorkerMenu(const Worker* worker) {
	cout << "Advertisement       [1] " << endl;
	cout << "Create your own CV  [2] " << endl;
	cout << "Notification (" << worker->count << ")    [3] " << endl;
	cout << "Observe your CV     [4] " << endl;
}



void ShowEmployerAD(Employer* employer) {
	for (size_t i = 0; i < employer->count; i++)
	{
		cout << "===========ADS==========" << endl;
		cout << "ID : " << employer->ads[i]->id << endl;
		cout << "Title : " << employer->ads[i]->title << endl;
		cout << "Salary : " << employer->ads[i]->salary << endl;
	}
}



void ShowAllAds() {
	for (size_t i = 0; i < e_count; i++)
	{
		ShowEmployerAD(employers[i]);
	}
}



void ShowIntro() {
	cout << "\t\t>>>>>>>BooS.AZ<<<<<<<" << endl;
	cout << "Worker (w) \t\t\t\t Employer(e)\n" << endl;
	cout << "\t\tEnter of select : ";
	char select = ' ';
	cin >> select;
	if (select == 'w') {
		cin.ignore();
		cin.clear();
		cout << "Enter of Worker username : ";
		char* Wusername = new char[30] {};
		cin.getline(Wusername, 30);

		auto worker = GetWorkerByUsername(Wusername);
		if (worker != nullptr) {
			ShowWorkerMenu(worker);
			cout << "Enter of select : ";
			int select = 0;
			cin >> select;
			if (select == 1) {
				ShowAllAds(); 
				system("pause");
			}
		}
	}
	else if (select == 'e') {
		cin.ignore();
		cin.clear();
		cout << "Enter of Employer username : ";
		char* Eusername = new char[30] {};
		cin.getline(Eusername, 30);

		auto employer = GetEmployerByUsername(Eusername);
		if (employer != nullptr) {
			ShowEmployerMenu();
			cout << "Enter of select : ";
			int select = 0;
			cin >> select;
			if (select == 1) {
				auto ads = GetNewAD();
				AddToEmployer(employer, ads);
			}
		}
		else {
			cout << "Eror.Not found" << endl;
			system("color 4");
			system("pause");
			system("color 7");
		}
	}
	else {
		cout << "Invalid Selection" << endl;
	}
}