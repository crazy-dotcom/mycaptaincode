#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"enter your age:\n";
    cin>>age;
    if(age>=18)
    {
        cout<<"\nYou are eligilble to vote";
    }
    else
    {
        cout<<"\nYou are not eligible to vote";
        cout<<"\nPlease wait until you turn 18";
    }
    return 0;
}
