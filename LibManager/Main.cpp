#include "XHeaders.h"

int main() {
	//fread();
	char bin[] = { 11, 0, 0, 0, 1, 0, 0, 0, 25, 2, 0, 0, 0, 12, 4 };

	XData d(bin, -1);


	return 0;
}