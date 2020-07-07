#include <iostream>

using namespace std;
#define PI 3.14
// enumeration must be a integer
// enum{
//     PI = 3.14
// };
//maybe could creat a class 
//求圆的周长
double circumference(const double& radius)
{
    return PI * 2 * radius;
}

//求圆的面积
double area(const double& radius)
{
    return PI * radius * radius;
}

//test function

int main ()
{
    double radius;
    cout << "INPUT THE RADIUS PLEASE:";
    cin >> radius;
    cout << "area:"<<area(radius)<<"\n"
        << "circumference:"<<circumference(radius)<<endl;
    return 0;

}