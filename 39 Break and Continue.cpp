/*

jump statement:   break,continue,return;

break  : is used to break loop or switch statement.

    syntax : break;
    - it breaks the current flow of the program at specefied condition.
    - In case of inner loop,it breaks only inner loop.

continue: The continue statement skips the current iteration of a loop
          (for,while,do while)

          - just use for loop.

*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    for (int i=1; i<=11; i++){

        if(i==10){
            continue;
        }
        cout<<i<<endl;
    }


cout<<"\n"<< "SEE the Break loop execution : "<<endl;

    for(int j=1; j<=11; j++){

        if(j==7){
            break;
        }
        cout<<j<<endl;
    }

  return 0;

}
