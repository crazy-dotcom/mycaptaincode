#include <iostream>
using namespace std;

int main()
{
    int i,arr[10];
    cout<<"enter elements: ";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int *p;
    p=arr;
    cout<<"You entered: ";
    for(i=0;i<5;i++)
    {
        cout<<*p<<"\n";
        p++;
    }
    return 0;
}
