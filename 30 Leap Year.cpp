#include<bits/stdc++.h>
using namespace std;

int main(){

int year;
cout<< "Enter any Year : ";
cin>> year;

if((year %4 ==0 && year%100 !=0) || (year%400==0)){

    cout<< "Leap Year"<<endl;
}

else{

    cout<< "Not Leap Year"<<endl;
}



return 0;
}
