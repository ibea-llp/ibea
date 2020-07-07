// String_text.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include "mString.h"
#include <iostream>
using namespace std;

int main()
{
    mString str;
    mString str2("china");


    // 系统会默认提供拷贝构造器，浅拷贝。一旦自定义就不在提供默认。
    mString str3(str2);//拷贝构造器
    cout << str.getString() <<'\n'<< str2.getString() << endl;
    cout << str3.getString() << endl;
    

    mString str4 = str2;//本质也是一个拷贝构造
    cout << str4.getString() << endl;

    mString str5;
    str5 = str2;//当不自己自定义运算符重载时；系统默认提供默认运算符重载，会造成重析构 , 自身内存泄漏；
    cout << str5.getString() << endl;
    mString str6;
    str6 = str5 = str4;//26等于27
    str6.operator=(str5.operator=(str4));
    cout << str6.getString() << endl;
    mString str7 = "abc";
    mString str8 = "dbc";
    if (str6 == str5)
        cout << "==" << endl;
    if (str6 > str7)
        cout << "<" << endl;
    if (str6 < str8)
        cout << ">" << endl;
    cout << str6[2] << endl;
    cout << str2.at(0) << endl;
    return 0;
    
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
