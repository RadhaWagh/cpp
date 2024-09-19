#include <iostream>
using namespace std;

class Rectangle
{
    public:
        void area()
{
    cout<<"Area of Rectangle"<<endl;
}
};

class cuboid:public Rectangle
{
    public:
        void volume()
{
    cout<<"Volume of Cuboid"<<endl;
}
};
int main()
{
    cuboid c;
    Rectangle *p=&c;
    p->area();
    //p->volume();

    return 0;
}