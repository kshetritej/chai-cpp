
#include <iostream>
#include <string>
using namespace std; 


int main () {

  string userTea;
  int teaQuantity;
  
  cout << "What would you like to Order in tea?\n";

  getline(cin, userTea);
    

  cout << "How many teas would you like to order? \n";

  cin >> teaQuantity;


  cout << "Your order for " << teaQuantity << " " << userTea << "will be availabel shortly!";

  return 0;
}
