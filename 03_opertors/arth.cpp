#include <iostream>
using namespace std;

int main () {
  int cups;
  double pricePerCup, totalPrice, discountedPrice;


  cout << "enter the number of tea cups..." << endl;

  cin >> cups;

  cout << "how much is the price per cup?" << endl;

  cin >> pricePerCup;

  totalPrice = cups * pricePerCup;


  //apply 5% discount if total price i above 100.
 
  if (totalPrice > 100) {
    discountedPrice = totalPrice - (totalPrice * 0.05);
    
    cout << "discounted price is " << discountedPrice << endl;
  } else {
    cout << "Total Pirce is  " << totalPrice << endl;
  }

  return 0;
}
