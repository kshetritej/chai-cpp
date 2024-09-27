#include <iostream>

using namespace std;

int main() {
  int hour;
  cout << "Enter the current hour (0-24):" << endl;
  cin >> hour;

  if (hour < 18 && hour >= 8) {
    cout << "Welcome! enjoy your tea.";
  } else {
    cout << "Sorry, we are closed. We open at 8:00 AM." << endl;
  }
  return 0;
}
