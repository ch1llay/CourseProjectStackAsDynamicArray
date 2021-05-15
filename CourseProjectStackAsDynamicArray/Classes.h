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
	void virtual push(int n);
	int virtual pop();
	void virtual show();
	void virtual notFull();
	void virtual notEmpty();
};
