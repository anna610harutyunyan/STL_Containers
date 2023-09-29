#include <iostream>
#include "Queue.h"

int main(int argc, char** argv)
{
    Queue<int> queue;
    queue.Push(5);
    queue.Push(6);
    queue.Push(78);
    queue.Push(9);
    queue.Push(15);
    queue.printQue();
    std::cout << std::endl;
    std::cout << "First element is " << queue.Front() << std::endl;
    std::cout << "Last element is " << queue.Back() << std::endl;
    std::cout << "The size of the queue is " << queue.get_size() << std::endl;
    queue.Pop();
    queue.Pop();
    queue.printQue();
    std::cout << std::endl;
    std::cout << "The first element of updated queue is " << queue.Front() << std::endl;
    std::cout << "The last element of updated queue is " << queue.Back() << std::endl;
    std::cout << "The size of the updated queue is " << queue.get_size() << std::endl;

    return 0;
}