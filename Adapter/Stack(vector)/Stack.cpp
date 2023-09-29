#include "Stack.h"

template <typename T>
Stack<T>::Stack() : Vector<T>()
{
    std::cout << "Call constructor for Stack " << std::endl;
}

template <typename T>
Stack<T>::~Stack()
{
    std::cout << "Call destructor for Stack " << std::endl;
}

template <typename T>
void Stack<T>::Push(T value)
{
    Vector<T>::Push_back(value);
}

template <typename T>
void Stack<T>::Pop()
{
    Vector<T>::Pop_back();
}

template <typename T>
const T& Stack<T>::Top() const
{
    return Vector<T>::Top();
}

template <typename T>
void Stack<T>::PrintStack()
{
    Vector<T>::Print();
}

template class Stack<int>;