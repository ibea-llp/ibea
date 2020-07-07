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
		strcpy_s(_str,len+1 ,pstr);//\0算一个字节
	}
}
mString::~mString()
{
	delete[]_str;
}

mString::mString(const mString& another)
{
	//_str = another._str;//在同类之间没有隐私；等位拷贝（浅拷贝）会造成重析构 ；两指针指向统一内存空间
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
	 delete[]this->_str;//删掉析构产生的内存空间
	 int len = strlen(another._str);
	 this->_str = new char[len + 1];//重新生成
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
 char&  mString:: operator [](int idex)//引用是为了能够修改。
 {
	 return this->_str[idex];
 }
 char mString::at(int idex)
 {
	 return this->_str[idex];
 }