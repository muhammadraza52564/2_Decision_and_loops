//C++ Program to Find Factorial
#include <iostream>
using namespace std;
int main()
{
    int number,factorial=1;
    cout<<"Enter a number ";
    cin>>number;
    for(int i=1; i<=number; i++)
        factorial = factorial*i;
    cout<<"Factorial of given number = "<<factorial;
}
