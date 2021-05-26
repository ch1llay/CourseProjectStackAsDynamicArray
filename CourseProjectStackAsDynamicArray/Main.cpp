#include "Classes.h"

DynamicArray Stack::d(10);
int main() {
	LeftStack leftStack;
	RightStack rightStack;
	try {
		leftStack.push(1);
		leftStack.show();
		rightStack.push(-1);
		rightStack.show();

		cout << "Stack::leftTop " << Stack::leftTop << "Stack::rightTop " << Stack::rightTop << endl;
		for (int i = 0; i < Stack::d.N; i++)
		{
			cout << Stack::d.arr[i] << " ";
		}
	}
	catch (exception ex) {
		cout << ex.what() << endl;
	}
}