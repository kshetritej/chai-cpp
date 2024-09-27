#include <iostream>
#include <string>

using namespace std;

int main() {
  string teaOrder;

  cout << "Enter your tea order.";
  getline(cin, teaOrder);

  if (teaOrder == "Green Tea") {
    cout << "Green Tea is a great choice!" << endl;
  } else if (teaOrder == "Lemon Tea") {
    cout << "Lemon Tea is a great choice!" << endl;
  } else if (teaOrder == "Mint Tea") {
    cout << "Mint Tea is a great choice!" << endl;
  } else {
    cout << "We do not have that tea." << endl;
  }

  return 0;
}
