/*
Unary Operator : this is use just for one variable.

+      Unary plus   ----> for indicate +ve value
-      Unary minus  ----> for indicate -ve value

++     Increment   ----->
--     Decrement   ----->

*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int x = 6;
int result1 = -x;
cout<<result1<<endl;

int y = 6;
int result2 = +y;
cout<<result2<<endl;

int z = 6;
int result3 = ----z;  // per " -- is one " decrement
cout<<result3<<endl;

int p = 6;
int result4 = ++p;
cout<<result4<<endl;


getch();

}


