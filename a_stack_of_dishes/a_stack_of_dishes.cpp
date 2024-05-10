/*
    Leonardo Gonzalez   4/18/2024
    Week 14             A Stack of Dishes
*/

#include <iostream>
#include "Stack.h"
#include <cassert>
using namespace std;

int main()
{
    cout << "Testing Dish Stack..." << endl << endl;
    Stack dish_stack(10);

    assert(dish_stack.size() == 0);

    //Expected Pop Fail
    dish_stack.pop();

    //Expected Peek Fail
    dish_stack.peek();

    Dish plate1("Red");
    Dish plate2("Orange");
    dish_stack.push(plate1);
    dish_stack.push(plate2);

    assert(dish_stack.size() == 2);
    assert(dish_stack.peek().get_description() == "Orange");
    dish_stack.pop();

    assert(dish_stack.size() == 1);
    assert(dish_stack.peek().get_description() == "Red");

    Dish plate3("Yellow");
    for (int i = 0; i < 9; i++) {
        dish_stack.push(plate3);
    }

    assert(dish_stack.size() == 10);
    assert(dish_stack.peek().get_description() == "Yellow");

    //Expected Push Fail
    dish_stack.push(plate1);

    dish_stack.reset();
    assert(dish_stack.size() == 0);

    cout << endl << "Testing Complete." << endl;

}
