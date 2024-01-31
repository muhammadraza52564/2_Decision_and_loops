//Simple calculators
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float num1,num2;
    int chk;
    char operat;
    do{


        cout<<"Enter first number ";
        cin>>num1;
        cout<<"Enter second number ";
        cin>>num2;
        cout<<"Enter operator ";
        cin>>operat;
        switch(operat)
        {
        case '+':
            cout<<"Sum of numbers = "<<num1+num2;
            break ;
        case '-':
            cout<<"Difference of numbers = "<<num1-num2;
            break;
        case '*':
            cout<<"Product of numbers = "<<num1*num2;
            break;
        case '/':
            if(num2!=0)
                {
                    cout<<"Divion of numbers = "<<num1/num2;
                    break;
                }
            else
                cout<<"Divion can not possible by 0"; break;

        default:
            cout<<"This calculator can only perform baasic operations ";

        }
        cout<<endl<<"Enter 1 if you want to perform any other operation ";
        cin>>chk;
    }while(chk ==1);
    return 0;
}
