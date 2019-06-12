#include "XBook.h"

XBook::XBook() {
	ID = 0;
}


XBook::~XBook() {}


XBook::XBook(int ID, const char * name, const char * desc, const char * author, const char * press) {
	this->ID = ID;
	this->name = name;
	this->description = desc;
	this->author = author;
	this->press = press;
}

XBook::XBook(const void * dat) {
	size_t tmpS;
	char * str;
	XData data((void *)dat, -1);

	data.get(&ID);

	tmpS = data.next();
	str = new char[tmpS];
	data.get(str);
	name = str;

	tmpS = data.next();
	str = new char[tmpS];
	data.get(str);
	description = str;

	tmpS = data.next();
	str = new char[tmpS];
	data.get(str);
	author = str;

	tmpS = data.next();
	str = new char[tmpS];
	data.get(str);
	press = str;
}

XBook::operator void*() { 
	XData data;

	data.push(&ID, sizeof(ID));
	data.push((char *)name.c_str(), name.size() + 1);
	data.push((char *)description.c_str(), description.size() + 1);
	data.push((char *)author.c_str(), author.size() + 1);
	data.push((char *)press.c_str(), press.size() + 1);
	return data; 
}
