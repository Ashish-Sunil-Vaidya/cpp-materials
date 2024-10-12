#include <iostream>
 using namespace std;

 int main()
 { 
    int i,j,x;

    

    cout<<"Enter Dimension of Inverted Half Pyramid: ";
    cin>>x;
    cout<<endl;
    
    for(i=x;i>0;--i)
    {
        cout<<endl;
        for(j=0;j<i;++j)
        cout<<"* ";
        
    }


    return 0;
 }