#include <iostream>
using namespace std;

class Student
{
    private:
        int roll;
        string name;
        int phymarks;
        int mathsmarks;
        int chemmarks;
    public:
        Student(int r,string n,int p,int m,int c)
{
    roll=r;
    name=n;
    phymarks=p;
    mathsmarks=m;
    chemmarks=c;
}
int total()
{
    return phymarks+mathsmarks+chemmarks;
}
char grade()
{
    float average=total()/3;

    if(average>60)
        return 'A';
    if(average<=40 && average<=60)
        return 'B';
    else
        return 'C';
}
};
int main()
{
    int roll;
    string name;
    int p,m,c;
    cout<<"Enter roll no"<<endl;
    cin>>roll;
    cout<<"Enter name"<<endl;
    cin>>name;
    cout<<"Enter marks in 3 subjects"<<endl;
    cin>>p>>m>>c;
    Student s(roll,name,p,m,c);

    cout<<"Total marks:"<<s.total()<<endl;
    cout<<"Grade of student:"<<s.grade()<<endl;
}