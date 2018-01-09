#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    char name[10];
    long phone,key;
    fstream file;
    file.open("Something.txt",ios::app);
    cout<<"\nEnter name::";cin>>name;
    file<<name<<"\t";
    cout<<"\nEnter phone::";cin>>phone;
    file<<phone<<"\n";
    file.close();


    file.open("Something.txt");
    file>>name>>phone;
    cout<<name<<"\t";

    file.close();
    return 0;
}
