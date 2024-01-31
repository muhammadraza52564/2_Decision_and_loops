/*Patterns 2
    *****
    ****
    ***
    **
    *
*/
#include<iostream>
using namespace std;
int main()
{
    for(int row=5; row>=1; row--)
    {
        for(int colum = 1; colum<=row; colum++)
            cout<<"*";
        cout<<endl;
    }
}
