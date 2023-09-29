#include <iostream>
#include "ForwardList.h"

template class ForwardList<int>;
template class ForwardList<char>;
template class ForwardList<double>;

template <typename T>
ForwardList<T>::ForwardList()
{
	head = nullptr;
}

template <typename T>

ForwardList<T>:: ~ForwardList()
{
 //std::cout << "Call destructor" << std::endl;

}
template <typename T>
void ForwardList<T>::insertElement(const T& value)
{
	Node<T>* newNode = new Node<T>(value);
	newNode->next = head;
	head = newNode;
	//std::cout << "Inserted " << std::endl;
}
template <typename T>

void ForwardList<T>::Print()
{
	Node<T>* traverser = head;
	while (traverser != nullptr)
	{
		std::cout << traverser->data << ' ';
		traverser = traverser->next;
	}
}