// * Syntax: memberDataType ClassName ::* memberPointerName = &ClassName :: memberName;
#include <iostream>
using namespace std;

class Test
{
    public:
        int no1;
        int no2;
        void display()
        {
            cout<<"no1: "<<no1<<endl<<"no2: "<<no2<<endl;
        }
};

int main()
{
    Test t1;

    t1.no1 = 10;
    t1.no2 = 20;
    cout<<"By normal assignment of values\n"<<endl;
    t1.display();

    int  Test ::* ptrno1; //Create pointer variable for data member
    ptrno1 = &Test::no1; // assign refrence of data member to pointer varaible

    int  Test ::* ptrno2= &Test::no2;//You can directly do both at once

    Test t2;

    t2.*ptrno1 = 30;
    t2.*ptrno2 = 40;

    cout<<"\n\nBy Pointer assignment of values\n"<<endl;
    t2.display();

    


    return 0;
}