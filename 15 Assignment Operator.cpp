/*

=      x=a+b;  a+b is assign in x;

+=     x += 5;   x=x+5;
-=     x -= 5;   x=x-5;
*=     x *=y;    x=x*y;
/=     x /=y;    x=x/y;
%=     x %=5;    x=x%5;

*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int x = 10;
int y = 4;

x +=y;  //x=x+y;

cout<< "Sum = " <<x<<endl;

x-=y;  //x=x-y;

cout<< "subs ="<<x<<endl;



getch();
}
