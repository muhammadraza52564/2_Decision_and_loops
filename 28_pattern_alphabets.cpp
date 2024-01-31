/*Program to Print Half-Pyramid Using Alphabets
    A
    B B
    C C C
    D D D D
    E E E E E
*/
#include<iostream>
using namespace std;
int main()
{

    char alphabet,input_char ;
    cout<<"Input upper case letter which u want to print in last row ";
    cin>>input_char;
    for(char alphabet ='A'; alphabet<=input_char; alphabet++)
    {
        for(char j='A';j<=alphabet; j++)
            cout<<alphabet;
        cout<<endl;
    }
}
