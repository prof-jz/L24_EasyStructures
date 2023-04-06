#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct myStruct
{
  string fN, mN;
  int age;
  float bal;
};

int main()
{
  myStruct persons;

  ifstream ppl;
  ppl.open("data.txt");
  ppl >> persons.fN;
  ppl >> persons.mN;
  ppl >> persons.age;
  ppl >> persons.bal;
  ppl.close();

  cout << persons.fN << " ";
  cout << persons.mN << " ";
  cout << persons.age << " ";
  cout << persons.bal << " ";

  return 0;
  
}