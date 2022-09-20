
#include<bits/stdc++.h>
using namespace std;

void addition(int,int);  //function prototype  --this is used when function is set before main function.
void substraction(int,int);
void multiplication(int,int);

int main()
{

    addition(10,20);


    substraction(60,20);

    multiplication(5,5);

    return 0;
}


void addition(int a,int b)
{

    int sum = a+b;
    cout<<"sum="<< sum<< endl;
}

void substraction(int a,int b)
{

    int result = a-b;
    cout<<"substraction="<<result<< endl;
}


void multiplication(int a,int b)
{

    int mul= a*b;
    cout<<"mul="<< mul<< endl;
}
