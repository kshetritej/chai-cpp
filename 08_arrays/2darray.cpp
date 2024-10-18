#include <iostream>
using namespace std;
int main() {

  int chaiSales[3][4] = {
      {30, 40, 50, 60}, {70, 80, 90, 100}, {110, 120, 130, 140}};

  for (int i = 0; i < 3; i++) {
      cout << "Shop: " << i+1   << endl;
    for (int j = 0; j < 4; j++) {
      cout <<  chaiSales[i][j]  << " " << endl;
    }

    cout << "\n" << endl;
  }
  return 0;
}
