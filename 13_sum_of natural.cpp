//C++ Program to Calculate Sum of Natural Numbers
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number,sum;
    cout<<"Enter a natural number till you want to take sum ";
    cin>>number;
    for(int i=1; i<=number; i++)
    {
        sum = sum+i;
    }
    cout<<"Sum of natural numbers = "<<sum;

}
