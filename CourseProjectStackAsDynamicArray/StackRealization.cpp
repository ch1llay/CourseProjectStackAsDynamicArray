#include "StackHeader.h"

DynamicArray::DynamicArray(int n) {
	cout << "Constructor DynamicArray" << endl;
	N = n;
	arr = new int[N];
}
DynamicArray::~DynamicArray(){
	cout << "Destructor DynamicArray" << endl;
	delete[] arr;
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
		cout << "pushing in left stack " << n << endl;
		dynamicArray.arr[++leftTop] = n;
	}
	else {
		cout << "couldn't push " << n << " - stack is full" << endl;
	}
}
int LeftStack::pop() {
	if (checkIsNotEmpty()) {
		cout << "element " << dynamicArray.arr[leftTop] << " was retrieved" << endl;
		return dynamicArray.arr[leftTop--];
	}
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
	cout << "pushing in right stack " << n << endl;
	if (checkIsNotFull())
		dynamicArray.arr[--rightTop] = n;
	else
		cout << "couldn't push " << n << " - stack is full" << endl;
}
int RightStack::pop()  {
	if (checkIsNotEmpty()) {
		cout << "element " << dynamicArray.arr[rightTop] << " was retrieved" << endl;
		return dynamicArray.arr[rightTop++];
	}
}
void RightStack::show() {
	cout << "Right stack" << " [";
	for (int i = rightTop; i < dynamicArray.N; i++) {
		cout << dynamicArray.arr[i] << ((i < dynamicArray.N - 1) ? ", " : "]");
	}
	cout << endl;
}