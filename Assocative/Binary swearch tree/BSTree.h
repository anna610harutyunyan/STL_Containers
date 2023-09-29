#ifdef BSTREE_H
#define BSTREE_H
#include <iostream>
#include <queue>

struct Node
{
	int data;
	Node* left = nullptr;
	Node* right = nullptr;
};

class BSTree
{
	Node* root = nullptr;
public:
	BSTree() = default;
	BSTree(int value)
	{
		root = new Node;
		root->data = value;
		root->left = nullptr;
		root->right = nullptr;
	}
	~BSTree() = default;
private:
	Node* insert(Node* temp, int val)
	{
		if (!temp)
		{
			temp = new Node;
			temp->data = val;
			temp->left = nullptr;
			temp->right = nullptr;
			return temp;
		}

		if (val > temp->data)
		{
			temp->right = insert(temp->right, val);
		}
		else if (val < temp->data)
		{
			temp->left = insert(temp->left, val);
		}

		return temp;
	}

	void InOrder(Node* temp)
	{
		if (!temp)
		{
			return;
		}
		InOrder(temp->left);
		std::cout << temp->data << ' ';
		InOrder(temp->right);
	}
	void PreOrder(Node* temp)
	{
		if (!temp)
		{
			return;
		}
		std::cout << temp->data << ' ';
		PreOrder(temp->left);
		PreOrder(temp->right);

	}
	void PostOrder(Node* temp)
	{
		if (!temp)
		{
			return;
		}
		PostOrder(temp->left);
		PostOrder(temp->right);
		std::cout << temp->data << ' ';


	}
	void LevelOrder(Node* root)
	{
		if (root == nullptr)
		{
			return;
		}
		std::queue<Node*> q;
		q.push(root);

		while (!q.empty())
		{
			Node* node = q.front();
			std::cout << node->data << ' ';
			q.pop();

			if (node->left != nullptr)
			{
				q.push(node->left);
			}
			if (node->right != nullptr)
			{
				q.push(node->right);
			}
		}
	}
public:
	void insert(int value)
	{
		root = insert(root, value);
	}
	void InOrder()
	{
		InOrder(root);
	}
	void PreOrder()
	{
		PreOrder(root);
	}

	void PostOrder()
	{
		PostOrder(root);

	}
	void LevelOrder()
	{
		LevelOrder(root);
	}
};

#endif // BSTREE_H
