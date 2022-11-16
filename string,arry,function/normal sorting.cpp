// sorting arrays....
#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[] = {1,1,1,1,999,3,5,5,7,0,9,88,77,99,100};
int n = sizeof(arr)/sizeof(int);

sort(arr,arr+n);
cout<< "Array after sorting using : "<<endl;

for(int i=0; i<n; i++){

    cout<< arr[i]<< " ";
}



return 0;
}
