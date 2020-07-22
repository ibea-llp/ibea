#include<iostream>
#include "sequence_List.h"
using namespace std;

int main(int argc, char* argv[])
{
    sequenceList<int> my_list;
    my_list.init();
    my_list.append_pL(1);
    my_list.append_pL(2);
    my_list.append_pL(3);
    my_list.append_pL(4);//增加4个元素
    my_list.append_pL(1);
    my_list.append_pL(2);
    my_list.append_pL(3);
    my_list.append_pL(4);//增加4个元素
    my_list.append_pL(1);
    my_list.append_pL(2);
    my_list.append_pL(3);
    my_list.append_pL(4);//增加4个元素
    my_list.append_pL(1);
    my_list.append_pL(2);
    my_list.append_pL(3);
    my_list.append_pL(4);//增加4个元素


    my_list.print_list();//输出
    my_list.setvalue(2,20);//改变第2个位置的值
    cout <<"the getvalue:"<< my_list.getvalue(3)<<endl;//输出第三个位置的值
    cout <<"-----------"<<endl;

    my_list.print_list();//输出改变后的值，与未改变前对比
    cout <<"-----------"<<endl;

    my_list.insert_pL(2,100);//在第2个位置插入值
    my_list.print_list();//输出插入后的值
    cout <<"-----------"<<endl;

    my_list.delete_pL(3);//删除第3个位置的值
    my_list.print_list();//输出删除后的值
    cout <<"-----------"<<endl;

    cout<< "search position:(100)"<<my_list.search_pL(100)<<endl;//查找值100，返回其第一次出现的位置（第几个），-1时该查找值不存在
    cout<< "search position:(200)"<<my_list.search_pL(200)<<endl;
    cout <<"-----------"<<endl;
    return 0 ;
}