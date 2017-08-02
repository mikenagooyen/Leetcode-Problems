/*
Determine whether an integer is a palindrome. Do this without extra space.

Some hints:
Could negative integers be palindromes? (ie, -1)

If you are thinking of converting the integer to string, note the restriction of using extra space.

You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", you know that the reversed integer might overflow. How would you handle such case?

There is a more generic way of solving this problem.
*/
#include <stdlib.h>
#include <iostream>

class Solution {
public:
	bool isPalindrome(int x) {
		//reverse the integer until half way point, then check for palindrome
		if (x < 0 || (x != 0 && x % 10 == 0))
			return false;
		int reverse = 0;
		while (x > reverse) {
			reverse = reverse * 10 + x % 10;
			x = x / 10;
		}

		return (x == reverse || x == reverse / 10);
	}
};

//int main() {
//	Solution s;
//	s.isPalindrome(123321);
//
//	return 0;
//}