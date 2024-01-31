//Print triangle using numbers
#include<iostream>
using namespace std;
int main()
{
    for(int row=1; row<=5; row++)
    {
        for(int colum=1; colum<=row; colum++)
            cout<<colum;
        cout<<endl;
    }
}
