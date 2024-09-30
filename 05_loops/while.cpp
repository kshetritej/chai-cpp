#include <iostream>
using namespace std;

int teaCups;

int main() {

  cout << "Enter the number of teacups to serve:";
  cin >> teaCups;

  while (teaCups > 0) {
    cout << "Served tea cup: " << teaCups << endl;
    teaCups = teaCups - 1;
    cout << teaCups << " remaining to serve. \n";
  }

  cout << "All tea cups orders have been served.\n";
  return 0;
}
