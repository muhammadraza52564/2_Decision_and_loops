//C++ Program to Display Prime Numbers Between Two Intervals
#include<iostream>
using namespace std;
int main()
{
    int low,high,chk;
    bool is_prime;
    cout<<"Enter number from you want to display list of prime no: ";
    cin>>low;
    cout<<"Enter number till you want to display list of prime no: ";
    cin>>high;
    do
    {
        is_prime =true;
        if(low == 0 || low == 1)
            is_prime=false;
        for(int i=2; i<=low/2; i++)
        {
            if(low%i == 0)
                is_prime=false;
                break;
        }
        if(is_prime)
            cout<<low<<",";
        ++low;
    }while(low<high);
    return 0 ;
}
