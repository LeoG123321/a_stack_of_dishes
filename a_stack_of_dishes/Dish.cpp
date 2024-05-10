#include "Dish.h"

Dish::Dish() {
    return;
}
Dish::Dish(string description) {
    this->description = description;
}

string Dish::get_description() {
    return this->description;
}