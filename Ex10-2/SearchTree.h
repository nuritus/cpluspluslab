#pragma once
#include "Tree.h"
#include <iostream>
using namespace std;

template<class T>
class SearchTree : public Tree<T>
{

public:
	void add(T key) override;
	bool  search(T key) override;
	void remove(T key) override;

private:
	void add(typename Tree<T>::Node* current, T key);
	bool  search(typename Tree<T>::Node* current, T key);
};

template <class T>
void SearchTree<T>::add(T key)
{
	if (Tree<T>::isEmpty())
		Tree<T>::root = new typename Tree<T>::Node(key);
	else
		add(Tree<T>::root, key);
}



template <class T>
void SearchTree<T>::add(typename Tree<T>::Node* current, T key)
{
	if (key < current->key)
		if (current->left)
			add(current->left, key);
		else
			current->left = new typename Tree<T>::Node(key);
	else
		if (current->right)
			add(current->right, key);
		else
			current->right = new typename Tree<T>::Node(key);

}
template<class T>
bool SearchTree<T>::search(T key)
{
	return search(Tree<T>::root, key);
	return false;
}

template <class T>
bool SearchTree<T>::search(typename Tree<T>::Node* current, T key)
{
	if (!current)
		return false;	// not found
	if (current->key == key)
		return true;
	if (key < current->key)
		return search(current->left, key);
	else
		return search(current->right, key);
}
template<class T>
void SearchTree<T>::remove(T key)
{
}