#include <iostream>
#include "link_List.h"
using namespace std;

int main()
{
    link_List<int> *list_1 = new link_List<int>;
    Node_L<int> *node_1 = new Node_L<int>;
    node_1->data = 2;
    list_1->insert_head(node_1);
    list_1->print_lL();

    node_1->data = 60;
    list_1->insert_head(node_1);
    list_1->print_lL();

    node_1->data = 22;
    list_1->insert_head(node_1);
    list_1->print_lL();

    node_1->data = 29;
    list_1->insert_head(node_1);
    list_1->print_lL(); 

    node_1->data = 100;
    list_1->insert_end(node_1);
    list_1->print_lL();

    node_1->data = 200;
    list_1->insert_end(node_1);
    list_1->print_lL();

    list_1->delete_pos(5);
    list_1->print_lL();

    node_1->data = 300;
    list_1->insert_mid(2,node_1);
    list_1->print_lL();

    node_1->data = 700;
    list_1->insert_mid(6,node_1);
    list_1->print_lL();

    node_1->data = 1000;
    list_1->reset_pos(3,node_1);
    list_1->print_lL();

    cout<<list_1->get_listvalue(list_1->length_linkL()-1)<<endl;

    list_1->clear_List();
    list_1->print_lL();
    

    return 0;
}