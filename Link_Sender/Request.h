#pragma once
#include "User.h"
class Request {
private:
	User _admin;
	char* _name;
	char* _getHash(char* name);
	void _writeRequestToFile(char* filename);

public:
	Request(User, char* name);
	void sendRequest();

	~Request();
};

