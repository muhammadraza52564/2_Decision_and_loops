/*pattern
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
    for(int row=5; row>=1; row-- )
    {
        for(int colum=5; colum>=1; colum--)
        {
            if(colum>row){
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }

}
