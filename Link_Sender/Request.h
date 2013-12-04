#pragma once
#include "User.h"
class Request {
private:
	char* _name;
	char* _getHash(char* name);
	void _writeRequestToFile(char* filename);

public:
	Request(char* name);
	void sendRequest();

	~Request();
};

