#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){

string s;
cin>>s;
int l= s.size();
int cnt=0;
for(int i=0; i<l; i++){

    if(s[i]==s[i+1]){

        cnt++;
    }
}
cout<<cnt<<endl;
if(cnt%2==0){

    cout<< "GO TO RAWSAN ARA"<<endl;
}else{
   cout<< "GO TO YOUNUS KHAN"<<endl;
}

return 0;
}
