
 //                       2. Pass by Reference.


#include<bits/stdc++.h>
using namespace std;

void display(int *num)
{
    *num=20;

}


int main()
{
    int x = 10;
    cout<< "Before calling the function x = "<<x<<endl;

    display(&x);
    cout<< "After calling the function x = "<<x<<endl;


    return 0;
}
