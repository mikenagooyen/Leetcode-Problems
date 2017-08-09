/*
You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order and each of their nodes contain a single digit. 
Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
243 + 564 = 807
Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
*/

#include <stdlib.h>
#include <iostream>

#include "LinkedList.h"

LinkedList* addTwoNumbers(LinkedList* l1, LinkedList* l2) {
	/*
	While walking through both lists, add like paper math starting from left side to right, keeping in mind carry digit
	*/
	LinkedList* l3 = new LinkedList();
	Node* l1head = l1->getHead();
	Node* l2head = l2->getHead();
	int carry = 0;
	int l1Int, l2Int;

	while (l1head != NULL || l2head != NULL) {
		l1Int = l2Int = 0;
		if (l1head != NULL) {
			l1Int = l1head->val;
			l1head = l1head->next;
		}
		if (l2head != NULL) {
			l2Int = l2head->val;
			l2head = l2head->next;
		}
		int sum = carry + l1Int + l2Int;
		carry = sum / 10;
		l3->insert(sum % 10);
	}
	if (carry > 0) {
		l3->insert(carry);
	}

	return l3;
}

//int main() {
//	LinkedList* l1 = new LinkedList();
//	l1->insert(9);
//	l1->insert(9);
//	LinkedList* l2 = new LinkedList();
//	l2->insert(1);
//
//	LinkedList* l3 = addTwoNumbers(l1, l2);
//	l3->print();
//}