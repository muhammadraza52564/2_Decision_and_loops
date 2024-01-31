//C++ Program to Check Leap Year
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year number ";
    cin>>year;
    if(year%4 == 0)
        cout<<"Its leap year ";
    else
        cout<<"Its not a leap year ";
    return 0;
}
