#pragma once
/*
URL
Name
Date
Visit
Rating
Sender
Group
*/
class Link
{
private:
	char* _URL;
	char* _name;
	char* _sender;
	int   _date;
	bool  _is_visit;
	int   _rating;
	void  _setDate();
public:
	Link(	
		char* URL,
		char* Name,
		char* Sender,
		int   Rating
	);
	void changeName(char* new_name);
	void changeRating(int new_rating);
	void readLinkFromFile(char* filename);
	void writeLinkToFile(char* filename);
	void visit();
	~Link();
};

