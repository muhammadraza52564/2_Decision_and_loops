//C++ Program to Calculate Power of a Number
#include<iostream>
using namespace std;
int main()
{
    int number,power,answer = 1;
    cout<<"Enter a number ";
    cin>>number;
    cout<<"Enter power of number";
    cin>>power;
    answer = 1;
    for(int i=1; i<=power; i++)
        answer = answer*number;
    cout<<number<<"^"<<power<<" = "<<answer;
}
