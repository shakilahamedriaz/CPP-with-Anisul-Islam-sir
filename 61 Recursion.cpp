/*
Recursion : Is a process where a function can call itself.

* To stop calling we need to a base case.


2. Important points in case of Recursion.

 -Recursive call
 -Base case    (to stop )


 ex : 5!= 5*4*3*2*1
      4!= 4*3*2*1
      3!= 3*2*1
      2!= 2*1
      1!= 1

      n!= n* (n-1)!  //n er factorianl * n-1(purber number er factorial)

  */


#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);

}


int main (){

int factorial = fact(4);
cout<<factorial;



return 0;
}

