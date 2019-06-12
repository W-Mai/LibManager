#pragma once

#include "XHeaders.h"

class XBook {
public:
	XBook();
	
	XBook(int ID, const char * name, const char * desc, const char * author, const char * press);
	XBook(const void * dat);
	operator void * ();
	~XBook();
	
	int ID;
	std::string name;
	std::string description;
	std::string author;
	std::string press;
};

class XBookMarks {


};