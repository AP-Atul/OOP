#include <iostream>

using namespace std;

int main()
{
    int age,wheels,income;
    string city;
    cout << "Enter age::";
    cin>>age;
    try{
        if(age>=18&&age<=55)
        {
            cout<<"Age stored...";
        }
        else{
            throw(age);
        }
    }
    catch(int a){cout<<"\nAge is not valid...";}

    ///////
    cout<<"\nEnter city::";
    cin>>city;
    try{
    if(city=="Mumbai")
        {
            cout<<"\nCity stored.";
        }
        else{throw (city);}
    }
    catch(string city){cout<<"\nCity not valid.....";}
    return 0;
}
