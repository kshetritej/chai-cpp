#include <iostream>
using namespace std;

int main () {

  int teaBags;

  cout << "how many tea bags do you have ? ";


  cin >> teaBags;


  if (teaBags < 10 ) {
    teaBags = teaBags + 5;
    //teaBags += 5;  //shorthand notation for adding 

    cout << "you got additional 5 bags now your total tea bags are " << teaBags << endl;
  } 

    cout << "Okay you have  " << teaBags << endl;
  

  return 0;
}
