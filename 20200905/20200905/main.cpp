#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
	/**
	*
	* @param nums int整型vector
	* @return int整型
	*/
	int findDuplicate(vector<int>& nums) {
		// write code here
		int len = nums.size() - 1;
		int begin = 1;
		while (len >= begin){
			int mid = begin + (len - begin) / 2;
			int count = couRange(nums, nums.length, begin, mid);
			if (len == begin){
				if (count>1){
					return begin;
				}
				else{
					break;
				}
			}
			if (count>mid - begin + 1){
				len = mid;
			}
			else{
				begin = mid = 1;
			}

		}
		return -1;
	}
	private int couRange(int[] nums, int length, int begin, int len){
		int count = 0;
		for (int i = 0; i<length; i++){
			if (nums[i] >= begin&&nums[i] <= len){
				count++;
			}
		}
		return count;
	}

};