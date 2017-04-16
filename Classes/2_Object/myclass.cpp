#include <iostream>
#include "myclass.h"
using namespace std;

MyClass::MyClass()
{
  cout<<"Constructor"<<endl;
}
void MyClass::printHi()
{
  cout<<"Hi from printHi"<<endl;
}
MyClass::~MyClass()
{
  cout<<"Destructor"<<endl;
}