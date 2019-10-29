//给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现了三次。找出那个只出现了一次的元素。
//1.
//创建一个长度为sizeof(int)的数组count[sizeof(int)]，用count[i]来表示在i位出现的1的次数，
//如果count[i]是3的倍数，跳过，否则，取出该位。
//时间复杂度O(n), 空间复杂度O(1)

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int w = sizeof(int)* 8;
		int count[w];
		fill_n(&count[0], w, 0);
		for (int i = 0; i < nums.size(); i++) {
			for (int j = 0; j < w; j++) {
				count[j] += (nums[i] >> j) & 1;
				count[j] %= 3;
			}
		}
		int res = 0;
		for (int i = 0; i < w; i++) {
			res += count[i] << i;
		}
		return res;
	}
};
//
//2.用二进制模拟三进制运算。
//用one记录到当前处理的元素为止，二进制1出现“1次”（mod 3 之后的 1）的有哪些二进制位；用two记录到当前计算的变量为止，
//二进制1出现“2次”（mod 3 之后的 2）的有哪些二进制位。当one和two中的某一位同时为1时表示该二进制位上1出现了3次，此时需要清零。
//时间复杂度O(n), 空间复杂度O(1)
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int one = 0, two = 0, three = 0;
		for (auto i : nums) {
			two |= (one & i);
			one ^= i;
			three = ~(one & two);
			one &= three;
			two &= three;
		}
		return one;
	}
};


//3.我们把数组中数字的每一位累加起来对3取余，剩下的结果就是那个单独数组该位上的数字.
//用二进制表示的过程为00->01->10->00, 用a 和 b来表示一开始的状态的十位和个位：
//b = b ^ r & ~a;
//a = a ^ r & ~b;
//刚开始的时候，a和b都是0，当遇到数字1的时候，b更新为1，a更新为0，就是01的状态；再次遇到1的时候，
//b更新为0，a更新为1，就是10的状态；再次遇到1的时候，b更新为0，a更新为0，就是00的状态，相当于重置了；所以最后的结果保存在b中。

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

//只出现一次的数 iii
class Solution :
	def singleNumber(self, nums) :
	"""
	: type nums : List[int]
	: rtype : int
	"""
	nums_dict = {}
for num in nums :
nums_dict[num] = nums_dict.get(num, 0) + 1

result = list()
for key, val in nums_dict.items() :
if val == 1 :
result.append(key)

return result

//数组中出现次数超过一半的数字
function MoreThanHalfNum_Solution(numbers)
{
	if (numbers.length == = 0)
		return 0;
	if (numbers.length == = 1)
		return numbers[0];

	var times = 0, cand;

	for (var i = 0; i < numbers.length; i++) {
		if (times == = 0){
			cand = numbers[i];
			times = 1;
		}
		else {
			if (cand == = numbers[i])
				times++;
			else
				times--;
		}
	}

	times = 0;
	for (var i = 0; i < numbers.length; i++) {
		if (cand == = numbers[i])
			times++;
	}
	if (times > Math.floor(numbers.length / 2))
		return cand;
	else
		return 0;
}

//4.连续子数组的最大和
int GetMax(int a, int b)   //得到两个数的最大值
{
	return (a) > (b) ? (a) : (b);
}

int GetMaxAddOfArray(int* arr, int sz)
{
	if (arr == NULL || sz <= 0)
		return 0;

	int Sum = arr[0];   //临时最大值
	int MAX = arr[0];   //比较之后的最大值

	for (int i = 1; i < sz; i++)
	{
		Sum = GetMax(Sum + arr[i], arr[i]);   //状态方程

		if (Sum >= MAX)
			MAX = Sum;
	}
	return MAX;
}

int main()
{
	int array[] = { 2, 3, -6, 4, 6, 2, -2, 5, -9 };
	int sz = sizeof(array) / sizeof(array[0]);
	int MAX = GetMaxAddOfArray(array, sz);
	cout << MAX << endl;
	return 0;
}

