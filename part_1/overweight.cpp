
//JUDGE WHETHER YOU ARE OVERWEIGHT OR NOT
#include <iostream>
using namespace std;

class person
{
    string name;
    bool gender;//DEFINE TRUE AS MALE
    double weight;
    double height;
public:
    person(string sn = "A", bool bg = false, double dw = 0, double dh = 0) :name(sn), gender(bg), weight(dw), height(dh) {};//GIVEN INITIALIZATION
    ~person() {};
    friend bool isOverweight(person pn);//STATE FRIEND FUNCTION
};

bool isOverweight(person pn)//JUDGE WHETHER OVERWEIGHT OR NOT
{
    bool flag = false;
    switch (pn.gender)
    {
    case true: 
        cout << "male;";
        if (105 > pn.height - pn.weight)
        {
            flag = true;
           
        }
        break;

    default:
        cout << "famale;";//INDICATE GENDER
        if (110 > pn.height - pn.weight)
        {
            flag = true;
            
        }
        break;

    }
    return flag;
}


//test function

int main()
{
    string m_name = "a";
    int m_gender = 1;//TRUE AS MALE,BUT IT COULDN'T INPUTED WHEN IT WAS BOOL,SO NEED A INTERMEDIATE VARIABLE
    bool flag;
    double m_weight = 0;
    double m_height = 0;
    cout << "INPUT THE INFORMATION OF PERSON:" << endl;
    cout << "name:";
    cin >> m_name;
    //// cout << endl;
    cout << "gender:";
    cin >> m_gender;
    // cout << endl;
    cout << "weight:";
    cin >> m_weight;
    // cout << endl;
    cout << "height:";
    cin >> m_height;
    // cout << endl;
    if (m_gender == 1) //CONVERT "INT" TO "BOOL"
        flag = true;
    else
        flag = false;
    person pn1(m_name, flag, m_weight, m_height);
    if (isOverweight(pn1))
    {
        cout << "overweight";
    }
    else
    {
        cout << "Not overweight";
    }

    return 0;
}
