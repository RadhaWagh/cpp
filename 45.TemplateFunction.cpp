#include <iostream>
using namespace std;

template<class T>
T maxim(T a,T b)
{
    return a>b?a:b;
}
int main()
{
    cout<<maxim(10,5)<<endl;
    cout<<maxim(8.9,9.0)<<endl;
    return 0;
}