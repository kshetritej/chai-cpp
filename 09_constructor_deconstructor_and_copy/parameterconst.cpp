#include <iostream>
#include <string>
#include <vector>

class Tea
{
public:
    std::string name;
    int quantity;
    std::vector<std::string> ingredients;

    Tea(std::string name, int quantity, std::vector<std::string> ingredients)
    {
        this->name = name;
        this->quantity = quantity;
        this->ingredients = ingredients;
    }
    void printDetails()
    {
        std::cout << "Tea name:" << name << std::endl;
        std::cout << "Servings:" << quantity << std::endl;
        std::cout << "Ingredients: " << std::endl;
        for (std::string ingredient : ingredients)
        {
            std::cout << ingredient << std::endl;
        }
    };
};

int main()
{
    Tea milkTea("Milk Tea", 1, {"Milk", "Sugar", "Tea Leaves"});
    milkTea.printDetails();
    return 0;
}
