#include <iostream>

using namespace std;

int main() {

  int cups;

  double pricePerCup = 2.5, totalPrice, discount;

  cout << "Enter the number of cups you want to buy: ";
  cin >> cups;

  totalPrice = pricePerCup * cups;
  if (cups >= 10) {
    discount = 0.20;
  } else if (cups >= 15) {
    discount = 0.30;
  } else if (cups >= 20) {
    discount = 0.50;
  } else {
    discount = 0;
  }

  totalPrice -= (totalPrice * discount);

  cout << "Orderd" << " " << cups << " tea. Your final price will be " << totalPrice << endl;

  return 0;
}
