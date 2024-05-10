#pragma once
#include <string>
using namespace std;
class Dish
{
private:
    string description;
public:
    Dish();
    Dish(string description);

    string get_description();
};

