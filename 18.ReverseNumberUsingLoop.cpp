#include <iostream>
using namespace std;

int main()
{
    int n,r,rev=0,m;
    
    cout<<"Enter n";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev+r*r*r;
    }
    cout<<"Reverse no. is "<<rev;
    return 0;
}