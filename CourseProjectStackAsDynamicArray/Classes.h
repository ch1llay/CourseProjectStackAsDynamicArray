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
		arr = new int[N];
	}
	~DynamicArray()
	{
		cout << "Destructor DynamicArray" << endl;
		delete[] arr;
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
		return rightTop - leftTop > 1;
	}
	bool notEmpty() {
		return rightTop - leftTop <= d.N;
	}
protected:
	static DynamicArray d;
	int leftTop, rightTop;
};

class LeftStack:public Stack {
private:
	int leftTop = -1;
public:
	LeftStack() {

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
	int 
};
