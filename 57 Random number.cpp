#include<bits/stdc++.h>
#include<stdlib.h>      //for use random number...
using namespace std;


int main()
{

    for(int i=1; i<=5; i++)
    {
        int randomNumber = rand()%5 +1;
        cout<< "Random number = "<<randomNumber<<endl;
    }

    return 0;
}
