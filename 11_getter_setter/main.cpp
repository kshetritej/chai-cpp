#include <iostream>
#include <string>
#include <vector>

class Person
{
private:
    std::string name;
    int age;
    std::vector<std::string> hobbies;

public:
    Person()
    {
        this->name = name;
        this->age = age;
    }

    Person(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    std::string getName()
    {
        return name;
    };
    void setName(std::string name)
    {
        this->name = name;
    };

    int getAge()
    {
        return age;
    }

    void setAge(int age)
    {
        this->age = age;
    };

    std::vector<std::string> getHobbies()
    {
        return hobbies;
    }

    void setHobbies(std::vector<std::string> hobbies)
    {
        this->hobbies = hobbies;
    };
    void printDetails()
    {
        std::cout << "Name:" << name << "\n age: " << age << "\n";
        std::cout << "--Hobbies--\n";
        for (std::string hobby : hobbies)
        {
            std::cout << hobby << "\n";
        }
    }
};

int main()
{
    Person person;
    person.setName("Tom");
    person.setAge(23);
    person.setHobbies({"Reading", "Coding"});

    person.printDetails();

    return 0;
}
