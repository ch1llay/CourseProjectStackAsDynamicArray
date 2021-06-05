#include "Classes.h"

DynamicArray Stack::dynamicArray(10);
int main() {
	LeftStack leftStack;
	RightStack rightStack;
	try {
		leftStack.push(1);
		leftStack.push(2);
		leftStack.push(3);
		leftStack.show();
		rightStack.push(-1);
		rightStack.push(-2);
		rightStack.show();
	}

	catch (exception ex) {
		cout << ex.what() << endl;
	}
}