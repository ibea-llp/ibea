#pragma once
#include<iostream>
//#include<string>
class mString
{
	public:
		mString(const char* pstr = NULL);// 默认参数只能在声明中
		~mString();
		mString(const mString& another);
		mString& operator=(const mString& another);//返回值为了连等式
		bool operator>(const mString& another);
		bool	operator<(const mString& another);
		bool operator ==(const mString& another);
		char& operator [](int idex);
		char at(int idex);
		char* getString();
	private:
		char *_str;
};

