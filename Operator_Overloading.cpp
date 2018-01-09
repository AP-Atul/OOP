#include <iostream>

using namespace std;

class complex
{
    int real,imag;
public:
    complex()
    {
        real=0;
        imag=0;
    }
    friend ostream &operator<<(ostream &out,complex &c1)
    {
        cout<<"\nThe expression is:";
        out<<c1.real<<"+i"<<c1.imag;
    }
    friend istream &operator>>(istream &in,complex &c1)
    {
        cout<<"\nEnter the values:";
        in>>c1.real>>c1.imag;
    }
    complex operator+(complex c1)
    {
        complex c;
        c.real=c1.real+real;
        c.imag=c1.imag+imag;
        return c;
    }
    complex operator*(complex c1)
    {
        complex c;
        c.real=c1.real*real;
        c.imag=c1.imag*imag;
        return c;
    }

};
int main()
{
    complex cp,pc,res;
    cin>>cp>>pc;
    cout<<cp<<pc;
    res=cp+pc;
    cout<<"\nAddition is::"<<res;
        res=cp*pc;
    cout<<"\nMultiplication is::"<<res;
    return 0;
}
