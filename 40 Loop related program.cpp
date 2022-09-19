#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,num;
    cout<< "Enter any integer : ";
    cin>>num;
    for( i=1; i<=10; i++)
    {

        cout<<num<<"X"<<i<<"="<<(num*i)<<"\n";
    }

    return 0;
}
