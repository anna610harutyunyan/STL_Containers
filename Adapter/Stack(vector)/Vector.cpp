#include "Vector.h"

template <typename T>
Vector<T>::Vector() : m_size(0), capacity(10), ptr(new T[capacity]), topElement(nullptr)
{
    std::cout << "Call constructor for Vector " << std::endl;
}

template <typename T>
Vector<T>::Vector(int capacity) : m_size(0), capacity(capacity), ptr(new T[capacity]), topElement(nullptr)
{
    std::cout << "Call parameterized constructor " << std::endl;
}

template <typename T>
Vector<T>::Vector(const Vector& obj) : m_size(obj.m_size), capacity(obj.capacity), ptr(new T[capacity]), topElement(nullptr)
{
    for (int i = 0; i < m_size; ++i)
    {
        ptr[i] = obj.ptr[i];
    }
    std::cout << "Call Copy" << std::endl;
}

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector& other)
{
    if (this == &other)
    {
        return *this;
    }
    this->capacity = other.capacity;
    this->m_size = other.m_size;
    delete[] this->ptr;
    this->ptr = new T[capacity];
    for (int i = 0; i < m_size; ++i)
    {
        ptr[i] = other.ptr[i];
    }
    std::cout << "Call operator=" << std::endl;
    return *this;
}

template <typename T>
Vector<T>::Vector(Vector&& obj) : m_size(obj.m_size), capacity(obj.capacity), ptr(obj.ptr), topElement(nullptr)
{
    obj.m_size = 0;
    obj.ptr = nullptr;
    std::cout << "Call move constructor " << std::endl;
}

template <typename T>
Vector<T>& Vector<T>::operator=(Vector&& obj)
{
    if (this != &obj)
    {
        delete[] this->ptr;
        this->capacity = obj.capacity;
        this->m_size = obj.m_size;
        this->ptr = obj.ptr;
        obj.m_size = 0;
        obj.capacity = 0;
        obj.ptr = nullptr;
    }
    std::cout << "Call move operator assignment " << std::endl;
    return *this;
}

template <typename T>
T& Vector<T>::operator[](int index)
{
    if (index < 0 || index >= m_size)
    {
        throw std::out_of_range("Check the index");
    }
    return ptr[index];
}

template <typename T>
Vector<T>::~Vector()
{
    std::cout << "Call destructor for Vector " << std::endl;
    delete[] ptr;
    ptr = nullptr;
}

template <typename T>
void Vector<T>::Push_back(T newValue)
{
    if (m_size == capacity)
    {
        capacity *= 2;
        T* newPtr = new T[capacity];

        for (int i = 0; i < m_size; ++i)
        {
            newPtr[i] = ptr[i];
        }

        delete[] ptr;
        ptr = newPtr;
    }

    ptr[m_size] = newValue;
    topElement = &ptr[m_size];
    m_size++;
    std::cout << "Call Push_back" << std::endl;
}

template <typename T>
void Vector<T>::Pop_back()
{
    if (m_size > 0)
    {
        m_size--;
        topElement = &ptr[m_size - 1];
        std::cout << "Call Pop_back" << std::endl;
    }
}

template <typename T>
const T& Vector<T>::Top() const
{
    return *topElement;
}

template <typename T>
void Vector<T>::Clean()
{
    for (int i = (m_size - 1); i >= 0; i--)
    {
        Pop_back();
    }
    std::cout << "Vector is empty " << std::endl;
}

template <typename T>
void Vector<T>::Print() const
{
    for (int i = 0; i < m_size; ++i)
    {
        std::cout << ptr[i] << ' ';
    }
    std::cout << std::endl;
}

template <typename T>
void Vector<T>::Erase(int index)
{
    if (index < 0 || index >= m_size)
    {
        return;
    }
    for (int i = index; i < (m_size - 1); ++i)
    {
        ptr[i] = ptr[i + 1];
    }
    m_size--;
}

template class Vector<int>;