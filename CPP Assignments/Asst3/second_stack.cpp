#include<iostream>
using namespace std;
#define SIZE 10
template<class T>
class Stack
{
	int top;
	T arr[SIZE];
public:
	Stack()
	{
		top = -1;
	}
	void push(T element)
	{
		if (top == (SIZE - 1))
			cout << "Stack overflow\n";
		arr[++top] = element;
	}
	T pop()
	{
		if (top == -1)
		{
			cout << "Stack underflow\n";
		}
		return arr[top--];
	}
	int findsize()
	{
		return top + 1;
	}
};

int main()
{
	Stack<int> s;
	s.push(1);
	s.push(4);
	s.push(16);
    s.push(22);
	cout << "Size of the int stack is " << s.findsize() << endl;
	cout << "Top of the int stack is " << s.pop() << endl;

    Stack<float> s1;
	s1.push(1.2);
	s1.push(4.4);
	s1.push(16.5);
	cout << "Size of the float stack is " << s1.findsize() << endl;
	cout << "Top of the float stack is " << s1.pop() << endl;

    Stack<char*> s2;
	s2.push("A");
	s2.push("B");
	cout << "Size of the char* stack is " << s2.findsize() << endl;
	cout << "Top of the char* stack is " << s2.pop() << endl;

    /*Stack<int> s;
	s.push(1);
	s.push(4);
	s.push(16);
	cout << "Size of the stack is " << s.findsize() << endl;
	cout << "Top of the stack is " << s.pop() << endl;*/
	return 0;
}
