//线性表的模板类 
//abstract data type for list


template <class T>
class my_tList
{
    public:
        void init();//初始化，清除
        bool empty();//判空
        bool append(const T value);//增加（在末尾）
        bool insert(const int position,const T value);//插入
        bool del(const int position);//删除
        T getvalue(const int position);// 得到某位置的值
        T setvalue(const int position,const T value);//修改某位置的值
};