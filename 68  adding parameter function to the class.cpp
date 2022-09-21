
#include<bits/stdc++.h>
using namespace std;

class student
{
public:
    int id;
    double gpa;

    void display()
    {

        cout<< id <<endl<< gpa <<endl;
    }

    void setVariable(int x,double y)
    {

        id=x;
        gpa=y;
    }
};


int main()
{

    student Alim,Rahi;
    Alim.setVariable(101,3.22);
    Alim.display();



    Rahi.setVariable(444,3.9);
    Rahi.display();




    return 0;
}
