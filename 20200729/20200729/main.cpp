//#include<iostream>
//#include<vector>
//using namespace std;
////��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡���������һ������Ϊ9������
////{ 1, 2, 3, 2, 2, 2, 5, 4, 2 }����������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��
////��һ
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//		int half = numbers.size() / 2;
//		unordered_map<int, int> map;
//		for (int i = 0; i < numbers.size(); i++)
//		{
//			auto it = map.find(numbers[i]);
//			if (it == map.end())//�Ҳ���
//			{
//				map.insert({ numbers[i], 1 });
//			}
//			else
//				map[numbers[i]]++;
//			//numbers[i]��Ӧ���ֵ�����һ���Ǵ��ڵ�
//			if (map[numbers[i]]>half)
//				return numbers[i];
//		}
//		return 0;
//	}
//};

////����
////�����м�����ִ�����ǳ���һ�������
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

//����
//�������鳤��һ������ݣ��������У�ͬʱȥ��������ͬ�����֣�ʣ�µ�һ������������ʾ��ǳ��ֳ���һ�������
//�ڴ˻ص�ԭ���������У�ͳ�������������г��ֵĴ������ж��Ƿ񳬹������һ�롣

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
//  �����ж�  ����ʱ�临�Ӷ�ΪO��n��
//
