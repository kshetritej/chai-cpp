#include <iostream>

using namespace std;


int main () {
  int cups;

  cout << "enter the numbers of cups you have: ";


  cin >> cups;

  if ( cups >= 20 ) {
    cout << "Congrats! you are a GOLD member now.";
  } else if (cups >= 10 ) {
    cout << "Congrats! you are a SILVER member now.";
  } else {
    cout << "You are currently in BRONZE membership, buy more cups of teas and get your GOLD badge now!!";
  }

  return 0;
}
