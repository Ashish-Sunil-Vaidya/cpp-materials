#include<iostream>
using namespace std;
// Program: Call-by-Value:
class Time
{
    int hrs;
    int mins;
public:
    void setTime()
    {
        cout<<"\nEnter time (in hours and minutes) :";
        cin>>hrs>>mins;
    }
    void showTime()
    {
        cout<<"Time is "<<hrs<<" hours : "<<mins<<" minutes."<<endl;
    }
    void sum(Time t1, Time t2);
};
void Time::sum(Time t1, Time t2) // Call-by-value
{
    mins = t1.mins + t2.mins;
    hrs = mins / 60;
    mins %= 60;
    hrs += (t1.hrs + t2.hrs);
}
int main()
{
    Time time1, time2, time3;
    time1.setTime();
    time2.setTime();
    time3.sum(time1, time2);
    cout<<"Time 1 :"<<endl;
    time1.showTime();
    cout<<"Time 2 :"<<endl;
    time2.showTime();
    cout<<"Sum of 2 Time :"<<endl;
    time3.showTime();
    return 0;
}

#include<iostream>
using namespace std;
class Time
{
    int hrs;
    int mins;
public:
    void setTime()
    {
        cout<<"\nEnter time (in hours and minutes) :";
        cin>>hrs>>mins;
    }
    void showTime()
    {
        cout<<"Time is "<<hrs<<" hours : "<<mins<<" minutes."<<endl;
    }
    void sum(Time t1, Time t2);
};
void Time::sum(Time t1, Time t2) // Call-by-value
{
    mins = t1.mins + t2.mins;
    hrs = mins / 60;
    mins %= 60;
    hrs += (t1.hrs + t2.hrs);
}
int main()
{
    Time time1, time2, time3;
    time1.setTime();
    time2.setTime();
    time3.sum(time1, time2);
    cout<<"Time 1 :"<<endl;
    time1.showTime();
    cout<<"Time 2 :"<<endl;
    time2.showTime();
    cout<<"Sum of 2 Time :"<<endl;
    time3.showTime();
    return 0;
}

// Program: Call-by-reference:
// #include<iostream>
// using namespace std;
// class Date
// {
//     int date, month, year;
// public:
//     void setDate()
//     {
//         cout<<"\nEnter date (in dd mm yyyy format) :";
//         cin>>date>>month>>year;
//     }
//     void showDate()
//     {
//         cout<<date<<"-"<<month<<"-"<<year<<endl;
//     }
//     void incrDate(Date&);   // Call-by-reference
//     void decrDate(Date);    // Call-by-value
// };
// void Date::incrDate(Date &d)
// {
//     d.date++;
//     switch(d.month)
//     {
//     case 1:
//     case 3:
//     case 5:
//     case 7:
//     case 8:
//     case 10:
//     case 12:
//         if(d.date > 31)
//         {
//             d.date = 1;
//             d.month++;
//             if(d.month > 12)
//             {
//                 d.month = 1;
//                 d.year++;
//             }
//         }
//         break;
//     case 2:
//         if(d.year % 4 == 0) // Checks if leap year
//         {
//             if(d.date > 29) // Month Feb of 29 days
//             {
//                 d.date = 1;
//                 d.month++;
//             }
//         }
//         else
//         {
//             if(d.date > 28) // Month Feb of 28 days
//             {
//                 d.date = 1;
//                 d.month++;
//             }
//         }
//         break;
//     case 4:
//     case 6:
//     case 9:
//     case 11:
//         if(d.date > 30)
//         {
//             d.date = 1;
//             d.month++;
//         }
//         break;
//     default:
//         cout<<"Invalid Date."<<endl;
//         return;
//     }
//     date = d.date;
//     month = d.month;
//     year = d.year;
// }
// void Date::decrDate(Date d)
// {
//     d.date--;
//     if(d.date < 1)
//     {
//         switch(d.month)
//         {
//         case 1:
//             d.month = 12;
//             d.date = 31;
//             d.year--;
//             break;
//         case 3:
//             d.month--;
//             if(d.year % 4 == 0)
//                 d.date = 29;
//             else
//                 d.date = 28;
//             break;
//         case 5:
//         case 7:
//         case 10:
//         case 12:
//             d.month--;
//             d.date = 30;
//             break;
//         case 2:
//         case 4:
//         case 6:
//         case 8:
//         case 9:
//         case 11:
//             d.month--;
//             d.date = 31;
//             break;
//         }
//     }
//     date = d.date;
//     month = d.month;
//     year = d.year;
// }
// int main()
// {
//     Date d1, d2;
//     d1.setDate();
//     d2.setDate();
//     Date d3;
//     d3.incrDate(d1);
//     cout<<"After incrementing date."<<endl;
//     cout<<"Date 1 : ";
//     d1.showDate();
//     cout<<"Date 3 : ";
//     d3.showDate();
//     d3.decrDate(d2);
//     cout<<"\nAfter decrementing date."<<endl;
//     cout<<"Date 2 : ";
//     d2.showDate();
//     cout<<"Date 3 : ";
//     d3.showDate();
//     return 0;
// }
