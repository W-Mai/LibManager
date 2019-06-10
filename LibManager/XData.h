#pragma once

#include "XHeaders.h"

#define PACK(data,size) std::make_pair(data, size)

typedef std::vector<std::pair<char *, size_t> > DataType_T;/*�ڲ��洢��������*/

enum InputType{
	CFILESTREAM, BINARYSTREAM
};

class XData {
private:
	size_t S;/*�����ݴ�С*/
	size_t index = 0;/*��ǰ�ڵ�index*/
	DataType_T datas;/*����*/
	DataType_T::iterator gIt;
	FILE * pF;
	InputType type;
public:
	XData();
	XData(void * data, size_t size);
	XData(FILE * pf);
	void push(void * data, size_t size);
	void rewind();/*�ص����*/
	size_t next();
	size_t size();
	size_t get(void * & des);
	
	operator void*();
	
	~XData();
};

