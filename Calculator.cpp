#include <iostream>

using namespace std;
int main()
{
    int o1,o2;
    char op;

    cout<<"\nEnter first operand followed by operator and second operand::";
    cin>>o1>>op>>o2;

    switch(op)
    {
    case '+':
        cout<<"\nAddition is::"<<o1+o2;
        break;
    case '-':
        cout<<"\nSubtraction is::"<<o1-o2;
        break;
    case '*':
        cout<<"\nMultiplication is::"<<o1*o2;
        break;
    case '/':
        cout<<"\nDivision is::"<<o1/o2;
        break;
    case '%':
        cout<<"\nModulo is::"<<o1%o2;
        break;

    }
    return 0;
}
