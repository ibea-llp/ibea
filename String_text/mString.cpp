#include "mString.h"


mString::mString(const char* pstr)
{
	if (pstr == NULL)
	{
		_str = new char[1];
		*_str = '\0';
	}
	else
	{
		int len = strlen(pstr);
		_str = new char[len + 1];
		strcpy_s(_str,len+1 ,pstr);//\0��һ���ֽ�
	}
}
mString::~mString()
{
	delete[]_str;
}

mString::mString(const mString& another)
{
	//_str = another._str;//��ͬ��֮��û����˽����λ������ǳ����������������� ����ָ��ָ��ͳһ�ڴ�ռ�
	int len = strlen(another._str);
	_str = new char[len + 1];
	strcpy_s(_str, len + 1, another._str);
}
 char* mString::getString()
{
	return _str;
}
 mString& mString::operator=(const mString& another)
 {
	 /*if (this == another)return *this;*/
	 delete[]this->_str;//ɾ�������������ڴ�ռ�
	 int len = strlen(another._str);
	 this->_str = new char[len + 1];//��������
	 strcpy_s(this->_str,  len + 1,  another._str);
	 return *this;
 }

 bool mString::operator>(const mString& another)
 {
	 if (strcmp(this->_str, another._str) > 0)
		 return true;
	 else
		 return false;
 }
 bool mString::operator<(const mString& another)
 {
	 if (strcmp(this->_str, another._str) < 0)
		 return true;
	 else
		 return false;
 }
 bool mString::operator ==(const mString& another)
 {
	 if (strcmp(this->_str, another._str) == 0)
		 return true;
	 else
		 return false;
 }
 char&  mString:: operator [](int idex)//������Ϊ���ܹ��޸ġ�
 {
	 return this->_str[idex];
 }
 char mString::at(int idex)
 {
	 return this->_str[idex];
 }