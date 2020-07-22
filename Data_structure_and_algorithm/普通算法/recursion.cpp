// 递归肯定会有一个判断来结束递归，并且肯定要返回值。
//递归有可能造成栈溢出。

// n的阶乘  FACTORIAL OF N
#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n <= 1)
        return 1;
    else 
        return n*factorial(n-1);
}


//TEST 

int main()
{
    int size;
    cout << "THE SIZE OF FACTORIAL:";
    cin >> size;
    cout << "THE RESULT OF FACTORIAL:"<< factorial(size);

    return 0;
}