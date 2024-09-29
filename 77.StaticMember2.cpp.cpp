#include <iostream>
using namespace std;

class Student
{
    public:
    int roll;
    string name;

    static int addNo;

    Student (string n)
    {
        addNo++;
        roll=addNo;
        name=n;
    }
    void display()
    {
        cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;
    }
};
int main()
{
    Student s1("Radha");
    Student s2("Arpita");
    Student s3("Kumkum");
    Student s4("Kumkum");
    Student s5("Kumkum");
    Student s6("kumkum");

    s1.display();
    s6.display();

    cout<<"Number Admission "<<Student::addNo<<endl;
}