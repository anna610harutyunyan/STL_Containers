#include <iostream>
#include "List.h"

template class List<int>;
template class List<char>;
template class List<double>;
template <typename T>

List<T>::List()
{
	head = nullptr;
	tail = nullptr;
}
template <typename T>
List<T>::~List()
{
	//std::cout << "Call destructor" << std::endl;
}
template <typename T>
void List<T>::InsertElement(const T& data)
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
	}
}
template <typename T>
void List<T>::PrintForward()
{
	Node<T>* traverser = head;
	while (traverser != nullptr)
	{
		std::cout << traverser->data << ' ';
		traverser = traverser->next;
	}
}
template <typename T>
void List<T>::PrintBackward()
{
	Node<T>* traverser = tail;
	while (traverser != nullptr)
	{
		std::cout << traverser->data << ' ';
		traverser = traverser->previous;
	}
}

