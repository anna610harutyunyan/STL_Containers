#ifndef FORWARDLIST_H
#define FORWARDLIST_H
template <typename T>
struct Node
{
	T data;
	Node* next;
	Node()
	{
		data = 0;
		next = nullptr;
	}
	Node(T value) :data(value), next(nullptr) {};
	~Node()
	{
	}
};
template <typename T>
class ForwardList
{
	Node <T>* head;
public:
	ForwardList();
	
	~ForwardList();
	
public:
	void insertElement(const T& value);
	void Print();

};




#endif //FORWARDLIST