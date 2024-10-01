#include <iostream>
using namespace std;
/*
*************  Variable Scope *************
variable declared inside {} will have affect only inside that block
variable declared outside {} will be available to other blocks inside {}

*************  Variable Spilling *************
variable declared outside {}

*/




// call by refrence : change in real value
void pourChai(int &chai) {

  chai = chai - 1;
  cout << "chai is " << chai << endl;
}


int main() {

  int chaiCount = 10;
  pourChai(chaiCount);
  cout << "chai is " << chaiCount << endl;

  return 0;
}
