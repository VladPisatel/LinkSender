#pragma once

class LinkList {
private:
	Link* _link_list;
public:
	LinkList();
	void add(Link link);
	void dispose(Link link);
	void readFromFile(char* filename);
	void writeToFile(char* filename);
	~LinkList();
};

