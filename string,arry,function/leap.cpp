#include<bits/stdc++.h>
using namespace std;

int main(){

int year;
cout<< "Enter a random year : ";
cin>>year;

if (((year%4==0) && (year%100 !=0)) || (year%400==0))
{

    cout<<year<< "is leap year"<<endl;
}
else{


    cout<<year<< "  not a leap year";
}

return 0;
}
