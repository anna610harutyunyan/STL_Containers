#include <iostream>
#include "ForwardList.h"

int main(int argc, char** argv)
{
    ForwardList<int> list;
    list.pushFront(10);
    list.pushFront(15);
    list.pushFront(5);
    list.pushFront(13);
    list.pushFront(12);
    list.pushFront(1);
    list.pushFront(107);
    list.pushFront(17);
    list.pushFront(15);
    list.pushFront(110);


    std::cout << "Original List: ";
    list.reverse();
    list.reverse(); //  back to the original list
    list.popFront();
    list.pushFront(20);
    list.pushFront(25);

    std::cout << "Reversed List: ";
    list.reverse();

    std::cout << "Finding 2nd element from the end: " << list.findNthFromEnd(2) << std::endl;

    if (list.isCycle())
    {
        std::cout << "The list has a cycle." << std::endl;
    }
    else
    {
        std::cout << "The list does not have a cycle." << std::endl;
    }

    list.erase(); 
    list.popFront(); 

    if (list.isCycle())
    {
        std::cout << "The list has a cycle." << std::endl;
    }
    else
    {
        std::cout << "The list does not have a cycle." << std::endl;
    }

    return 0;
}