#include "StackHeader.h"

DynamicArray Stack::dynamicArray(10); // ��������� ������ ��� ������
int main() {
	// ���������� ������
	LeftStack leftStack;
	RightStack rightStack;
	// ���������� ��������� � ����� ����
	leftStack.push(1);
	leftStack.push(2);
	leftStack.push(3);
	leftStack.push(4);
	leftStack.push(5);
	leftStack.pop(); // ���������� �������� �� ������ �����
	leftStack.show(); // ����� ����������� ������ �����
	// ���������� ��������� � ������ ����
	rightStack.push(-1);
	rightStack.push(-2);
	rightStack.push(-3);
	rightStack.push(-4);
	rightStack.push(-5);
	rightStack.show(); // ����� ����������� ������� �����
	rightStack.pop(); // ���������� �������� �� ������� �����
	rightStack.show(); // ����� ����������� ������� �����
	leftStack.show(); // ����� ����������� ������ �����
}