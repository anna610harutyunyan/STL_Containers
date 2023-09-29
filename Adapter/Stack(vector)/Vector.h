#pragma once
#include <iostream>

template <typename T>
class Vector
{
    int m_size;
    int capacity;
    T* ptr = nullptr;
    T* topElement = nullptr;

public:
    Vector();
    Vector<T>(int capacity);
    Vector(const Vector& obj);
    Vector& operator=(const Vector& other);
    Vector(Vector&& obj);
    Vector& operator=(Vector&& obj);
    T& operator[](int index);
    ~Vector();

public:
    void Push_back(T newValue);
    void Pop_back();
    const T& Top() const;
    void Clean();
    void Print() const;
    void Erase(int index);
};