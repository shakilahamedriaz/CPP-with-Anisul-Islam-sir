#include<iostream>
#include<conio.h>
using namespace std;

int main(){

int num;
cout<< "Enter a number : ";
cin>>num;

if(num%2==0){

    cout<< "Even number "<<endl;
}else{
    cout<< "ODD number "<<endl;
}

//pass fail55

int mark;
cout<< "enter your marks: ";
cin>>mark;

if(mark>33)
{

    cout<< "Pass"<<endl;
}else{

  cout<< "Fail"<<endl;
}

//absalute value:


int n;
cout<< "Enter any operator : ";
cin>>n;

if(n<0){
    cout<<(-n)<<endl;
}else{

    cout<< "Fail";
}




getch();
}
