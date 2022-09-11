// Control statement three types:
//
//     1.Selection control statement:
//                if,else,else if,switch  (work as same as c prog)
//
//     2.Iteration/Loopging:
//                for,while,do while
//
//     3.jump statement:
//           break;
//           continue;
//           return;
//


#include<iostream>
#include<conio.h>
using namespace std;

int main(){


int num;
cout<< "Enter any numberd :";
cin>> num;


if(num>0)
    cout<< "Positive";

if(num<0)
    cout<< "Negative";

if(num==0)
      cout<< "Zero";


getch();
}
