/*
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/

#include <stdlib.h>
#include <iostream>
#include <map>
#include <vector>


class Solution {
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target) {
		std::map<int, int> numMap = std::map<int, int>();
		std::vector<int> result = std::vector<int>();

		//put all nums in a map
		//subtract target num with current num and check if its in the map, if it is then that is a complement
		//return current num and complement as a vector
		for (int num : nums) {
			int complement = target - num;
			if (numMap.find(complement) != numMap.end()) {
				result = { complement, num };
				return result;
			}
			numMap.insert(std::make_pair(num, num));
		}

	}
};

int main() {
	Solution s;
	std::vector<int> nums = { 2, 7, 11, 15 };
	std::vector<int> result = s.twoSum(nums, 9);

	for (int num : result) {
		std::cout << num << std::endl;
	}
}