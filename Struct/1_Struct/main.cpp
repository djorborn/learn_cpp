#include <iostream>
#include <string>
using namespace std;

struct apple
{
  string local;
  string type;
  int amount;
};

int main(){
  apple a;
  cout<<"Enter type of apple: ";
  cin>>a.type;
  cout<<"\n"<<a.type<<endl;
  
  return 0;
}