//交换
#include <iostream>
using namespace std;

// void m_swap(int a,int b)    按值传递：这里是叫 a , b拷贝传递进去，拷贝值交换了；原值并没有交换
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

void m_swap1(int* pa,int* pb)    //c语言的传指针；也是拷贝传递，但是地址相同，解引用进行操作，操作的是原来的参数。
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}


#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))//c语言中的宏定义



void m_swap2(int& a,int& b)//c++的引用，也就是"别名"
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}


template <typename T>
void m_swap3(T& a,T& b) // c++ 的模板函数。
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 1, b = 10;
    cout << "a ="<< a <<",b = "<< b <<endl;

    // m_swap(a,b);
    // cout << "a ="<< a <<",b = "<< b <<endl;

    m_swap1(&a,&b); //指针需要传地址。
    cout << "a ="<< a <<",b = "<< b <<endl;

    int t;
    SWAP(a,b,t);
    cout << "a ="<< a <<",b = "<< b <<endl;

    m_swap2(a,b);
    cout << "a ="<< a <<",b = "<< b <<endl;

    m_swap3<int>(a,b);
    cout << "a ="<< a <<",b = "<< b <<endl;
    return 0;
}