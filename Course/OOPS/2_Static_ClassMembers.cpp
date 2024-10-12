#include<iostream>
using namespace std;
class Counter
{
    static int cnt; //Static data member is common to all objects created of a class and its default value is "0"
    int no;
public:
    void setData(int n)
    {
        no = n;
        ++cnt;
    }
    void showData()
    {
        cout<<"cnt : "<<cnt<<", no : "<<no<<endl;
    }
    static void showCount() //static method can only be called by classname not by object and only accepts static memebers within its scope
    {
        cout<<"Static variable cnt : "<<cnt<<endl;
    }

};
int Counter::cnt;   // Will be initialized to default value 0
int main()
{
    Counter obj1, obj2;
    cout<<"Initial values :"<<endl;
    cout<<"Object 1 :"<<endl;
    obj1.showData();
    cout<<"Object 2 :"<<endl;
    obj2.showData();
    obj1.setData(100);
    cout<<"\nAfter setting value 100 to data member \"no\" of Object 1 :"<<endl;
    cout<<"Object 1 :"<<endl;
    obj1.showData();
    cout<<"Object 2 :"<<endl;
    obj2.showData();
    obj2.setData(200);
    cout<<"\nAfter setting value 200 to data member \"no\" of Object 2 :"<<endl;
    cout<<"Object 1 :"<<endl;
    obj1.showData();
    cout<<"Object 2 :"<<endl;
    obj2.showData();
    Counter obj3;
    cout<<"\nInitial values of Object 3 :"<<endl;
    obj3.showData();
    obj3.setData(300);
    cout<<"\nAfter setting value 300 to data member \"no\" of Object 3 :"<<endl;
    cout<<"Object 1 :"<<endl;
    obj1.showData();
    cout<<"Object 2 :"<<endl;
    obj2.showData();
    cout<<"Object 3 :"<<endl;
    obj3.showData();
     cout<<"Initial values : "<<endl;
    Counter::showCount();
    cout<<"Object 1 : ";
    obj1.showData();
    cout<<"Object 2 : ";
    obj2.showData();
    obj1.setData(100);
    cout<<"\nAfter setting value 100 to data member \"no\" of Object 1 :"<<endl;
    Counter::showCount();
    cout<<"Object 1 : ";
    obj1.showData();
    cout<<"Object 2 : ";
    obj2.showData();
    obj2.setData(200);
    cout<<"\nAfter setting value 200 to data member \"no\" of Object 2 :"<<endl;
    Counter::showCount();
    cout<<"Object 1 : ";
    obj1.showData();
    cout<<"Object 2 : ";
    obj2.showData();
    cout<<"\nInitial values of Object 3 :"<<endl;
    Counter::showCount();
    obj3.showData();
    obj3.setData(300);
    cout<<"\nAfter setting value 300 to data member \"no\" of Object 3 :"<<endl;
    Counter::showCount();
    cout<<"Object 1 : ";
    obj1.showData();
    cout<<"Object 2 : ";
    obj2.showData();
    cout<<"Object 3 : ";
    obj3.showData();
    return 0;
}
