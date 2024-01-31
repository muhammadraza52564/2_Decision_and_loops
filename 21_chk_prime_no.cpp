//C++ Program to Check Whether a Number is Prime or Not
#include<iostream>
using namespace std;
int main()
{
    int number,answer=0;
    bool is_prime = true;
    cout<<"Enter a number ";
    cin>>number;
    for(int i=2; i<=number/2; i++)
    {
        if(number%i == 0)
            is_prime = false;
            break;
    }
    if(is_prime)
        cout<<number<<" is prime number ";
    else
        cout<<"Its not a prime number ";

}
