//C++ Program to Find All Roots of a Quadratic Equation
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,x1,x2,discreminant;
    cout<<"Enter coeficiant of square value ";
    cin>>a;
    cout<<endl<<"Enter coeficiant of variable ";
    cin>>b;
    cout<<endl<<"Enter value of constant ";
    cin>>c;
    discreminant = (b*b)-(4*a*c);
    if(discreminant > 0)
    {
        x1 = -b+ sqrt(discreminant);
        x1 =x1/2*a;
        cout<<"X1 = "<<x1<<endl;
        x2 = -b- sqrt(discreminant);
        x2 = x2/2*a;
        cout<<"X2 = "<<x2<<endl;
    }
    else if(discreminant<0)
    {
        int real_part,imaginary_part;
        real_part= -b/2*a;
        imaginary_part = sqrt(-discreminant)/2*a;
        cout<<"Roots are imaginary and complex "<<endl;
        cout<<"X1 = "<<real_part<<"+"<<imaginary_part<<"i"<<endl;
        cout<<"X2 = "<<real_part<<"-"<<imaginary_part<<"i"<<endl;

    }
    else
        cout<<"X1 = X2 = "<<-b/2*a<<endl;
}
