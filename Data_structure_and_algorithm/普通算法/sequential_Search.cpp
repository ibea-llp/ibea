//顺序查找：未排序的数据。 缺点：速度慢，100万个数据平均要找50万次

#include <iostream>
#include <time.h>
using namespace std;

int sequentialSearch(int* arr, const int size,const int target)
{
    int i;
    for ( i = 0; i < size; ++i)//遍历查找
    {
        if(target == arr[i])
            break;
    }
    if(i == size)//当找到最后时代表没找到。
        i = -1;
    return i;
}


enum PN{            //定义一个常数
    N = 30
};


int main()
{
    int a[N];
    srand(time(NULL)); //每次伪随机数不同
     for(int i = 0; i < N; ++i)// 随机生成数组
    {
        a[i] = rand() % N + 1;
    }
    for(int i = 0; i < N; ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int target;
    cout << "target = ";
    cin >> target;
    int flag = sequentialSearch(a , N, target);
    if(flag < 0)
        cout << "No";
    else 
        cout << "yes,flag = "<<(flag+1)<<endl;
}