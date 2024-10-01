/*
returnType functionName (parameters){
    //function body
}

//usage
functionName(arguments);
*/

#include <iostream>
using namespace std;

// function declaration
int checkTemperature(int temperature);
void serveChai(int number);

// function definition ____
int checkTemperature(int temperature) { return temperature; }

// function overloading
void serveChai(int cupsOfTea) {
  cout << "serving chai " << cupsOfTea << " to the customer" << endl;
}
// void serveChai() { cout << "Serving chai!\n"; }  --- this will be replaced by

void serveChai(string teaType = "Ginger Tea") {
  cout << "Serving " << teaType << endl;
}

void makeChai() {
    cout << "Boiling Water ... , adding tealeaves... , straining ...";
}

int main() {
  int temperature = checkTemperature(9);
  cout << temperature << endl;

  makeChai();

  serveChai(2);
  serveChai();
  serveChai("Herbal Tea");
  return 0;
}
