#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Chai {
  // data members --- attributes/variables
public:
  string teaName;
  int servings;
  vector<string> ingredients;

  void displayChaiDetails() {
    cout << "Tea name: " << teaName << endl;
    cout << "Tea Servings: " << servings << endl;
    cout << "Ingredients: ";
    for (string ingredient : ingredients) {
      cout << ingredient << ",";
    }
    cout << endl;
  }
};

int main() {
  // string ingredients[] = {"milk", "water", "sugar", "tea leaves"};

  // for (string ing : ingredients) {
  //   cout << ing << endl;
  // } // runs on normal arrays too.

  Chai chai = Chai();
  chai.teaName = "Masala Chai";
  chai.servings = 2;
  chai.ingredients = {"milk", "water", "sugar", "tea leaves"};
  chai.displayChaiDetails();

  return 0;
}
