#include <iostream>
#include "Stack.h"

int main(int argc, char** argv)
{
    Stack<int> stack;
    stack.Push(5);
    stack.Push(7);
    stack.Push(6);
    stack.Push(3);
    stack.Push(11);
    stack.PrintStack();
    std::cout << "Top member of the stack is " << stack.Top() << std::endl;
    stack.Pop();
    stack.Pop();
    stack.PrintStack();
    std::cout << "Top member of the updated stack is " << stack.Top() << std::endl;

    return 0;
}