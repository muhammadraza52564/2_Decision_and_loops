//C++ Program to Check Whether a character is Vowel or Consonant.
#include <iostream>
using namespace std;
int main()
{
    char alphabet;
    cout<<"Enter an alphabet ";
    cin>>alphabet;
    switch(alphabet)
    {
    case 'A':
    case 'a':
        cout<<"Alphabet \'"<<alphabet<<"\' is Vowel";
        break;
    case 'E':
    case 'e':
        cout<<"Alphabet \'"<<alphabet<<"\' is Vowel";
        break;
    case 'I':
    case 'i':
        cout<<"Alphabet \'"<<alphabet<<"\' is Vowel";
        break;
    case 'O':
    case 'o':
        cout<<"Alphabet \'"<<alphabet<<"\' is Vowel ";
        break;
    case 'U':
    case 'u':
        cout<<"Alphabet \'"<<alphabet<<"\' is Vowel ";
        break;
    default:
        cout<<"Alphabet "<<alphabet<<"\' is Vowel ";

    }
}
