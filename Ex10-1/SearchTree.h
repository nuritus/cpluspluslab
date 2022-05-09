#pragma once
#include "Tree.h"


template <class T>
class SearchTree : public Tree<T>
{
public:
	// protocol for search trees
	void add(T value);
	bool  search(T value)
	{
		return search(Tree<T>::root, value);
	}
	void remove(T value);

private:
	void add(typename Tree<T>::Node* current, T val);
	bool  search(typename Tree<T>::Node* current, T val);
};




template <class T>
void SearchTree<T>::add(T val)
{
	// add value to binary search tree 
	if (!Tree<T>::root)
	{
		Tree<T>::root = new typename Tree<T>::Node(val);
		return;
	}
	add(Tree<T>::root, val);
}

template <class T>
bool SearchTree<T>::search(typename Tree<T>::Node* current, T val)
{
	// see if argument value occurs in tree
	if (!current)
		return false;	// not found
	if (current->value == val)
		return true;
	if (current->value < val)
		return search(current->right, val);
	else
		return search(current->left, val);
}

template <class T>
void SearchTree<T>::add(typename Tree<T>::Node* current, T val)
{
	if (current->value <= val)
		// add to right subtree
		if (!current->right)
		{
			current->right = new typename Tree<T>::Node(val);
			return;
		}
		else add(current->right, val);
	else
		// add to left subtree
		if (!current->left)
		{
			current->left = new typename Tree<T>::Node(val);
			return;
		}
		else add(current->left, val);
}

template <class T>
void SearchTree<T>::remove(T val)
{
	//HOME WORK!
}
