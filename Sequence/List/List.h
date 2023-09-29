#ifndef  LIST_H
#define LIST_H

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
	Node(T value) :data(value), next(nullptr), previous(nullptr) {};
	~Node() {};


};
template <typename T>
class List
{
	Node<T>* head;
	Node<T>* tail;
public:
	List();
	~List();
public:
	void InsertElement(const T& data);
	void PrintForward();
	void PrintBackward();



};

#endif  //LIST_H



