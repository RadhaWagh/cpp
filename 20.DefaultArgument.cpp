#include <iostream>
using namespace std;

int max(int a=0,int b=0,int c=0)
{
    return a>b && a>c ? a:(b>c?b:c);
}
int main()
{
    cout<<max()<<endl;
    cout<<max(10)<<endl;
    cout<<max(10,12)<<endl;
    cout<<max(10,12,13)<<endl;
    
    return 0;
}