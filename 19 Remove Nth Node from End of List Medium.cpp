/**
Given a linked list, remove the nth node from the end of list and return its head.

For example,

Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.
Note:
Given n will always be valid.
Try to do this in one pass.
*/

#include <stdlib.h>
#include <iostream>

#include "LinkedList.h"

class Solution {
public:
	void removeNthFromEnd(LinkedList* lst, int n) {
		Node* head = lst->getHead();
		int i = 0;

		//first get list size
		Node* curr = head;
		int length = 0;

		while (curr != NULL) {
			length++;
			curr = curr->next;
		}
		curr = head; //reset walker node
		//iterate length - n times
		for (i = 0; i < length - n - 1; i++) {
			curr = curr->next;
		}
		//link the previous to target nodes next node
		Node* temp = curr->next;
		curr->next = curr->next->next;
		delete temp;
	}
};

//int main() {
//	LinkedList* lst = new LinkedList();
//	Solution s;
//	//init Linked List
//	lst->insert(1);
//	lst->insert(2);
//	lst->insert(3);
//	lst->insert(4);
//	lst->insert(5);
//	
//	s.removeNthFromEnd(lst, 3);
//
//	lst->print();
//
//	return 0;
//}