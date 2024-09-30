#include <iostream>
#include <string>
using namespace std;

int main() {
  string response;

  while (true) {
    cout << "Do you want more tea? (yes/no): ";
    cin >> response;
    if (response == "no") {
      break;
    }

    cout << "Here's more tea!" << endl;
  }
  cout << "OK, no more tea for you!" << endl;
  return 0;
}
