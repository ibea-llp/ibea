#pragma once
#include<iostream>
//#include<string>
class mString
{
	public:
		mString(const char* pstr = NULL);// Ĭ�ϲ���ֻ����������
		~mString();
		mString(const mString& another);
		mString& operator=(const mString& another);//����ֵΪ������ʽ
		bool operator>(const mString& another);
		bool	operator<(const mString& another);
		bool operator ==(const mString& another);
		char& operator [](int idex);
		char at(int idex);
		char* getString();
	private:
		char *_str;
};

