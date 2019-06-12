#pragma once

#include "XHeaders.h"

class XUser {
public:
	XUser();
	XUser(int ID,const char * pass, const char * name, bool gender, const char * tel, Permission perm);
	XUser(const void * bin);
	operator void * ();
	~XUser();
	int ID;
	std::string password;
	std::string name;
	bool gender;
	std::string TEL;
	Permission permission;
};

class XUserWithBook {
	XUser user;
	XBookMarks bookmarks;
};