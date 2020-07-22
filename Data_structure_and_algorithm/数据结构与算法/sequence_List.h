// sequenceList：采用一维数组存储结构

#include <iostream>
#include "template_classList.h"
using namespace std;

template <class T>
class sequenceList:public my_tList<T>
{
    private:
        int Max_size;// 最大长度
        // int position;//当前位置
        int N_length;//当前长度
        T* pList;//实例化列表
    public:
        sequenceList(const int size = 1024);
        ~sequenceList();  
        bool empty_pL();//判空，ture为空 
        void init() ;//初始化，重置
        bool append_pL(const T value);//增加
        bool setvalue(const int pos,const T value);//设置修改
        T getvalue(const int pos);//得到位置为Pos的值
        bool insert_pL(const int pos, const T value);//在pos位置插入一个元素
        bool delete_pL(const int pos);//删除pos位置的元素
        int search_pL(const T value);//查找值，返回第一个匹配的值的位置(第几个)
        void print_list();//输出当前列表的值
};

template <class T>
sequenceList<T>::sequenceList(const int size)
{
    Max_size = size;
    pList = new T[Max_size];
    // N_length = position = 0;
    N_length = 0;
}

template <class T>
sequenceList<T>::~sequenceList()
{
    delete[] pList;
}


template <class T>
bool sequenceList<T>::empty_pL()
{
    if(N_length == 0)
    {
        return true;
    }
    return false;
}

template <class T>
void sequenceList<T>::init()
{
    delete[] pList;
    // N_length = position = 0;
    N_length = 0;
    pList = new T(Max_size);
}

template <class T>
bool sequenceList<T>::append_pL(const T value)
{
    bool flag = false;
    if(N_length < Max_size)
    {
        pList[N_length] = value;
        ++N_length;
        flag = true;
    }

    return flag;
}

template <class T>
bool sequenceList<T>::setvalue(const int pos,const T value)
{
   if(pos < 0 && pos > N_length)
    {
        return false;
    }
    pList[pos-1] = value;
    return true;

}


template <class T>
T sequenceList<T>::getvalue(const int pos)
{
    if(pos < 0 && pos > N_length)
    {
        return false;
    }
    
    return pList[pos-1];
    
    
}
template <class T>
bool sequenceList<T>::insert_pL(const int pos, const T value)
{
    if(N_length == Max_size)
        return false;
    for(int i = N_length; i > pos - 1; i--)
    {
        pList[i] = pList[i-1];
    }
    pList[pos - 1] = value;
    N_length++;
    return true;
}

template <class T>
bool sequenceList<T>::delete_pL(const int pos)
{
    if(empty_pL())
    {
        return false;
    }
    for(int i = pos - 1; i < N_length; i++)
    {
        pList[i] = pList[i+1];
    }
    N_length--;
    return true;
}
template <class T>
int sequenceList<T>::search_pL(const T value)
{
    for(int i=0; i<N_length;i++)
    {
        if(value == pList[i])
            return i+1;
           
    }
    return -1;
}

template <class T>
void sequenceList<T>::print_list()
{
    int position = 0;//现在长度变下标
    while ( position <= N_length - 1)
    {
        cout << pList[position++]<<endl;
    }
}