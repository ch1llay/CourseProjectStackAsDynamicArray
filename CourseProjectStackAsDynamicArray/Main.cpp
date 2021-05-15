#include "Classes.h"

DynamicArray Stack::d(10);
int main() {
	LeftStack leftStack;
	RightStack rightStack;
	try {
		rightStack.push(-1);
		leftStack.push(1);
		leftStack.show();
	}
	catch (exception ex) {
		cout << ex.what() << endl;
	}
}