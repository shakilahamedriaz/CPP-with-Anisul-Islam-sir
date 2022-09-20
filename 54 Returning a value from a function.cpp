#include<bits/stdc++.h>
using namespace std;


double addition(double,double);

int main()
{

    cout<< addition(10.5,20.3);


    return 0;
}


double addition(double a, double b)  //int is return type
{

    double sum= a+b;
    return sum;   //no void is use here thats why return function is allowed here.
}
