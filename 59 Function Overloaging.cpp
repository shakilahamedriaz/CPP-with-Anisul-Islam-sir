//**functioin overloading ?
//
//  -->Function overloading is a process of declaring.
//  1. Multiple functions with the same name.
//  2. Differnet parameters.
//
//


#include<bits/stdc++.h>
using namespace std;

void  sum(int a,int b)

{

    int sum= a+b;
    cout<< sum <<endl;

}
void sum(int a,int b,int c)
{
    int sum=a+b+c;
    cout<<sum<<endl;

}

int main(){

  sum(20,30);
  sum(10,20,30);

return 0;
}
