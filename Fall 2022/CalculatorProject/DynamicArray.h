#ifndef DYNAMICARRAY_H_INCLUDED
#define DYNAMICARRAY_H_INCLUDED

// analyze the running time of this data structure
// we express the running time in terms of input size..
// what is the input size?? -- n -- number of elements in the collection
// asymptotic analysis -- we analyze when n is very large..

template <class T>
class Array {
public:
    Array(int c);

    Array<T> & operator = (const Array<T> & rhs);  // lhs = rhs; lhs.operator = (rhs); assignment operator
    Array(const Array<T> & rhs);      // Array<T> lhs(rhs); (or) Array<T> lhs = rhs; copy constructor
    ~Array() { delete [] els; }

    T & operator [] (int index);                // O(1) steps
    void changeSize(int newSize);               // O(n) steps
    int length() const { return capacity; }     // O(1) steps
    int error() const { return errCode; }       // O(1) steps
private:
    T * els;
    int capacity;
    int errCode;
    T dud;
    void deepCopy(const Array<T> & rhs);
};

template <class T>
Array<T>::Array(int c) {
    if (c <= 0) { errCode = 1; capacity = 1; }
    else { errCode = 0; capacity = c; }
    els = new T[capacity];
}

template <class T>
Array<T> & Array<T>::operator = (const Array<T> & rhs) {
    if (this == &rhs) return (*this);   // this will be same for any class
    delete [] els;                      // clear up memory -- differ depending on class
    deepCopy(rhs);                      // this will be same for any class
    return *this;                       // this will be same for any class
}

template <class T>
Array<T>::Array(const Array<T> & rhs) {
    deepCopy(rhs);                      // will be the same for any class
}

template <class T>
void Array<T>::deepCopy(const Array<T> & rhs) { // depends on the class
    capacity = rhs.capacity;
    errCode = rhs.errCode;
    els = new T[capacity];
    for (int i = 0; i < capacity; i++) {
        els[i] = rhs.els[i];
    }
}

template <class T>
T & Array<T>::operator [] (int index) {
    if (index < 0 || index >= capacity) {
        errCode |= 2; // errCode = errCode | 2;
        return dud;
    }
    return els[index];
}

template <class T>
void Array<T>::changeSize(int newSize) {
    // increase size of the array
    if (newSize <= 0) {
        errCode |= 4; return;
    }
    int limit = (newSize > capacity ? capacity : newSize); // conditional operator
    T * temp = new T[newSize];
    for (int i = 0; i < limit; i++) {
        temp[i] = els[i];
    }
    delete [] els;
    els = temp;
    capacity = newSize;
}

#endif // DYNAMICARRAY_H_INCLUDED
