// write a program that lets user select a tea type from a menu.
// Use switch statement to display the price based ont the selected tea.
// Green tea: $2
// Black tea: $3
// Oolong tea: $4

#include <iostream>

using namespace std;

int main() {
  int choice;
  double price;

  cout << "Select a tea type from the menu:\n" << endl;
  cout << "1.Green Tea\n 2. Black Tea\n 3.Oolong Tea" << endl;

  cout << "Enter your choice in number (1-3):" << endl;
  cin >> choice;

  switch (choice) {
  case 1: {
    price = 2;
    break;
  }
  case 2: {
    price = 3;
    break;
  }
  case 3: {
    price = 4;
    break;
  }
  default: {
    cout << "Invalid choice" << endl;
    break;
  }
  }

  if (choice >= 1 && choice <= 3) {
    cout << "\nThe price of the tea will be $" << price << endl;
  }

  return 0;
}
