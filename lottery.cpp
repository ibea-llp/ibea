// LOTTERY WINNER
#include <iostream>
#include <time.h>

using namespace std;

int* lottery(int *p,int size)
{
    srand(time(0));//COOPERATE WITH RAND TO GENERATE PSEUDORANDOM NUMBER
    for(int i = 0;i < size;i++)
    {
        p[i] = rand()%36 + 1;// 1~36(<36)
    }
    return p;
}
int main()
{
    int * plottry = new int[100];//MAST BE DECLARING THE SIZE; CAN'T EXPAND;
    int size;
    cout << "THE SIZE OF LOTTERY:";
    cin >> size;
    lottery(plottry,size);
    for(int i = 0;i < size;i++)
    {
        cout << plottry[i] << endl;
    }
    delete []plottry;
    return 0;
}