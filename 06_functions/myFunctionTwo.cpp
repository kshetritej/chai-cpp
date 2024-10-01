// pass by vaue : changing the copy of the original file :::: downloading the
// file and editing pass by refrence: directly modifying the original value :::
// editing the github file with access and pushing it to main directly

#include <iostream>

using namespace std;


//call by value function
void pourChai(int cups) {
  cups = cups + 5;
  cout << "poured cups: " << cups << endl;
}

int main() {
  int chaiCups = 10;
  pourChai(chaiCups);

  cout << "you ordered: " << chaiCups << endl;

  return 0;
}
