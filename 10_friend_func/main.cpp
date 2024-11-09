#include <iostream>
#include <string>
#include <vector>

class Tea
{
private:
    std::string teaName;
    int servings;

public:
    Tea(std::string name, int serving)
    {
        this->teaName = name;
        this->servings = serving;
    };
    void printDetails()
    {
        std::cout << "Tea Type: " << teaName << ", Servings: " << servings << std::endl;
    }
    friend bool getComparison(Tea &tea1, Tea &tea2) { return tea1.servings > tea2.servings; };
};
int main()
{
    Tea milkTea("Milk Tea", 5);
    std::cout << "Milk Tea _________" << std::endl;
    milkTea.printDetails();

    Tea blackTea("Black Tea", 9);
    std::cout << "Black Tea_________" << std::endl;
    blackTea.printDetails();

    std::cout << "Servings Comparision____" << std::endl;
    if (getComparison(milkTea, blackTea))
    {
        std::cout << "Milk tea is preferred!" << std::endl;
    }
    else
    {
        std::cout << "Black Tea is preferred!" << std::endl;
    }

    return 0;
}
