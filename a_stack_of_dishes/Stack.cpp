#include "Stack.h"

Stack::Stack(int max_size) {
	dishes = new Dish[max_size];
	top = -1;
}

void Stack::push(Dish dish) {
	top++;
	dishes[top] = dish;
}

Dish Stack::pop() {
	top--;
	return dishes[top + 1];
}

Dish Stack::peek() {
	return dishes[top];
}

int Stack::size() {
	return top + 1;
}

void Stack::reset() {
	top = -1;
}