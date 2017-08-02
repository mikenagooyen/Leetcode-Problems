#pragma once
#include <stdlib.h>
#include <iostream>

struct Node {
	int val;
	Node* next;
};

class LinkedList
{
private:
	Node* head;
public:
	LinkedList() : head(NULL) {}
	~LinkedList();
	void insert(int data);
	void print();
	Node* getHead();
};

