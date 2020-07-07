#include <iostream>
using namespace std;

// ACHIEVE base CONVERSION

// CONVERT DECIMAL TO  BINARY,OCTAL,HEXADECIMAL
void conversion_D(const int& Dec,const int  base)
{
    int dec = Dec;
    int bin[64];
    char Bin[64];
    int i = 0, j = 0;
    
    while (dec / base)
    {
        bin[i] = dec % base;
        dec = dec / base;
        i++;
    }
    bin[i++] = dec;
if(base == 2 || base == 8 || base == 10)
    {
    while(i--)
    {
    
        cout<<bin[i];   
        // j++;
    }
    }
 else if (base == 16)
 {
      while(i--)
    {
        switch(bin[i])
        {
            case 0:Bin[i] = '0';break;
            case 1:Bin[i] = '1';break;
            case 2:Bin[i] = '2';break;
            case 3:Bin[i] = '3';break;
            case 4:Bin[i] = '4';break;
            case 5:Bin[i] = '5';break;
            case 6:Bin[i] = '6';break;
            case 7:Bin[i] = '7';break;
            case 8:Bin[i] = '8';break;
            case 9:Bin[i] = '9';break;
            case 10:Bin[i] = 'A';break;
            case 11:Bin[i] = 'B';break;
            case 12:Bin[i] = 'C';break;
            case 13:Bin[i] = 'D';break;
            case 14:Bin[i] = 'E';break;
            case 15:Bin[i] = 'F';break;
        }
        cout<<Bin[i];   
        // j++;
    }
 }
    
}

//test function

int main()
{
    int dec,base;
    cout<<"INPUT THE VALUE CONVERTED:(MAX = 2^64 - 1):";
    cin >> dec;

    cout<<"THE BASE OF TARGET(2,8,10,16):";
    cin >> base;
    conversion_D(dec,base);
    return 0;
}