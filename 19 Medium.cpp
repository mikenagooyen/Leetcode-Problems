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

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL){}
};

class Solution {
private:
	ListNode* head;
public:
	void removeNthFromEnd(int n) {
		ListNode* tmp = head;
		int i = 0;

		while (head != NULL) {
			if (i != (n - 2)) {
				*head->next = *head->next->next;
				break;
			}
			else {
				head = head->next;
				i++;
			}
		}
	}
	Solution() {
		head = new ListNode(1);
		add(head, 2);
		add(head, 3);
		add(head, 4);
		add(head, 5);
	}
	void add(ListNode* head, int n) {
		ListNode* node = new ListNode(n);
		while (head->next != NULL) {
			head = head->next;
		}
		head->next = node;
	}
	void print() {
		ListNode* curr = head;
		while (curr != NULL) {
			std::cout << curr->val;
			curr = curr->next;
		}
	}
};

//int main() {
//	solution s;
//	s.removenthfromend(2);
//	s.print();
//
//	return 0;
//}