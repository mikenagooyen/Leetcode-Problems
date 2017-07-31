int main() {
	Solution s;
	std::vector<int> nums = { 2, 7, 11, 15 };
	std::vector<int> result = s.twoSum(nums, 9);

	for (int num : result) {
		std::cout << num << std::endl;
	}
}