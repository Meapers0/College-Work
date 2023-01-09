#ifndef DOUBLYLINKEDLIST_H_INCLUDED
#define DOUBLYLINKEDLIST_H_INCLUDED

template <class T>
struct Node {
	T obj;
	Node<T> * next;
	Node<T> * prev;
};

template <class T>
class DoublyLinkedList {
public:
    DoublyLinkedList() { start = tail = curr = nullptr; }
    DoublyLinkedList(const DoublyLinkedList<T> & rhs) { deepCopy(rhs); }
    DoublyLinkedList<T> & operator = (const DoublyLinkedList<T> & rhs);
    ~DoublyLinkedList() { makeEmpty(); }

    void insert(const T & el);      // O(1) steps
    bool find(const T & el);        // O(n) steps
    bool retrieve(T & el);          // O(n) steps
    bool replace(const T & el);     // O(1) steps
    bool remove(T & el);            // O(n) steps
    bool first(T & el);             // O(1) steps
    bool getNext(T & el);           // O(1) steps
    bool last(T & el);             // O(1) steps
    bool getPrev(T & el);           // O(1) steps

    bool isEmpty() const { return (start == nullptr); }
    void makeEmpty();
private:
    Node<T> * start;
    Node<T> * tail;
    Node<T> * curr;
    void deepCopy(const DoublyLinkedList<T> & rhs);
};

template <class T>
DoublyLinkedList<T> & DoublyLinkedList<T>::operator = (const DoublyLinkedList<T> & rhs) {
    if (this == &rhs) return (*this);
    makeEmpty();
    deepCopy(rhs);
    return (*this);
}

template <class T>
void DoublyLinkedList<T>::makeEmpty() {
	curr = start;
	while (curr != nullptr) {
		Node<T> * n = curr;
		curr = curr->next;
		delete n;
	}
	start = tail = curr = nullptr;
}

template <class T>
void DoublyLinkedList<T>::deepCopy(const DoublyLinkedList<T> & rhs) {
	if (rhs.start == nullptr) { start = tail = curr = nullptr; return; }
	Node<T> * currRHS = rhs.start;
	Node<T> * prevNode = new Node<T>;
	prevNode->obj = currRHS->obj;
	prevNode->prev = nullptr;
	start = prevNode;
	if (rhs.curr == currRHS) curr = prevNode;
	currRHS = currRHS->next;
	while(currRHS != nullptr) {
		Node<T>* currCopy = new Node<T>;
		currCopy->obj = currRHS->obj;
		currCopy->prev = prevNode;
		prevNode->next = currCopy;
		if (rhs.curr == currRHS) curr = currCopy;
		currRHS = currRHS->next;
		prevNode = currCopy;
	}
	prevNode->next = nullptr;
	tail = prevNode;
	if (rhs.curr == nullptr) curr = nullptr;
}

template <class T>
void DoublyLinkedList<T>::insert(const T & el) {
	Node<T> * newNode = new Node<T>;
	newNode->obj = el;
	newNode->next = start;
	newNode->prev = NULL;
	if(start == NULL) {
		start = newNode;
		tail = newNode;
	} else {
		start -> prev = newNode;
		start = newNode;
	}
	curr = NULL;
}

template <class T>
bool DoublyLinkedList<T>::find(const T & el) {
    T item;
    if (!first(item)) return false;
    if (item == el) return true;
    while(getNext(item)) {
        if (item == el) return true;
    }
    curr = nullptr;
    return false;
}

template <class T>
bool DoublyLinkedList<T>::retrieve(T & el) {
    if (find(el)) { el = curr->obj; return true; }
    return false;
}

template <class T>
bool DoublyLinkedList<T>::replace(const T & el) {
    if (curr == nullptr) return false;
    curr->obj = el;
    return true;
}

template <class T>
bool DoublyLinkedList<T>::remove(T & el) {
	bool ans = retrieve(el);
	if (ans == false) {
		curr = start;
		return false;
	}
	if (start == tail) {
		start = tail = curr = NULL;
	} else if (curr == start) {
		start = curr->next;
		start->prev = NULL;
		Node<T>*temp = curr;
		delete temp;
		curr = start;
	} else if (curr == tail) {
		tail = curr->prev;
		tail->next = NULL;
		Node<T>*temp = curr;
		delete temp;
		curr = start;
	} else {
		curr->next->prev = curr->prev;
		curr->prev->next = curr->next;
		Node<T>*temp = curr;
		delete temp;
		curr = start;
	}
}

template <class T>
bool DoublyLinkedList<T>::first(T & el) {
    if (start == nullptr) return false;
    curr = start;
    el = curr->obj;
    return true;
}

template <class T>
bool DoublyLinkedList<T>::getNext(T & el) {
    if (curr == nullptr) return false;
    if (curr->next == nullptr) return false;
    curr = curr->next;
    el = curr->obj;
    return true;
}

template <class T>
bool DoublyLinkedList<T>::last(T & el) {
    if(tail == NULL)
			return false;
		el = tail -> obj;
		curr = tail;
		return true;
}

template <class T>
bool DoublyLinkedList<T>::getPrev(T & el) {
    if(curr == NULL) return false;
		curr = curr->prev;
		if(curr == NULL) return false;
		el = curr ->obj;
		return true;
}


#endif // DOUBLYLINKEDLIST_H_INCLUDED
