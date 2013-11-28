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
	bool connectTo(char* name);
	void changePassword(char* new_password);
	void saveToFile(char* filename);
	void readFromFile(char* filename);
	char* getNameHash();
	char* getFriendsList();
	void addFriend();
	void deleteFriend(char* name);
	void acceptRequest(char* name);
	void cancelRequest(char* name); // TODO: отклонить«апрос
	~User();

	
};
