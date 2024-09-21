#include <iostream>

using namespace std;



int main () {

  int cups;
  bool isStudent;



  cout << "how many cups have you got ? " ;
  cin >> cups;

  cout << "Are you a student ?\n (1 if you are student and 0 if you are not) " ;
  cin >> isStudent;


  cout << "Your choice, cups: " << cups << "and student: " << isStudent << endl;

  if (isStudent || cups >= 15) {
    cout << "You got 5\% discount";
  } else {
  cout << "no discounts for non-students or purchase of cups less than 15";
  }


}
