#include "LinkedList.h"

LinkedList::~LinkedList() {
	Node* curr = head;
	while (curr->next != NULL) {
		Node* temp = curr->next;
		delete curr;
		curr = temp;
	}
}

void LinkedList::insert(int data) {
	Node *temp = new Node;
	temp->val = data;
	temp->next = NULL;

	if (head == NULL) {
		head = temp;
	}
	else {
		Node* curr = head;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = temp;
	}
}

void LinkedList::print() {
	Node* curr = head;
	while (curr != NULL) {
		std::cout << curr->val;
		curr = curr->next;
	}
}

Node* LinkedList::getHead() {
	return head;
}