#include "User.h"

char* User::_getHash() {

}

User::User(char* name,char* pass) {
	_name = name;
	_getHash();
	strcat(_filename, ".usr");
	std::fstream file(_name_hash);
	if (file) {
		if (!_checkPassword(pass)) {
			throw std::domain_error("Wrong password!");
		}
		else {
			_is_login = 1;
		}
	}
}


User::~User(void)
{
}
