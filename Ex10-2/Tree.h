#pragma once
#include <iostream>
using namespace std;

template <class T>
class Tree
{
protected:
	class Node
	{
	public:
		T key;
		Node* left;
		Node* right;
		Node(T val, Node* l = nullptr, Node* r = nullptr)
			: key(val), left(l), right(r) {}
	};

	//data member of tree
	Node* root;
private:
	void  clear(Node* current);
	void  preOrder(Node* current);
	void  inOrder(Node* current);
	void  postOrder(Node* current);
	virtual void process(T& k);
	Node* copyTree(Node* current)
	{
		if (!current)

			return nullptr;
		Node* temp = new Node(current->key);
		temp->left = copyTree(current->left);
		temp->right = copyTree(current->right);
		return temp;


	}
public:
	Tree();
	Tree(const Tree<T>& T1);
	~Tree();
	bool isEmpty() const;
	void clear() { clear(root); root = NULL; }
	void preOrder() { preOrder(root); }
	void inOrder() { inOrder(root); }
	void postOrder() { postOrder(root); }

	virtual void add(T val) = 0;
	virtual bool search(T val) = 0;
	virtual void remove(T val) = 0;

};



//----------------------------------------------------------
//  class Tree implementation
//----------------------------------------------------------
template<class T>
inline Tree<T>::Tree() :root(nullptr)
{}

template<class T>
inline Tree<T>::Tree(const Tree<T>& T1)
{
	if (T1.isEmpty())
		root = nullptr;
	else
		root = copyTree(T1.root);
}

template <class T>
Tree<T>::~Tree()
{
	if (root != NULL)
		clear(root);
}
template <class T>
bool Tree<T>::isEmpty() const
{
	return  root == NULL;
}

template <class T>
void Tree<T>::clear(Node* current)
{
	if (current)
	{
		clear(current->left);
		clear(current->right);
		delete current;
	}
}

template <class T>
void Tree<T>::preOrder(Node* current)
{
	if (current)
	{
		process(current->key);
		preOrder(current->left);
		preOrder(current->right);
	}
}

template <class T>
void Tree<T>::inOrder(Node* current)
{
	if (current)
	{
		inOrder(current->left);
		process(current->key);
		inOrder(current->right);
	}
}

template <class T>
void Tree<T>::postOrder(Node* current)
{
	if (current)
	{
		postOrder(current->left);
		postOrder(current->right);
		process(current->key);
	}
}

template<class T>
inline void Tree<T>::process(T& k)
{
	cout << k << ' ';
}