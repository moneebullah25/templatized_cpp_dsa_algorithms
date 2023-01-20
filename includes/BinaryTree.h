#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "QueueUV.h"
#include "QueueUV.cpp"
#include "StackUV.h"
#include "StackUV.cpp"

struct tree_node
{
public:
	int data;
	tree_node* l_child;
	tree_node* r_child;
	int lst_height;
	int rst_height;
public:
	tree_node(int data);
};

namespace tree
{
	QueueUV<tree_node>* q = new QueueUV<tree_node>();
	StackUV < tree_node>* s = new StackUV<tree_node>();
	int findMin(tree_node* root);
	void insert(tree_node*& root, int data);
	void remove(tree_node*& root, tree_node*& prev, int data);
	bool search(tree_node* root, int data);
	void bfs(tree_node* root, QueueUV<tree_node>*& q);
	void dfs(tree_node* root, StackUV<tree_node>*& s);
	void deleteTree(tree_node*& root);
	unsigned int getSize(tree_node* root);
	void in_order_traversal(tree_node* root, QueueUV<tree_node>*& q);
	void pre_order_traversal(tree_node* root, QueueUV<tree_node>*& q);
	void post_order_traversal(tree_node* root, QueueUV<tree_node>*& q);
}