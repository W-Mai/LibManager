#include "XData.h"

//#define DEBUG



XData::XData() {}

XData::XData(void * data, size_t size) {
	size_t tmpS;
	size_t tmpCount = 0;
	size_t tmpSize = 0;
	char * tmpData;
	DE(0)
		if (!data || !size) return;/*ָ��ΪNULL ����sizeΪNULL*/
	DE(1)
		if (!*(char *)data) return;/*���ݶγ���ΪNULL*/
	if (size == -1) {
		//S = 0;
		tmpS = ((size_t *)data)[0];
		data = (size_t *)data + 1;
		do {
			tmpSize = *(size_t *)&(((char *)data)[tmpCount]);

		#ifdef DEBUG
			std::cout << tmpSize << " " << tmpCount << std::endl;
		#endif // DEBUG

			tmpData = new char[tmpSize + sizeof(size_t)];
			memcpy(tmpData
				   , (char *)data + tmpCount + sizeof(size_t)
				   , tmpSize
			);
			datas.push_back(PACK(tmpData, tmpSize));
			tmpCount += tmpSize + sizeof(size_t);
			//S += tmpSize + sizeof(size_t);
		#ifdef DEBUG
			for (size_t i = 0; i < tmpSize; i++) {
				std::cout << 
					(int)tmpData[i] 
				<< std::endl;
			}
		#endif // DEBUG
		/*
			11  0 0 0|1 0 0 0 25| |2 0 0 0 12 4|
		*/
		} while (tmpCount < tmpS);
	}
	gIt = datas.begin();
	type = BINARYSTREAM;
	S = tmpS;
}

XData::XData(FILE * pf) {
	pF = pf;
}

void XData::push(void * data, size_t size) {
	char * temp = new char[size];
	memcpy(temp, data, size);
	datas.push_back(PACK(temp, size));
}

void XData::rewind() {/*�ص����*/
	index = 0;
	gIt = datas.begin();
}

size_t XData::next() {
	if (type == BINARYSTREAM) {

	} else if (type == CFILESTREAM) {

	}
	return size_t();
}

size_t XData::size() {/*�������ݰ���С*/
	return S + sizeof(size_t);
}

size_t XData::get(void *& des) {/*���ص�ǰָ��ָ������ݰ���С	desΪ����ָ���ַ*/
	auto tmp = *gIt;
	des = tmp.first;
	return tmp.second;
}

XData::operator void*() {/*�����������ݰ�������*/


}

XData::~XData() {
	datas.~vector();
}
