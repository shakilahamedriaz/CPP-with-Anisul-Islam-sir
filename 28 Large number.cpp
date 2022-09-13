#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int num1,num2,num3,Large;
    cout<< "Enter 3 numbers : ";
    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3)
    {
       Large = num1;
    }
    else if(num2>num1 && num2>num3)
    {

        Large = num2;

    }
    else
    {
        Large = num3;
    }


    cout<< " Large NUmber "<< Large;

    getch();
}
