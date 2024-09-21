#include <iostream>
using namespace std;
  
int main () {
  float teaPrice = 200.12;

  int roundedTeaPrice = (int) teaPrice;

  cout << roundedTeaPrice << endl;
  


  int teaQuantity = 10;

  float totalPrice = teaPrice * teaQuantity;


  cout << totalPrice << endl;

  return 0;
}
