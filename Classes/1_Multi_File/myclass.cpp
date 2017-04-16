#include <iostream>
#include "myclass.h"
using namespace std;

MyClass::MyClass()
{
  cout<<"Constructor"<<endl;
}
MyClass::~MyClass()
{
  cout<<"Destructor"<<endl;
}