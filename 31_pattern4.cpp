/*Print pattern
        *
       **
      ***
     ****
    *****
*/
#include <iostream>
using namespace std;
int main()
{
    for(int row = 1; row<=5; row++)
    {
        for(int colum=5; colum>=1; colum--)
        {
            if(colum > row)
            {
                cout<<" ";
                continue;
            }
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
