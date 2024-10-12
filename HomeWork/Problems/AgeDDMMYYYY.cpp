#include<iostream>
using namespace std;


void Calculate_age(int D_date, int D_month, int D_year, int C_date, int C_month, int C_year);

int main()
{

   int D_date,D_month,D_year;
   int C_date,C_month,C_year;
    
cout<<"Date of Birth [DD/MM/YYYY]: ";
cin>>D_date>>D_month>>D_year;
cout<<"Present Date [DD/MM/YYYY]: ";
cin>>C_date>>C_month>>C_year;

Calculate_age(D_date, D_month, D_year, C_date, C_month, C_year);

return 0;
}



void Calculate_age(int D_date, int D_month, int D_year, int C_date, int C_month, int C_year)
{
    int months[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,pt=D_month;
    int age_date,age_month,age_year;
    

    age_year=C_year-D_year;

    age_month=C_month-D_month;
    if(age_month>12)
    {
      age_month=12-age_month;
      ++age_year;
    }

    age_date=C_date-D_date;
    if(age_date<months[pt])
    {   
        age_date=months[pt]-age_date;
        --age_month;
    }

    cout<<"Age: "<<age_year<<" Years "<<age_month<<" Months "<<age_date<<" Days";
    
    

}
