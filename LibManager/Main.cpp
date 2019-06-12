#include "XHeaders.h"

int main() {

	/*XUser u(123, "Xbn1341398182", "Xbn", true, "17698274416", pADMIN);

	XUser u2(u);
	u.password = "123";
	std::cout <<PACKLEN(u2) <<std::endl;

	char * datas = (char *)(void *)u;
	char * datas2 = (char *)(void *)u2;

	std::cout << "DATA1" << std::endl;
	for (size_t i = 0; i < PACKLEN(datas); i++) {
		std::cout << int(datas[i]) << std::endl;
	}
	std::cout << std::endl;
	std::cout << "DATA2" << std::endl;
	for (size_t i = 0; i < PACKLEN(datas2); i++) {
		std::cout << int(datas2[i]) << std::endl;
	}
*/
	//fread();
	//char bin[] = { 11, 0, 0, 0, 1, 0, 0, 0, 25, 2, 0, 0, 0, 12, 4 };

	//XData d(bin, -1);
	//size_t tmpS = 0;

	//std::cout << "[ ²âÊÔ¶ÁÈ¡´óÐ¡ ]" << std::endl;
	//std::cout << d.size() << std::endl;

	//for (size_t i = 0;; i++) {
	//	char * tmpChar;
	//	tmpS = d.get(&tmpChar);
	//	std::cout << tmpS << "\tADDR: " << int(tmpChar) << " " << std::endl;
	//	for (size_t i = 0; i < tmpS; i++) {
	//		std::cout << int(tmpChar[i]) << std::endl;
	//	}
	//	if ((tmpS = d.next()) == size_t(FAILED)) break;
	//	
	//}

	//std::cout << "[ ²âÊÔ¶ÁÈ¡ ]" << std::endl;
	//char * pc;
	//pc = (char *)(void *)d;
	//std::cout << d.size() << std::endl;
	//for (size_t i = 0; i < d.size(); i++) {
	//	std::cout << int(pc[i]) << std::endl;
	//}
	//char str[] = "ÌÌÌÌÌÌ";
	//for (size_t i = 0; i < sizeof(str); i++) {
	//	std::printf("%d\n", str[i]);
	//}
	
	return 0;
}