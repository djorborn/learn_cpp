#include <iostream>
#include <ctime>
using namespace std;

int main( ) {
   // current date/time based on your computer
   time_t now = time(0);
   
   // change it to string form
   char* dt = ctime(&now);
   cout <<"\n";
   cout << "The local date and time: " << dt << endl;

   // change it to tm struct for UTC
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The UTC date and time: "<< dt << endl;
  
  return 0;
}
