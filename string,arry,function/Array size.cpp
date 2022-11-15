//size of arrays........

#include<bits/stdc++.h>
#include<array>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};

    //int getArrayLength= sizeof(arr)/ sizeof(int);


    for(int i =0; i<sizeof(arr)/sizeof(int); i++){

        cout<<arr[i]<<" ";
    }

    cout<<endl<< "The actual length of array is : "<<sizeof(arr) / sizeof(int)<<endl;


return 0;
}
