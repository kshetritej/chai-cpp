#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Chai
{
public:
    string teaName;
    int servings;
    vector<string> ingredients;

    Chai() {
        teaName = "Black Tea";
        servings = 3;
        ingredients = {"Tea Leaves", "Water", "Sugar"};

        cout << "Contructor called!" << endl;
    };

    void displayMessage()
    {
        cout << "Teaname: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        for (string ingredient : ingredients)
        {
            cout << "Ingredients: " << ingredient << endl;
        }
    }
};


int main()
{
    Chai defaultchai;
    defaultchai.displayMessage();
    defaultchai.servings;
    return 0;
}