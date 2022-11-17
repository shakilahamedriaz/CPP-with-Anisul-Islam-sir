//factorial of N number
#include<bits/stdc++.h>
using namespace std;

int main(){

int num;
cin>>num;
int fact=1;

for(int i=1; i<=num; i++){

    fact*=i;
}

cout<<fact<<endl;



return 0;
}
