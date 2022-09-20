#include<bits/stdc++.h>
using namespace std;
int main(){

int r,c,i,j;
cout<< "Enter the number of row : "<<endl;
cin>>r;
cout<< "Enter the number of column : "<<endl;
cin>>c;

int array[r][c];
//taking input array..
cout<< "Enter the elements for the matrix : ";
for(i=0; i<r; i++){

    for(j=0; j<c; j++){
        cout<<endl<< "array["<<i<< "]["<<j<< "] = ";
        cin>>array[i][j];
    }
}

//output

cout<< "printing the elements : ";
for(i=0; i<r; i++){

    for(j=0; j<c; j++){

        cout<<array[i][j];
    }
}


return 0;
}
