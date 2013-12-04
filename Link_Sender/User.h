#include "Link.h"
#include "md5.h"
#include <fstream>
enum STATUS{

};

class User {
private:
	char* _name;
	char* _name_hash;
	char* _filename;
	char** _friends;
	char* _password;
	bool _is_login;
	char* _getHash();
	void _createPersonalFile();
	void _createCommonFile(char* name);
	bool _checkPassword(char* pass);
public:
	User(char* name, char* pass);
	void registration(const char* name, const char* pass);
	STATUS chechStatus();
	bool signUp(char* pass);
	void changePassword(char* new_password);
	void sendLink(Link link, char* friend_name);
	void writeToFile(char* filename);
	void readFromFile(char* filename);
	char* getNameHash();
	char* getFriendsList();
	void addFriend();
	void deleteFriend(char* name);
	void acceptRequest(char* name);
	void cancelRequest(char* name); // TODO: отклонить«апрос
	~User();

	
};
