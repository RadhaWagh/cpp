#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs("My.Text,ios::trunc");
    ofs<<"Radha"<<endl;
    ofs<<57<<endl;
    ofs<<"cs"<<endl;

    ofs.close();
}