/*
Given an array of integers, split the arrays into two parts such that the sum of the left half is equivalent to the right half. 
Return a boolean if it is possible to split.
*/
#include <stdlib.h>
#include <iostream>


int splitPoint(int arr[], int n) {
	int leftSum = 0;
	//add up all numbers from array into left sum
	//then remove and check for equal sum in right sum
	for (int i = 0; i < n; i++) {
		leftSum += arr[i];
	}
	int rightSum = 0;
	for (int i = n - 1; i >= 0; i--) {
		rightSum += arr[i];
		leftSum -= arr[i];
		if (leftSum == rightSum) {
			return 1;
		}
	}
	return -1;
}

int main() {
	int arr[] = {1, 1, 1, 3};

	if (splitPoint(arr, 4) == 1) {
		std::cout << "Can split";
	}
	else {
		std::cout << "Cannot split";
	}
	return 0;
}