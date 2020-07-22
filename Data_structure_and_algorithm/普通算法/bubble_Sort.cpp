// 冒泡排序:小数据复杂度不高，数据够大时效率太慢; 交换次数太多

#include <iostream>
#include <time.h>

using namespace std;


void bubble_sort(int List[],int n);

enum PN{            //定义一个常数
    N = 30
};
int main ()
{
    
    int a[N];
    srand(time(NULL)); //每次伪随机数不同
     for(int i = 0; i < N; ++i)// 随机生成数组
    {
        a[i] = rand() % N + 1;
    }
    bubble_sort(a,N);
    for(int i = 0; i < N; ++i)
    {
        cout << a[i] << endl;
    }
    return 0;
}


void bubble_sort(int List[],int n)//冒泡排序，小数据复杂度不高，数据够大时效率太慢。
{
    for(int i = 0; i < n - 1; ++i) //要比较 n-1 次，每次找出一个最大（小）值
    {
        for (int j = 0; j < n-i-1; ++j)//第一次对比 n-1 次，第二次对比  n-2 次
        {
            if(List[j] > List[j+1]) //小于为从大到小，大于为从小到大
            {
                swap(List[j],List[j+1]);
            }
        }
    }
}