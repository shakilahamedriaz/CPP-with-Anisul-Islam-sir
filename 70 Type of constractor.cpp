//Type constructor:
//
//    Default constructor.
//    Parameterized constructor.


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

    student(int x, double y)                            //constractor with no return tyype and same as class.
    {

        id=x;
        gpa=y;
    }
    student()
    {

        cout << "defalut constructor"<<endl;
    }
};


int main()
{

    student ob;

    student Alim(101,3.22);
    Alim.display();


    student Rahi(444,3.9);
    Rahi.display();



    return 0;
}


//constractor is a  speial type of function tht is used toinitialize the object.
//same name as like the class
//no return type not even void
