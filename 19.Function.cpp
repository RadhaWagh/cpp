#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname) 
{
  cout << fname<<endl;
}

int main()
{
  myFunction("Radha");
  myFunction("Arjun");
  myFunction("Bhakti");
  return 0;
}
