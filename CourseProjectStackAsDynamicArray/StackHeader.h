#pragma once
#include <iostream>

using namespace std;
// класс динамического массива
class DynamicArray {
public:
	int N; // размер динамического массива
	int* arr; // указаетель на первый элемент массива
	DynamicArray(int n);
	~DynamicArray();
};

// абстрактный класс Stack
class Stack{
public:
	static DynamicArray dynamicArray; // объект динамического массива, со статически выделенной пам€тью
	Stack();
	~Stack();
protected:
	static inline int leftTop, rightTop; // вершины стеков
	void virtual push(int) = 0; // виртуальна€ функци€ добавлени€ элемента в стек
	int virtual pop() = 0; // виртуальна€ функци€ извлечени€ элемента в стек
	void virtual show() = 0; // виртуальна€ функци€ вывода содержимого стека
	bool checkIsNotFull(); // функци€, провер€юща€ есть ли место дл€ добавлени€ элемента
};

class LeftStack:public Stack {
public:
	LeftStack();
	~LeftStack();
	bool checkIsNotEmpty(); // функци€ провер€юща€€, есть ли элемент в левом стеке
	void push(int n) override;
	int pop() override;
	void show() override;
};
class RightStack :public Stack {
public:
	RightStack();
	~RightStack();
	bool checkIsNotEmpty(); // функци€ провер€юща€€, есть ли элемент в правом стеке
	void push(int n) override;
	int pop() override;
	void show() override;
};