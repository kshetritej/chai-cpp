#include <iostream>
#include <string>
#include <vector>
using namespace std;



//abstract class helps with uniformity in code. *
class Tea
{
public:
    virtual void prepareIngredients() = 0; // pure virtual function
    virtual void brew() = 0;
    virtual void serve() = 0;

    void makeTea()
    {
        prepareIngredients();
        brew();
        serve();
    }
};

class GrenTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Green leaves and water is ready to brew." << endl;
    };

    void brew() override
    {
        cout << "Green tea is brewing." << endl;
    };

    void serve() override
    {
        cout << "Green tea is served." << endl;
    }
};
class MasalaTea: public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Masalas and water is ready to brew." << endl;
    };

    void brew() override
    {
        cout << "Masala tea is brewing." << endl;
    };

    void serve() override
    {
        cout << "Masala tea is served." << endl;
    }
};
int main()
{
   GrenTea greenTea;
   greenTea.serve();

   MasalaTea masalaTea;
   masalaTea.makeTea();

    return 0;
}