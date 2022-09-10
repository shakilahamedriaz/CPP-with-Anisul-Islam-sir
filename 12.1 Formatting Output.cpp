//***Objectives
//1. showpoint
//2. noshowpoint

//2.setprecision
//3. fixed
//4. setw()

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
   int num1,num2;
   cout <<"Enter 2 numbers:"<<endl;
   cin>>num1>>num2;


   cout<<showpoint;
   cout<<fixed;    //command for counting after point only
   cout<<setprecision(2);  //only for counting before point+after point
   float sum=num1+num2;
   cout<<setw(20)<<"SUM is : "<<sum;
   cout<<endl;



   float mul=num1*num2;
   cout<<setw(20)<<"MUL is : "<<mul;
   cout<<endl;





    getch();
}


