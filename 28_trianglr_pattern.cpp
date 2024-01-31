/*Triangle pattern
   *
  ***
 *****

*/
#include<iostream>
using namespace std;
int main()
{
    int row,space;
    cout<<"Enter number of rows ";
    cin>>row;
    for(int i=1,k=1; i<=row; ++i,k=1)
    {
        for(space=1; space<=row-i; ++space)
            cout<<" ";
        while(k != 2*i-1)
        {
            cout<<k;
            ++k;
        }
        cout<<endl;
    }
    return 0;
}
