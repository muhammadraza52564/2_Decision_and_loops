//C++ Program to Find Largest Number Among Three Numbers
#include<iostream>
using namespace std;
int main()
{
    float num1,num2,num3;
    cout<<"Enter first number ";
    cin>>num1;
    cout<<endl<<"Enter second number ";
    cin>>num2;
    cout<<endl<<"Enter third number ";
    cin>>num3;
    if(num1>num2 && num1>num3)
        cout<<"Number u enter "<<num1<<" is greater ";
    else if(num2>num1 && num2>num3)
        cout<<"Number u enter "<<num2<<" is greater";
    else
        cout<<"Number u enter "<<num3<<" is greater";
}
