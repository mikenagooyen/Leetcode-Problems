/*
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
*/
#include <stdlib.h>
#include <iostream>

#include "LinkedList.h"

class Solution {
public:
	LinkedList* mergeTwoLists(LinkedList* l1, LinkedList* l2) {
		//iterate through both lists, compare values, merge to new list
		LinkedList* l3 = new LinkedList();
		Node* l1head = l1->getHead();
		Node* l2head = l2->getHead();
		while (l1head != NULL && l2head != NULL) {
			if (l1head->val > l2head->val) {
				l3->insert(l2head->val);
				l2head = l2head->next;
			}
			else if (l1head->val < l2head->val) {
				l3->insert(l1head->val);
				l1head = l1head->next;
			}
		}
		//add in the last element, no need for value check, since we haven't moved onto next node
		//check for current node instead
		if (l1head != NULL) {
			l3->insert(l1head->val);
		}
		else if (l2head != NULL) {
			l3->insert(l2head->val);
		}
		return l3;
	}
};

//int main() {
//	LinkedList* l1 = new LinkedList();
//	l1->insert(1);
//	l1->insert(3);
//	l1->insert(7);
//	LinkedList* l2 = new LinkedList();
//	l2->insert(2);
//	l2->insert(6);
//	l2->insert(9);
//	Solution s;
//
//	LinkedList* l3 = s.mergeTwoLists(l1, l2);
//	l3->print();
//	
//	return 0;
//}