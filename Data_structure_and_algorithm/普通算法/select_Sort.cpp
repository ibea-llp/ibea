// 选择排序：找出最小的与左边交换

#include <iostream>
#include <time.h>

using namespace std;

enum PN{            //定义一个常数
    N = 30
};


void selectSort(int* List,int n)
{
    
    for(int i = 0; i < n -1 ; ++i)//扫描10次
    {
        int tmp = i;//设置每次最小的标志
         for(int j = i + 1; j < n ; ++j) //遍历找出最小值的下标
        {
            if(List[tmp] < List[j]) //如果不是最小(大)，更新最小(大)值
            {
                tmp = j;
            }
        }
        swap(List[tmp],List[i]);//交换
    }

}

int main ()
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
    selectSort(a,N);
    cout << endl;
    for(int i = 0; i < N; ++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}