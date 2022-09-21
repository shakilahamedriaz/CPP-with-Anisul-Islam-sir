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
};


int main()
{

    student Alim,Rahi;
    Alim.id=101;
    Alim.gpa=3.44;
    Alim.display();


//  student Rahi;
    Rahi.id=199;
    Rahi.gpa=4.44;
    Rahi.display();




    return 0;
}
