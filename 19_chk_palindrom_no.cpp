//C++ Program to Check Whether a Number is Palindrome or Not
#include<iostream>
using namespace std;
int main()
{
    int number,remainder,reversed_no=0;
    while(number!=0)
    {
        remainder = number%10;
        reversed_no = reversed_no*10 + remainder;
        number/=10;
    }
    cout<<"reversed number = "<<reversed_no;
    if(number = reversed_no)
        cout<<number<<" = "<<reversed_no<<"So This number is palindrom ";
    else
        cout<<number<<" != "<<reversed_no<<"So this number is not palindrom";
}
