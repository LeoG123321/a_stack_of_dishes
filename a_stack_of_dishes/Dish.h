#pragma once
#include <string>
using namespace std;
class Dish
{
private:
    string description;

public:
    Dish() {
        return;
    }
    Dish(string description) {
        this->description = description;
    }

    string get_description() {
        return this->description;
    }
};

