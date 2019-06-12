#include "XUser.h"



XUser::XUser() {
	ID = 0;
}

XUser::XUser(int ID, const char * pass, const char * name, bool gender, const char * tel, Permission perm) {
	this->ID = ID;
	password = pass;
	this->name = name;
	this->gender = gender;
	this->TEL = tel;
	permission = perm;
}

XUser::XUser(const void * bin) {
	size_t tmpS;
	char * str;
	XData data((void *)bin, -1);
	data.get(&ID);

	tmpS = data.next();
	str = new char[tmpS];
	data.get(str);
	password = str;

	tmpS = data.next();
	str = new char[tmpS];
	data.get(str);
	name = str;

	tmpS = data.next();
	data.get(&gender);

	tmpS = data.next();
	str = new char[tmpS];
	data.get(str);
	TEL = str;

	tmpS = data.next();
	data.get(&permission);
}

XUser::operator void*() { 
	XData data;
	
	data.push(&ID, sizeof(ID));
	data.push((char *)password.c_str(), password.size() + 1);
	data.push((char *)name.c_str(), name.size() + 1);
	data.push(&gender, sizeof(gender));
	data.push((char *)TEL.c_str(), TEL.size() + 1);
	data.push(&permission, sizeof(permission));

	return data; 
}

XUser::~XUser() {}
