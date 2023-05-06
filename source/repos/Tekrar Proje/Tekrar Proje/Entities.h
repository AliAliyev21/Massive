#pragma once

struct Human {
	char* name;
	char* phone;
	const char* createData;
};

struct Contact {
	Human** humans;
	int count = 0;
};

