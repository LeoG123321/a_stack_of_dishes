#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack(int max_size) {
	dishes = new Dish[max_size];
	top = -1;
	this->max_size = max_size
}

void Stack::push(Dish dish) {
	if (size() == max_size) {
		max_reach_error();
		return;
	}
	top++;
	dishes[top] = dish;
}

Dish Stack::pop() {
	if (top == -1) {
		min_reach_error();
		return;
	}
	top--;
	return dishes[top + 1];
}

Dish Stack::peek() {
	if (top == -1) {
		peek_error();
		return;
	}
	return dishes[top];
}

int Stack::size() {
	return top + 1;
}

void Stack::reset() {
	top = -1;
}

void max_reach_error() {
	cout << "Push Failed: Max Size Reached." << endl;
}

void min_reach_error() {
	cout << "Pop Failed: Min Size Reached." << endl;
}

void peek_error() {
	cout << "Peek Failed: There is no Dishes in the Stack." << endl;
}