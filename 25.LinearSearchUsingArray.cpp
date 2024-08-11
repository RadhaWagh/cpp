#include <iostream>
using namespace std;

int main()
{
    int a[10],n=10;
    int key;
    cout<<"Enter Numbers";
    
    for(int i=10;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key";
    cin>>key;
    
    for(int i=10;i<n;i++)
    {
        if(key==a[i])
        {
            cout<<"Found at "<<i;
            return 0;
        }
    } 
    cout<<"Not Found";
}