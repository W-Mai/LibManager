#pragma once

#include "XHeaders.h"

class XBook {
public:
	XBook();
	

	XBook(const void * dat);
	operator void * ();
	~XBook();
	
private:
	int ID;
	std::string name;
	std::string description;
	std::string author;
	std::string press;
};

