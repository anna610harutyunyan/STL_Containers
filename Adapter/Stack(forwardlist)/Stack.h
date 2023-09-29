#ifndef STACK_H
#define STACK_H

#include <iostream>

template <typename T>
struct Node {
    T data;
    Node* next;
    Node() {
        data = 0;
        next = nullptr;
    }
    Node(T value) : data(value), next(nullptr) {};
    ~Node() {
        delete next;
    }
};

template <typename T>
class SingleLinkedList {
    Node<T>* head;
    Node<T>* topElement;

public:
    SingleLinkedList() {
        head = nullptr;
    }
    ~SingleLinkedList() {
        delete head;
    }
public:
    void insertElement(const T& value) {
        Node<T>* newNode = new Node<T>(value);
        newNode->next = head;
        head = newNode;
        topElement = newNode;
        std::cout << "Inserted " << std::endl;
    }
    void removeElement() {
        if (head == nullptr) {
            std::cout << "There is no element " << std::endl;
        }
        else if (head->next == nullptr) {
            delete head;
            head = nullptr;
            std::cout << "The last element is removed " << std::endl;
        }
        else {
            Node<T>* temp = head;
            while (temp->next->next != nullptr) {
                temp = temp->next;
            }

            Node<T>* last = temp->next;
            temp->next = nullptr;
            delete last;
            topElement = temp;
            std::cout << "The last element is removed " << std::endl;
        }
    }
    const T& Top() {
        if (head != nullptr) {
            return topElement->data;
        }
        else {
            throw std::runtime_error("Stack is empty, there is no top member!!");
        }
    }
    void Print() {
        Node<T>* reversal = head;
        while (reversal != nullptr) {
            std::cout << reversal->data << ' ';
            reversal = reversal->next;
        }
    }
};

template <typename T>
class Stack : private SingleLinkedList<T> {
public:
    using SingleLinkedList<T>::SingleLinkedList;
    Stack() : SingleLinkedList<T>() {}
    ~Stack() {}
public:
    void Push(T value) {
        SingleLinkedList<T>::insertElement(value);
    }
    void Pop() {
        SingleLinkedList<T>::removeElement();
    }
    const T& Top() {
        return SingleLinkedList<T>::Top();
    }
    void printStack() {
        SingleLinkedList<T>::Print();
    }
};

#endif // STACK_H