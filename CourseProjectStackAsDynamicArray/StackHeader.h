#pragma once
#include <iostream>

using namespace std;
class DynamicArray {
public:
	int N;
	int* arr;
	DynamicArray(int n);
	~DynamicArray();
};

class Stack{
public:
	static DynamicArray dynamicArray;
	Stack();
	~Stack();
protected:
	static inline int leftTop, rightTop;
	void virtual push(int) = 0;
	int virtual pop() = 0;
	void virtual show() = 0;
	bool checkIsNotFull();
};

class LeftStack:public Stack {
public:
	LeftStack();
	~LeftStack();
	bool checkIsNotEmpty();
	void push(int n) override;
	int pop() override;
	void show() override;
};
class RightStack :public Stack {
public:
	RightStack();
	~RightStack();
	bool checkIsNotEmpty();
	void push(int n) override;
	int pop() override;
	void show() override;
};