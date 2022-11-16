#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){

int num, cnt=0;
cin>>num;

if(num=1 || num==0){
    cnt=1;
}

for(int i=2; i<num/2; i++){

    if(num%i==0){

        cnt++;
        break;
    }
}
if(cnt==0){

    cout<< "Prime number bro !"<<endl;
}
else{

    cout<< "No Prime"<<endl;
}

return 0;
}
