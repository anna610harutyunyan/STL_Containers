#include <iostream>
#include "List.h"


int main(int argc, char** argv)
{
	
	std::cout  << "List " << std::endl;
	List<int> list;
	list.InsertElement(15);
	list.InsertElement(20);
	list.InsertElement(2);
	list.PrintForward();
	std::cout << std::endl;
	list.PrintBackward();
	std::cout << std::endl;

	return 0;
}