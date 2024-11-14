#include <iostream>
#include <string>
#include <vector>
using namespace std;

// base class
class Tea
{
protected:
    string teaName;
    int servingSize;

public:
    Tea(string name, int servingSize) : teaName(name), servingSize(servingSize)
    {
        cout << "Tea constructor called." << "Teaname " << teaName << endl;
    }

    virtual void brewTea()
    {
        cout << "Brewing: " << teaName << "with generic method." << endl;
    }
    virtual void serve()
    {
        cout << "Serving: " << servingSize << "cups of " << teaName << endl;
    }

    virtual ~Tea()
    {
        cout << "Tea destructor called." << endl;
    }
};

class GreenTea : public Tea
{
public:
    GreenTea(int servingSize) : Tea("Gren Tea", servingSize)
    {
        cout << "Green Tea constructor called." << "with serving size " << servingSize << endl;
    }

    void brewTea() override
    {
        cout << "Brewing: " << teaName << "with override method." << endl;
    }
    ~GreenTea()
    {
        cout << "Green Tea destructor called." << endl;
    }
};

class MasalaTea : public Tea
{
public:
    MasalaTea(int servingSize) : Tea("Masala Tea", servingSize)
    {
        cout << "Masala Tea constructor called." << "with serving size " << servingSize << endl;
    }
    void brewTea() override final // the method with final can't be overriden
    {
        cout << "Brewing: " << teaName << "with override method." << endl;
    };
    ~MasalaTea()
    {
        cout << "Masala Tea destructor called." << endl;
    }
};

int main()
{
    Tea *tea1 = new GreenTea(6);
    Tea *tea2 = new MasalaTea(6);

    tea1->brewTea();
    tea1->serve();

    tea2->brewTea();
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}