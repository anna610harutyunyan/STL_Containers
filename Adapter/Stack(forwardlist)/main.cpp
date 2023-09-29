#include "Stack.h"

int main(int argc, char** argv) {
    Stack<int> stack;
    stack.Push(5);
    stack.Push(3);
    stack.Push(7);
    stack.Push(11);
    stack.Push(9);

    std::cout << "Stack elements: ";
    stack.printStack();
    std::cout << std::endl;

    try {
        std::cout << "The top element is " << stack.Top() << std::endl;
        stack.Pop();
        stack.Pop();

        std::cout << "Stack elements after popping: ";
        stack.printStack();
        std::cout << std::endl;

        std::cout << "The top element of the updated stack is " << stack.Top() << std::endl;
    }
    catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}