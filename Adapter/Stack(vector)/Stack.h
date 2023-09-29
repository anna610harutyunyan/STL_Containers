#pragma once
#include "Vector.h"

template <typename T>
class Stack : private Vector<T>
{
public:
    using Vector<T>::Vector;
    Stack();
    ~Stack();

public:
    void Push(T value);
    void Pop();
    const T& Top() const;
    void PrintStack();
};