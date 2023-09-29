#pragma once
#include <iostream>

template <typename T>
struct Node
{
    T data;
    Node* next;
    Node* previous;
    Node()
    {
        data = 0;
        next = nullptr;
        previous = nullptr;
    }
    Node(T value) : data(value), next(nullptr), previous(nullptr) {};
    ~Node() {}
};

template <typename T>
class List : public Node<T>
{
    Node<T>* head;
    Node<T>* tail;
    Node<T>* firstElement;
    Node<T>* lastElement;

public:
    List()
    {
        head = nullptr;
        tail = nullptr;
        std::cout << "Call List constructor" << std::endl;
    }
    ~List()
    {
        std::cout << "Call List destructor" << std::endl;
    }

public:
    void InsertElement(const T& data)
    {
        Node<T>* newNode = new Node<T>(data);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->previous = tail;
            tail = newNode;
            lastElement = newNode;
            firstElement = head;
        }
    }
    void removeElement()
    {
        if (head == nullptr && tail == nullptr)
        {
            std::cout << "List is empty" << std::endl;
        }
        else
        {
            Node<T>* temp = head;
            head = head->next;
            if (head)
            {
                head->previous = nullptr;
            }

            delete temp;
            firstElement = head;
        }
    }
    void PrintForward()
    {
        Node<T>* traverser = head;
        while (traverser != nullptr)
        {
            std::cout << traverser->data << ' ';
            traverser = traverser->next;
        }
    }
    void PrintBackward()
    {
        Node<T>* traverser = tail;
        while (traverser != nullptr)
        {
            std::cout << traverser->data << ' ';
            traverser = traverser->previous;
        }
    }
    const T& Front()
    {
        return firstElement->data;
    }
    const T& Back()
    {
        return lastElement->data;
    }
};