#pragma once

#include "XHeaders.h"

class XUser {
public:
	XUser();
	XUser(const void *);
	operator void * ();
	~XUser();
private:
	int ID;
	std::string password;
	std::string name;
	bool gender;
	std::string TEL;
	Permission permission;
};

