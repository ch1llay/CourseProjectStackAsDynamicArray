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
	static DynamicArray dynamicArray;
	Stack(){
		cout << "Constructor Stack" << endl;
	}
	~Stack()
	{
		cout << "Destructor Stack" << endl;
	}
protected:
	static inline int leftTop, rightTop;
	void virtual push(int) = 0;
	int virtual pop() = 0;
	void virtual show() = 0;
	bool checkIsNotFull() {
		return rightTop - leftTop > 1;
	}
	bool checkIsNotEmpty() {
		return rightTop - leftTop <= dynamicArray.N;
	}
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
		if (checkIsNotFull()) {
			dynamicArray.arr[++leftTop] = n;
		}
		else {
			cout << "stack is full";
		}
	}
	int pop() override {
		if (checkIsNotEmpty())
			return dynamicArray.arr[--leftTop];
		else
			throw;
	}
	void show() override {
		cout << "Left stack" << " [";
		for (int i = leftTop; i > -1; i--) {
			cout << dynamicArray.arr[i] << ((i > 0) ? ", " : "]");
		}
		cout << endl;
	}
};
class RightStack :public Stack {
public:
	RightStack() {
		rightTop = dynamicArray.N;
		cout << "Constructor RightStack" << endl;
	}
	~RightStack()
	{
		cout << "Destructor RightStack" << endl;
	}
	void push(int n) override {
		if (checkIsNotFull())
			dynamicArray.arr[--rightTop] = n;
		else
			cout << "stack is full";
	}
	int pop() override {
		if (checkIsNotEmpty())
			return dynamicArray.arr[--rightTop];
		throw std::out_of_range("Stack is empty");
	}
	void show() override {
		cout << "Right stack" << " [";
		for (int i = rightTop; i < dynamicArray.N; i++) {
			cout << dynamicArray.arr[i] << ((i < dynamicArray.N-1) ? ", " :"]");
		}
		cout << endl;
	}
};