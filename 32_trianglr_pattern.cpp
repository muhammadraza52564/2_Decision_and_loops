/*To print trangle
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include <iostream>
using namespace std;
int main()
{
    int row,space;
    cout<<"Enter number of rows ";
    cin>>row;
    for(int i=row,k=0; i>=row; i--)
    {
        for(space=1; space<=row-i; space++)
            cout<<" ";
        while(k != 2*i-1)
        {
            cout<<"*";
            ++k;
        }
        cout<<endl;
    }
}
