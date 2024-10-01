#include <iostream>

using namespace std;

int main() {

  // lambda function: the function with no name, stored in variable, auto type since no type is known and called immediately.
  // used when no repeated use of function is required.
  auto preparedChai = [](int cups) {
    cout << "preparing " << cups << " of tea." << endl;
  };
  preparedChai(5);
  return 0;
}
