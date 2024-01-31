//C++ Program to Reverse a Number
#include<iostream>
using namespace std;
int main()
{
    int number,remainder,reversed_no=0;
    cout<<"Enter a number ";
    cin>>number;
    while(number!=0)
    {
        remainder = number%10;
        reversed_no = reversed_no*10 + remainder;
        number /=10;
    }
     cout<<endl<<reversed_no;
}
