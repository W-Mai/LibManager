#include "XUser.h"



XUser::XUser() {
	ID = 0;
}

XUser::XUser(const void *) {}

XUser::operator void*() { return NULL; }


XUser::~XUser() {}
