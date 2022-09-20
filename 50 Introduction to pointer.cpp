//pointer s a variable that stores/points the address of another variable.
//Declaration of Pointer.
//ex :  Data type *Variable_name;

//symbol of pointer
//          &  ---symbol is used to get the address of the variable.
//          *  ---symbol is used to get the value of the variable that pointer is pointing to.
//



#include<bits/stdc++.h>
using namespace std;
int main(){


int x=5;
int *p;

p= &x;

cout << x<<endl;
cout << &x<<endl;
cout << p<<endl;
cout << *p<< endl;






return 0;
}
