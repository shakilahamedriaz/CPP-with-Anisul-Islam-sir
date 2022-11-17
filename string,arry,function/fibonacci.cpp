#include<bits/stdc++.h>
using namespace std;
int main(){


int arr[101];

         arr[0]=0;
         arr[1]=1;

         int n;
         cin>>n;
     cout<<arr[0];
    for(int i=2; i<=n; i++){

        arr[i]=arr[i-1]+arr[i-2];

        cout<<" "<<arr[i]<< " ";
    }




return 0;
}
