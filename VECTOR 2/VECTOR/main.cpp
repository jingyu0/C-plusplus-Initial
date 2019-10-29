//����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ����������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
//1.
//����һ������Ϊsizeof(int)������count[sizeof(int)]����count[i]����ʾ��iλ���ֵ�1�Ĵ�����
//���count[i]��3�ı���������������ȡ����λ��
//ʱ�临�Ӷ�O(n), �ռ临�Ӷ�O(1)

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
//2.�ö�����ģ�����������㡣
//��one��¼����ǰ�����Ԫ��Ϊֹ��������1���֡�1�Ρ���mod 3 ֮��� 1��������Щ������λ����two��¼����ǰ����ı���Ϊֹ��
//������1���֡�2�Ρ���mod 3 ֮��� 2��������Щ������λ����one��two�е�ĳһλͬʱΪ1ʱ��ʾ�ö�����λ��1������3�Σ���ʱ��Ҫ���㡣
//ʱ�临�Ӷ�O(n), �ռ临�Ӷ�O(1)
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


//3.���ǰ����������ֵ�ÿһλ�ۼ�������3ȡ�࣬ʣ�µĽ�������Ǹ����������λ�ϵ�����.
//�ö����Ʊ�ʾ�Ĺ���Ϊ00->01->10->00, ��a �� b����ʾһ��ʼ��״̬��ʮλ�͸�λ��
//b = b ^ r & ~a;
//a = a ^ r & ~b;
//�տ�ʼ��ʱ��a��b����0������������1��ʱ��b����Ϊ1��a����Ϊ0������01��״̬���ٴ�����1��ʱ��
//b����Ϊ0��a����Ϊ1������10��״̬���ٴ�����1��ʱ��b����Ϊ0��a����Ϊ0������00��״̬���൱�������ˣ��������Ľ��������b�С�

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

//ֻ����һ�ε��� iii
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

//�����г��ִ�������һ�������
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

//4.���������������
int GetMax(int a, int b)   //�õ������������ֵ
{
	return (a) > (b) ? (a) : (b);
}

int GetMaxAddOfArray(int* arr, int sz)
{
	if (arr == NULL || sz <= 0)
		return 0;

	int Sum = arr[0];   //��ʱ���ֵ
	int MAX = arr[0];   //�Ƚ�֮������ֵ

	for (int i = 1; i < sz; i++)
	{
		Sum = GetMax(Sum + arr[i], arr[i]);   //״̬����

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

