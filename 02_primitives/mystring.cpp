#include <iostream>
#include <string>
using namespace std; 


int main () {

  string favouriteTea = "Lemon Tea \t";
  string teaDescription = "A tea containing \"Lemon\" ";  //\n is called escape sequence \t will birng tab. while only \ cna be use to ignore characters from being acknowleged as programatic characters.

  cout << favouriteTea << teaDescription <<  endl;



  return 0;
}
