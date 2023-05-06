#pragma once
#include <iostream> 
#include "FileHelper.h" 

using namespace std;

void ConnectDataBase() {
	cout << "Connected Successffuly" << endl;
	cout <<"Data :" __DATE__ << " : " << __TIME__ << endl;
	WriteFile("a.txt");
}
