#pragma once
#include <array>
#include "Dish.h"
class Stack
{
private:
	Dish* dishes;
	int top;
	int max_size;
	void max_reach_error();
	void min_reach_error();
	void peek_error();
public:
	Stack(int max_size);
	void push(Dish dish);
	Dish pop();
	Dish peek();
	int size();
	void reset();
};



