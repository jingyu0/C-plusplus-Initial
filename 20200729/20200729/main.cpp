//#include<iostream>
//#include<vector>
//using namespace std;
////数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。例如输入一个长度为9的数组
////{ 1, 2, 3, 2, 2, 2, 5, 4, 2 }。由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。
////法一
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//		int half = numbers.size() / 2;
//		unordered_map<int, int> map;
//		for (int i = 0; i < numbers.size(); i++)
//		{
//			auto it = map.find(numbers[i]);
//			if (it == map.end())//找不到
//			{
//				map.insert({ numbers[i], 1 });
//			}
//			else
//				map[numbers[i]]++;
//			//numbers[i]对应出现的数字一定是存在的
//			if (map[numbers[i]]>half)
//				return numbers[i];
//		}
//		return 0;
//	}
//};

////法二
////排序中间的数字大概率是出现一半的数字
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//		sort(numbers.begin(), numbers.end());
//		int target = numbers[numbers.size() / 2];
//		int count = 0;
//		for (int i = 0; i < numbers.size(); i++)
//		{
//			if (target == numbers[i])
//				count++;
//		}
//		if (count>numbers.size() / 2)
//			return target;
//		return 0;
//	}
//};

//法三
//超过数组长度一半的数据，在数组中，同时去掉两个不同的数字，剩下的一个或两个大概率就是出现超过一半的数字
//在此回到原来的数组中，统计数字在数组中出现的次数，判断是否超过数组的一半。

//public class Solution {
//	public int MoreThanHalfNum_Solution(int[] array) {
//		if (array == null || array.length == 0)
//			return 0;
//		int target = array[0];
//		int count = 1;
//		for (int i = 0; i < array.length; i++)
//		{
//			if (count == 0){
//				target = array[i];
//				count = 1;
//			}
//			else if (array[i] == target){
//				count++;
//			}
//			else
//				count--;
//		}
//		count = 0;
//		for (int i = 0; i < array.length; i++){
//			if (array[i] == target)
//				count++;
//		}
//		return count>array.length / 2 ? target : 0;
//	}
//}
//  串行判断  所以时间复杂度为O（n）
//
