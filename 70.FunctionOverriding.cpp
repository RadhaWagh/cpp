#include <iostream>
using namespace std;

class Base
{
    void Display()
{
    cout<<"Display Hello"<<endl;
}
};
class Derived:public Base
{
    public:
	void display()
	{
		cout<<"Display Radha"<<endl;
	}
	
};    
 				   
int main()
{
	Derived d;
	d.display();
}
	    