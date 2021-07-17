#include<iostream>
using namespace std;
bool checkprime(int n);

int main()
{
    int a,n;
    cout<<"enter any number\n";
    cin>>n;
    bool check=false;
    for(a=2;a<=n/2;a++)
    {
        if(checkprime(a))
        {
            if(checkprime(n-a))
            {
                cout<<n<<"="<<a<<"+"<<n-a<<"\n";
                check=true;
            }
        }
    }
    if(!check)
    cout<<n<<" cant be expressed as sum of two prime numbers";
    return 0;
}

bool checkprime(int n)
{
    int i;
    bool isPrime=true;
    if(n==0||n==1)
    isPrime=false;
    else
    {
       for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
               isPrime=false;
               break; 
            }
        } 
    }
    
    return isPrime;
}
