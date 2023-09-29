#include <iostream>
#include "BSTree.h"

int main(int argc, char** argv)
{
	BSTree tree;
	tree.insert(5);
	tree.insert(13);
	tree.insert(1);
	tree.insert(3);
	tree.insert(8);
	tree.insert(9);
	tree.insert(14);
	tree.insert(7);
	tree.insert(15);
	tree.insert(55);
	tree.insert(35);

	std::cout << "InOrder:: ";
	tree.InOrder();
	std::cout << std::endl;
	std::cout << "PreOrder:: ";
	tree.PreOrder();
	std::cout << std::endl;
	std::cout << "PostOrder:: ";
	tree.PostOrder();
	std::cout << std::endl;
	std::cout << "LevelOrder:: ";
	tree.LevelOrder();

	return 0;
}