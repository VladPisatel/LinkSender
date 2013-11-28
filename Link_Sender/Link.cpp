#include "stdafx.h"
#include "Link.h"


Link::Link(
	char* URL,
	char* name,
	char* sender,
	int   rating
		) {
	_URL = URL;
	_name = name;
	_sender = sender;
	_rating = rating;
}


Link::~Link(void)
{
	delete _URL;
	delete _name;
	delete _sender;
}
