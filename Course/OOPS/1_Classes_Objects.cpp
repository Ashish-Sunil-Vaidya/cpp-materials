#include <iostream>
#include <cstring>
using namespace std;

class Student //A class is a way to bind the data and its associated methods (functions) together.
{
    private: //members visible only within this class scope //* Writing "private:" is optional, only writing variables first will automatically be considered as private
        int roll;
        char name[40];
        float percentage;

    public: //These members are global and can be accessed by anyone 
        void setData(int r,char c[],float per)//or just declare prototype here and define the function outside the class
        {
            roll = r;
            strcpy(name,c);
            percentage = per;
        }
        void getData()
        {
            cout<<"Student Name: "<<name<<endl;
            cout<<"Student Roll No: "<<roll<<endl;
            cout<<"Student Precentage: "<<percentage<<endl;
        }
};

int main()
{
    Student s1,s2;
    // Student sarr[3]; //You can also create array of objects and input and display values using loops and it improves readabilty of the code

    cout<<"Details of student 's1'"<<endl<<endl;
    s1.setData(60,"Ashish",95.1234f);
    s1.getData();

    cout<<"\n\nDetails of student 's2'"<<endl<<endl;
    s2.setData(30,"Sumit",91.1784f);
    s2.getData();
    return 0;
}