
#include <iostream>
using namespace std;

template<class T>
class Node_L
{
    public:
        Node_L<T> * next;//指针域
        T data; //数据域
};

template<class T>
class link_List
{
    private:
        Node_L<T> * L_head;//头指针
        // Node_L<T> *current_Node;
        int length_size;//数据个数
    public:
        link_List();
        ~link_List();
        void clear_List();//清空链表
        int length_linkL();//表长
        bool empty_LinkL();//判空
        bool insert_head(Node_L<T>* pnode);//头插入
        bool insert_end(Node_L<T>* pnode);//尾插入
        bool insert_mid(int pos,Node_L<T>* pnode);//中间插入
        bool delete_pos(int pos);//删除第几个
        bool reset_pos(int pos,Node_L<T>* pnode);//改写
        T get_listvalue(int pos);//获得该位置的值
        void print_lL();
};
template<class T>
link_List<T>::link_List()// 构造函数创建了头结点
{
    L_head = new Node_L<T>;
    L_head->data = 0;
    L_head->next = NULL;
    // _Nhead = NULL;
    length_size = 0;
    // current_Node = _Nhead;
}

template<class T>
link_List<T>::~link_List()
{
    clear_List();
    delete L_head->next;
    L_head = NULL;
}

template<class T>
void link_List<T>::clear_List()//清空链表（不包括头结点）
{
    Node_L<T>* current_Node = L_head->next;//头结点
    while (current_Node->next != NULL)
    {   
        Node_L<T>* tmp = current_Node->next;
        delete current_Node;
        current_Node = tmp;

    }
    current_Node = NULL;
    length_size = 0;
}

template<class T>
int link_List<T>::length_linkL()
{
    return length_size;
}

template<class T>
bool link_List<T>::empty_LinkL()//判空 
{
    if(L_head->next==NULL)
        return true;
    return false;
}

template<class T>
bool link_List<T>::insert_head(Node_L<T>* pnode)
{
    Node_L<T>* node = new Node_L<T>;
    if(node==NULL)
        return false;
    node->data = pnode->data;
    node->next = L_head->next;
    L_head->next =node;
    length_size++;
    return true;;
}

template<class T>
bool link_List<T>::insert_end(Node_L<T>* pnode)
{
    Node_L<T>* current_Node = L_head;
    while (current_Node->next != NULL)
    {
        current_Node = current_Node->next;
    }
    Node_L<T>* node = new Node_L<T>;
    if(node==NULL)
        return false;
    node->data = pnode->data;
    current_Node->next = node;
    node->next = NULL;
    length_size++;
    return true;
}

template<class T>
bool link_List<T>::insert_mid(int pos,Node_L<T>* pnode)
{
    if(pos<=0||pos>length_size)
        return false;

    Node_L<T>*current_Node = L_head;
    for(int i = 0; i < pos-1; i++)
    {
        current_Node= current_Node->next;
    }

    Node_L<T>* node = new Node_L<T>;
    
    node ->data = pnode->data;
    if(node == NULL)
        return false;
    
    node ->next = current_Node->next;
    current_Node->next = node;
    length_size++;
    return true;
}

template<class T>
bool link_List<T>::delete_pos(int pos)
{
    if(pos<=0||pos>length_size||length_size == 0)
        return false;
    Node_L<T>* current_Node = L_head;
    Node_L<T>* current_before = NULL;
    int i = 0;
    while (i<pos)
    {   
        current_before = current_Node;
        current_Node = current_Node->next;
        i++;
    }
    // current_Before->data = current_Node->data;
    current_before->next = current_Node->next;
    delete current_Node;
    current_Node = NULL;
    length_size--; 
    return true;
}

template<class T>
void link_List<T>::print_lL()
{
    Node_L<T>* current_Node = L_head;
    for(int i=-1; i<length_size; i++)
    {
        cout << current_Node->data<<endl;
        current_Node = current_Node->next;
    }
    cout<<"----------------"<<endl;//分割线
}


template <class T>
bool link_List<T>::reset_pos(int pos,Node_L<T>* pnode)
{
    if(pos <= 0 || pos > length_size || empty_LinkL())
        return false;
    Node_L<T>* current_Node = L_head;
    int i = 0;
    while(i<pos)
    {
        current_Node = current_Node->next;
        i++;
    }
    current_Node->data = pnode->data;
    return true;
}

template<class T>
T link_List<T>::get_listvalue(int pos)
{
    if(pos <= 0 || pos > length_size || empty_LinkL())
        return -1;
    Node_L<T>* current_Node = L_head;
    int i = 0;
    while(i<pos)
    {
         current_Node = current_Node->next;
        i++;
    }
    return current_Node->data;

}