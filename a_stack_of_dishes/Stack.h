#pragma once
#include <array>
#include "Dish.h"
class Stack
{
private:
	Dish* dishes;
	int top;
public:
	Stack(int max_size);
	void push(Dish dish);
	Dish pop();
	Dish peek();
	int size();
	void reset();
};



