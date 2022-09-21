//
//** Passing arguments to a function:
//         there are two ways to pass value into a function.
//
//          1. Pass by value.
//          2. Pass by Reference.



//                                   ** 1 pass by value:

#include<bits/stdc++.h>
using namespace std;

void display(int num)
{
    num=20;

}


int main()
{
    int x = 10;
    cout<< "Before calling the function x = "<<x<<endl;

    display(x);
    cout<< "After calling the function x = "<<x<<endl;


    return 0;
}
