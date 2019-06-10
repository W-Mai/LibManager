#include "XBook.h"

XBook::XBook() {
	ID = 0;
}


XBook::~XBook() {}


XBook::XBook(const void * dat) {

}

XBook::operator void*() { return NULL; }
