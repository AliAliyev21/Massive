#pragma once

struct CV {
	double salary;
	int experience;
	char* languages;
	char* about;
};


struct Notification {
	char* mesage;
	const char* data;
};


struct Worker {
	char* Wusername;
	char* Wfulname;
	char* Wspeciality;
	CV* cv;
	Notification** notification;
	int count = 0;
};


struct AD {
	int id = 0;
	char* title;
	double salary;

	Worker** appliers;
	int app_count = 0;
};


struct Employer {
	char* Eusername;
	char* Efullname;
	char* Ecompany;
	AD** ads;
	int count = 0;
};