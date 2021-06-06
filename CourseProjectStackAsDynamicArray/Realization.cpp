#include "StackHeader.h"

DynamicArray::DynamicArray(int n) {
	cout << "Constructor DynamicArray" << endl;
	N = n;
	arr = new int[N];
}
DynamicArray::~DynamicArray(){
	cout << "Destructor DynamicArray" << endl;
}

Stack::Stack() {
	cout << "Constructor Stack" << endl;
}
Stack::~Stack()
{
	cout << "Destructor Stack" << endl;
}
bool Stack::checkIsNotFull() {
	return rightTop - leftTop > 1;
}

LeftStack::LeftStack() {
	leftTop = -1;
	cout << "Constructor LeftStack" << endl;
}
LeftStack::~LeftStack()
{
	cout << "Destructor LeftStack" << endl;
}
bool LeftStack::checkIsNotEmpty() {
	return leftTop > -1;
}
void LeftStack::push(int n) {
	if (checkIsNotFull()) {
		dynamicArray.arr[++leftTop] = n;
	}
	else {
		cout << "stack is full";
	}
}
int LeftStack::pop() {
	if (checkIsNotEmpty())
		return dynamicArray.arr[--leftTop];
	else
		throw;
}
void LeftStack::show() {
	cout << "Left stack" << " [";
	for (int i = leftTop; i > -1; i--) {
		cout << dynamicArray.arr[i] << ((i > 0) ? ", " : "]");
	}
	cout << endl;
}

RightStack::RightStack() {
	rightTop = dynamicArray.N;
	cout << "Constructor RightStack" << endl;
}
RightStack::~RightStack()
{
	cout << "Destructor RightStack" << endl;
}
bool RightStack::checkIsNotEmpty() {
	return rightTop < dynamicArray.N;
}
void RightStack::push(int n) {
	if (checkIsNotFull())
		dynamicArray.arr[--rightTop] = n;
	else
		cout << "stack is full";
}
int RightStack::pop()  {
	if (checkIsNotEmpty())
		return dynamicArray.arr[--rightTop];
	throw std::out_of_range("Stack is empty");
}
void RightStack::show() {
	cout << "Right stack" << " [";
	for (int i = rightTop; i < dynamicArray.N; i++) {
		cout << dynamicArray.arr[i] << ((i < dynamicArray.N - 1) ? ", " : "]");
	}
	cout << endl;
}