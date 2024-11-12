#include <iostream>
#include <vector>

class Chai
{
public:
    std::string teaName;
    int servings;
    std::vector<std::string> flavours;

    //deligationg constructor,  --> calls another constructor
    //deligatin -> chosen representative
    Chai(std::string name): Chai(name, 1, {"Green", "Black"}){};

    //main constructor
    Chai(std::string name, int serve, std::vector<std::string> flavor)
    {
        teaName = name;
        servings = serve;
        flavours = flavor;
    }

    void displayDetails()
    {
        std::cout << "Name: " << teaName << "\n";
        std::cout << "Servings: " << servings << "\n";
        std::cout << "Flavours: ";
        for (std::string flav : flavours)
        {
            std::cout << flav << ", ";
        }
        std::cout << "\n";
    }
};

int main()
{
    Chai quickchai("Quick Chai");
    quickchai.displayDetails();
    return 0;
}