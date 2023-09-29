#include <iostream>
#include "Vector.h"


int main(int argc, char** argv)
{
	MyVector::Vector <int> obj(5);
    obj.Push_back(1);
	obj.Push_back(10);
	obj.Print();
	

	return 0;
}