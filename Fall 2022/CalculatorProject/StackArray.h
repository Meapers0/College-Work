#ifndef STACKARRAY_H_INCLUDED
#define STACKARRAY_H_INCLUDED

#include "DynamicArray.h"

template <class T>
class Stack {
public:
	Stack() : els(2) { top = -1; }
	void push (const T & el);                       // O(1) steps
	bool pop (T & el);                              // O(1) steps
	bool peek (T & el);                             // O(1) steps
	bool isEmpty() const { return (top == -1); }    // O(1) steps
	void makeEmpty() { top = -1; }
private:
	Array<T> els;	// els.length() says how many slots in the array
	int top;		// els[top] is the top element; top = -1 means stack is empty
};

template <class T>
void Stack<T>::push (const T & el) {
	top++;
	if (top >= els.length()) {
		els.changeSize(2 * top);
	}
	els[top] = el;
}

template <class T>
bool Stack<T>::pop (T & el) {
	if (top == -1) return false;
	el = els[top];
	top--;
	return true;
}

template <class T>
bool Stack<T>::peek (T & el) {
	if (top == -1) return false;
	el = els[top];
	return true;
}

#endif // STACKARRAY_H_INCLUDED
