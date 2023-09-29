#pragma once
#include "List.h"

template <typename T>
class Queue : private List<T>
{
    int size;

public:
    using List<T>::List;
    Queue() : List<T>()
    {
        std::cout << "Call Queue constructor" << std::endl;
    }
    ~Queue()
    {
        std::cout << "Call Queue destructor" << std::endl;
    }

public:
    void Push(T value)
    {
        List<T>::InsertElement(value);
        size++;
    }

    void Pop()
    {
        if (size == 0)
        {
            std::cout << "Queue is empty" << std::endl;
        }
        else
        {
            List<T>::removeElement();
            size--;
        }
    }
    void printQue()
    {
        List<T>::PrintForward();
    }
    const T& Front()
    {
        return List<T>::Front();
    }
    const T& Back()
    {
        return List<T>::Back();
    }
    int get_size() const
    {
        return size;
    }
};