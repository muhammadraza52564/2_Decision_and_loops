//C++ Program to Display Fibonacci Series
#include<iostream>
using namespace std;
int main()
{
    int term_1,term_2,next_term,last_term;
    cout<<"Enter num of term you want to print Fibonacci series ";
    cin>>last_term;
    term_1 = term_2 = 1;
    for(int i=1; i<=last_term; i++)
    {
        if(i==1)
            cout<<i<<",";
        else if(i == 2)
            cout<<term_2<<",";
        else
        {
            next_term = term_1+term_2;
            term_1 = term_2;
            term_2 = next_term;
            cout<<next_term<<",";
        }
    }


}
