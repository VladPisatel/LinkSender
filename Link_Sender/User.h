#include "Link.h"
enum STATUS{};

class User {
private:
	char* _name;
	char* _name_hash;
	char** friends;
	char* _password;
	char* _getHash();
	void _createPersonalFile();
public:
	User();
	STATUS chechStatus();
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
