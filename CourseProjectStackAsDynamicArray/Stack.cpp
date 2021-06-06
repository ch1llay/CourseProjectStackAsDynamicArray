#include "StackHeader.h"

DynamicArray Stack::dynamicArray(10); // выделение памяти для стеков
int main() {
	// объявление стеков
	LeftStack leftStack;
	RightStack rightStack;
	// Добавление элементов в левый стек
	leftStack.push(1);
	leftStack.push(2);
	leftStack.push(3);
	leftStack.push(4);
	leftStack.push(5);
	leftStack.pop(); // извлечение элемента из левого стека
	leftStack.show(); // вывод содержимого левого стека
	// Добавление элементов в правый стек
	rightStack.push(-1);
	rightStack.push(-2);
	rightStack.push(-3);
	rightStack.push(-4);
	rightStack.push(-5);
	rightStack.show(); // вывод содержимого правого стека
	rightStack.pop(); // извлечение элемента из правого стека
	rightStack.show(); // вывод содержимого правого стека
	leftStack.show(); // вывод содержимого левого стека
}