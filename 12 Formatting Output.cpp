//***Objectives
//1. showpoint
//2. noshowpoint
//3. fixed
//4. setw()

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
   int num1,num2;
   cout <<"Enter 2 numbers:"<<endl;
   cin>>num1>>num2;


   cout<<showpoint;   //dosomik show korbe ei ta use korele
   float sum=num1+num2;
   cout<<"SUM is : "<<sum;
   cout<<endl;


   cout<<noshowpoint;
   float mul=num1*num2;
   cout<<"MUL is : "<<mul;
   cout<<endl;

   double div=(float) num1/num2;
   cout<<"Division is : "<<div;
   cout<<endl;

//   float rem=num1%num2;
//   cout<<"REMINDER is : "<<rem;
//   cout<<endl;



    getch();
}
