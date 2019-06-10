#pragma once

#include "XHeaders.h"

#define PACK(data,size) std::make_pair(data, size)

typedef std::vector<std::pair<char *, size_t> > DataType_T;/*内部存储数据类型*/

enum InputType{
	CFILESTREAM, BINARYSTREAM
};

class XData {
private:
	size_t S;/*总数据大小*/
	size_t index = 0;/*当前节点index*/
	DataType_T datas;/*数据*/
	DataType_T::iterator gIt;
	FILE * pF;
	InputType type;
public:
	XData();
	XData(void * data, size_t size);
	XData(FILE * pf);
	void push(void * data, size_t size);
	void rewind();/*回到起点*/
	size_t next();
	size_t size();
	size_t get(void * & des);
	
	operator void*();
	
	~XData();
};

