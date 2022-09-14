
// Syntax :    Expression1? Expression2 : Expression3

#include<bits/stdc++.h>
using namespace std;
int main(){

int digit;
cout<< "Enter a digit : ";
cin>>digit;

switch(digit)
{

    case 0:
    cout<< "zero";
    break;

    case 1:
    cout<< "one";
    break;


    case 2:
    cout<< "two";
    break;

    case 3:
    cout<< "Three";
    break;


    case 4:
    cout<< "Four";
    break;

    default:
        cout<< "wrong";

}


return 0;
}
