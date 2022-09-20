#include<bits/stdc++.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;


int main(){

        while(1){


            int guessNumber, randomNumber;

cout<< "Enter your guess between 1 to 5 : ";

cin>> guessNumber;

randomNumber = rand()%5 + 1;        //rand is the random number function.

if(guessNumber==randomNumber){

    cout<< " You have won !! "<<endl<<endl;

}
else{


    cout<< " You have lost. Try again"<<endl;
    cout<< "Random number was : "<<randomNumber<<endl<<endl;
}




        }


getch();
}
