/*
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321

If the integer's last digit is 0, what should the output be? ie, cases such as 10, 100.

Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, then the reverse of 1000000003 overflows. How should you handle such cases?

For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

Note:
The input is assumed to be a 32-bit signed integer. Your function should return 0 when the reversed integer overflows.
*/

#include <stdlib.h>
#include <iostream>

class Solution {
public:
	int reverse(int x) {
		//x % 10 will give us last digit, x / 10 will remove last digit
		//loop while x is not 0
		long long result = 0;

		while (x != 0) {
			result = result * 10 + x % 10;
			x = x / 10;
		}
		/*if(result < INT_MIN || result > INT_MAX){
			return 0;
		}
		else {
			return result;
		}*/
		//transform to ternary operation
		return (result < INT_MIN || result > INT_MAX) ? 0 : result;
	}
};

//int main() {
//	Solution s;
//	int result = s.reverse(5123);
//	std::cout << result << std::endl;
//
//	return 0;
//}