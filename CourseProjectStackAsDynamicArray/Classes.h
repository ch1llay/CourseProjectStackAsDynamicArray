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
		delete arr;
	}
};
