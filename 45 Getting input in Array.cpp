#include<bits/stdc++.h>
using namespace std;
int main()
{

    int marks[5];


    cout<< "Enter the size of an array : ";
    int n;
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        cout<< " marks for student "<<i<<"= ";
        cin>>marks[i];
    }
    cout<<endl<< "printing those all elements are: ";
    for(int i=0; i<=n; i++)
    {

        cout<<marks[i]<< " ";
    }


    return 0;
}
