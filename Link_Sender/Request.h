#pragma once
#include "User.h"
class Request {
private:
	User _admin;
	void _writeRequestToFile(char* filename);

public:
	Request(User);
	void sendRequest();
	~Request();
};

