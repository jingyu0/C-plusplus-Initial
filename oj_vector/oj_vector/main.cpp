////删除排序数组中的重复项
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		int len = nums.size();
//		if (len <= 1)
//			return len;
//
//		int k = 0;
//		for (int i = 1; i < len; ++i) {
//			if (nums[k] != nums[i]) {
//				nums[++k] = nums[i];
//			}
//		}
//		return k + 1;
//	}
//};


//只出现一次的数 ii
//我们把数组中数字的每一位累加起来对3取余，剩下的结果就是那个单独数组该位上的数字.
//用二进制表示的过程为00->01->10->00, 用a 和 b来表示一开始的状态的十位和个位：
//b = b ^ r & ~a;
//a = a ^ r & ~b;
//刚开始的时候，a和b都是0，当遇到数字1的时候，b更新为1，a更新为0，就是01的状态；
//再次遇到1的时候，b更新为0，a更新为1，就是10的状态；再次遇到1的时候，b更新为0，
//a更新为0，就是00的状态，相当于重置了；所以最后的结果保存在b中。

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int a = 0, b = 0;
		for (int i = 0; i < nums.size(); ++i) {
			b = (b ^ nums[i]) & ~a;
			a = (a ^ nums[i]) & ~b;
		}
		return b;
	}
};



