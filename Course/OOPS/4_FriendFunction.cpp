// #include<iostream>
// using namespace std;
// class Time
// {
//     int hrs;
//     int mins;
// public:
//     void setTime()
//     {
//         cout<<"\nEnter time (in hours and minutes) :";
//         cin>>hrs>>mins;
//     }
//     void showTime()
//     {
//         cout<<"Time is "<<hrs<<" hours : "<<mins<<" minutes."<<endl;
//     }
//     friend void sum(Time, Time, Time&);
// };
// void sum(Time t1, Time t2, Time &t3)
// {
//     t3.mins = t1.mins + t2.mins;
//     t3.hrs = t3.mins / 60;
//     t3.mins %= 60;
//     t3.hrs += (t1.hrs + t2.hrs);
// }
// int main()
// {
//     Time time1, time2;
//     time1.setTime();
//     time2.setTime();
//     Time time3;
//     sum(time1, time2, time3);
//     cout<<"Time 1 :"<<endl;
//     time1.showTime();
//     cout<<"Time 2 :"<<endl;
//     time2.showTime();
//     cout<<"Sum of 2 Time :"<<endl;
//     time3.showTime();
//     return 0;
// }

//Main usage to access private members from different classes
#include<iostream>
using namespace std;
class Data2;
class Data1
{
    int no1;
    friend void swapping(Data1 &, Data2 &);
public:
    void inputData()
    {
        cout<<"Enter a number for no1 :";
        cin>>no1;
    }
    void showData()
    {
        cout<<"no1 : "<<no1<<endl;
    }
};
class Data2
{
    int no2;
    friend void swapping(Data1 &, Data2 &);
public:
    void inputData()
    {
        cout<<"Enter a number for no2 :";
        cin>>no2;
    }
    void showData()
    {
        cout<<"no2 : "<<no2<<endl;
    }
};
void swapping(Data1 &d1, Data2 &d2)
{
    int temp;
    temp = d1.no1;
    d1.no1 = d2.no2;
    d2.no2 = temp;
}
int main()
{
    Data1 obj1;
    obj1.inputData();
    Data2 obj2;
    obj2.inputData();
    cout<<"\nData before swapping :"<<endl;
    obj1.showData();
    obj2.showData();
    swapping(obj1, obj2);
    cout<<"\nData after swapping :"<<endl;
    obj1.showData();
    obj2.showData();
    return 0;
}

