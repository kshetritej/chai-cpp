#include <iostream>

using namespace std;

int main() {
  string teaTypes[3] = {"Green", "Black", "Herbal"};

  for (int i = 0; i < 3; i++) {
    if (teaTypes[i] == "Herbal") {
      continue;
    }
    cout << "brewing " << teaTypes[i] << " tea..." << endl;
  }

  return 0;
}
