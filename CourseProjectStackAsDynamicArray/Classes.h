#pragma once
#include <iostream>

using namespace std;
class DynamicArray {
public:
	int N;
	int* arr;
	DynamicArray(int n) {
		cout << "Constructor DynamicArray" << endl;
		N = n;
		arr = new int[N]; // bad_alloc
	}
	~DynamicArray()
	{
		cout << "Destructor DynamicArray" << endl;
		// delete[] arr;
	}
};

class Stack{
public:
	Stack(){
		cout << "Constructor Stack" << endl;
	}
	~Stack()
	{
		cout << "Destructor Stack" << endl;
	}
	void virtual push(int) = 0;
	int virtual pop() = 0;
	void virtual show() = 0;
	bool notFull() {
		cout << leftTop << " " << rightTop << endl;
		return rightTop - leftTop > 1;
	}
	bool notEmpty() {
		return rightTop - leftTop <= d.N;
	}
protected:
	static DynamicArray d;
	static inline int leftTop, rightTop;
};

class LeftStack:public Stack {
public:
	LeftStack() {
		leftTop = -1;
		cout << "Constructor LeftStack" << endl;
	}
	~LeftStack()
	{
		cout << "Destructor LeftStack" << endl;
	}
	void push(int n) override {
		if (notFull())
			d.arr[leftTop++] = n;
		else
			cout << "stack is full";
	}
	int pop() override {
		if (notEmpty())
			return d.arr[--leftTop];
		else
			throw;
	}
	void show() override {
		cout << "Left stack" << endl;
		for (int i = leftTop; i > 0; i--) {
			cout << d.arr[i] << " ";
		}
		cout << endl;
	}
};
class RightStack :public Stack {
public:
	RightStack() {
		rightTop = d.N;
		cout << "Constructor RightStack" << endl;
	}
	~RightStack()
	{
		cout << "Destructor RightStack" << endl;
	}
	void push(int n) override {
		if (notFull())
			d.arr[rightTop--] = n;
		else
			cout << "stack is full";
	}
	int pop() override {
		if (notEmpty())
			return d.arr[--rightTop];
		throw std::out_of_range("Stack is empty");
	}
	void show() override {
		cout << "Left stack" << endl;
		for (int i = rightTop; i < d.N-1; i++) {
			cout << d.arr[i] << " ";
		}
		cout << endl;
	}
};