#include <iostream>
#include <string>
#include <vector>

class Tea
{
public:
    // dynamic memomry allocation --> called malloc maybe...
    std::string *name;
    int quantity;
    std::vector<std::string> ingredients;

    Tea(std::string name, int quantity, std::vector<std::string> ingredients)
    {
        this->name = new std::string(name);
        this->quantity = quantity;
        this->ingredients = ingredients;
    }

    ~Tea()
    {
        // deleteing the dynamic memory allocation
        std::cout << "delteing refernce..." << std::endl;
        delete name;
        std::cout << "deleted refernce" << std::endl;
    }
    //** Using (const) keyword so that the value isn't changed and remain constant */
    Tea(const Tea &other) //passing refrence to the memory with  (&) symbole --> memory refrence   --> this is called copy constructor
    {
        std::cout << "calling copy constructor..." << std::endl;
        name = new std::string(*other.name); //use of new keyworkd and (*) to reference the memory address 
        quantity = other.quantity;
        ingredients = other.ingredients;
        std::cout << "finished copying!" << std::endl;
    }
    void printDetails()
    {
        std::cout << "Tea name:" << *name << std::endl;
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
    std::cout << "Regular Tea" << std::endl;
    milkTea.printDetails();


    //calling the copy constructor
    Tea milkTeaWithoutSugar = milkTea; // copies the value from the default constructor
    *milkTeaWithoutSugar.name = "Milk Tea without Sugar"; //settting new name for the tea which will use copy constructor
    milkTeaWithoutSugar.ingredients = {"Milk", "Tea Leaves"};
    milkTeaWithoutSugar.printDetails();
    return 0;
}
