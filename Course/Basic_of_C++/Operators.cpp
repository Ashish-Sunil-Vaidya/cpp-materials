#include <iostream>
using namespace std;
int main()
{   
    int a,b,t1=1,t2=0;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;

    //Arithemitic operators [+,-,*,/,%]
    cout<<"Addition [a+b]= "<<a+b<<endl;
    cout<<"Substraction [a-b]= "<<a-b<<endl;
    cout<<"Multiplication [a*b]= "<<a*b<<endl;
    cout<<"Division [a/b]= "<<a/b<<endl;
    cout<<"Remainder [a%b]= "<<a%b<<endl<<endl;

    //Relational operators [>,<,<=,=>,==,!=] [0] represents false, [1] represents true

    cout<<"a less than b= "<<(a<b)<<endl;
    cout<<"a greater than b= "<<(a>b)<<endl;
    cout<<"a less than or equal to b= "<<(a<=b)<<endl;
    cout<<"a greater than or equal to b= "<<(a>=b)<<endl;
    cout<<"a equal to b="<<(a==b)<<endl;
    cout<<"a not equal to b= "<<(a!=b)<<endl<<endl;

    //Logical operators [&&,||,!]
    cout<<"t1= "<<t1<<" t2= "<<t2<<endl;
    cout<<"AND operation= "<<(t1 && t2)<<endl;
    cout<<"OR operation= "<<(t1 || t2)<<endl;
    cout<<"NOT operation(Inversion)= "<<!t1<<" "<<!t2<<endl;
    cout<<"Inversion of AND opertaion= "<<!(t1 && t2)<<endl;
    cout<<"Inversion of OR opertaion= "<<!(t1 || t2)<<endl<<endl;

    //Bitwise operators [&,|,-,^,>>,<<] [Does bit by bit operation]
    cout<<"Bitwise AND operation= "<<(a & b)<<endl;
    cout<<"Bitwise OR operation= "<<(a | b)<<endl;
    cout<<"Bitwise EXOR operation= "<<(a^b)<<endl;
    cout<<"Bitwise Left Shift= "<<(a<<2)<<" "<<(b<<2)<<endl;
    cout<<"Bitwise Right Shift= "<<(a>>2)<<" "<<(b>>2)<<endl<<endl;

    //Increment and Decrement operator, postfix and prefix [++,--]
    
    cout<<"Prefix Increment of 'a' and 'b'= "<<(++a)<<" "<<(++b)<<endl; 
    cout<<"Prefix Decrement of 'a' and 'b'= "<<(--a)<<" "<<(--b)<<endl; 
    cout<<"Postfix Increment of 'a' and 'b'= "<<(a++)<<" "<<(b++)<<endl; 
    cout<<"Postfix Decrement of 'a' and 'b'= "<<(a--)<<" "<<(b--)<<endl; 


    return 0;
}