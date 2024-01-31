//C++ Program to Generate Multiplication Table
#include <iostream>
using namespace std;
int main()
{
    int table_of,counting,answer;
    cout<<"Enter a number of which you want to print table ";
    cin>>table_of;
    for(int i=1; i<=10; i++)
    {
        answer = table_of*i;
        cout<<table_of<<"*"<<i<<" = "<<answer<<endl;
    }
}
