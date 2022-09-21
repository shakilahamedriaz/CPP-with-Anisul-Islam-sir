//                                 scope resolution operator (::)

#include<bits/stdc++.h>
using namespace std;

int x=100; //global variable.



int main(){

int x =50; //local
// :: x=90;          //check it...this line for change global variable.
cout<< :: x<<endl;           //by using (::) sign here is print global variable instead of loacal variable.


return 0;
}

