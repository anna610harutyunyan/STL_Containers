#include <iostream>
#include "ForwardList.h"



int main(int argc, char** argv)
{
	
	std::cout  << "Forward list " << std::endl;
	ForwardList<int> flist;
	flist.insertElement(10);
	flist.insertElement(15);
	flist.Print();
	

	return 0;
}