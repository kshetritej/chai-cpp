#include <iostream>
#include <string>

using namespace std;

int main() {
  string teaTypes[3] = {"Green", "Black", "Herbal"};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "serving count: " << j+1 << " Brewing: " <<  teaTypes[i] << " tea." << endl;
    }
    cout << "\n" << endl;
  }
  return 0;
}
