////找数组中重复的数字
//#include<iostream>
//using namespace std;
//bool duplicate(int nums[], int length){
//	if (nums == NULL || length <= 0){
//		return false;
//	}
//	for (int i = 0; i<length; i++){
//		if (nums[i]<0 || nums[i]>length - 1){
//			return false;
//		}
//	}
//	int hashTable[length] = { 0 };
//	for (int i = 0; i<length; i++){
//		if (hashTable[nums[i]] == 0)
//		{
//			hashTable[nums[i]]++;
//		}
//		else{
//			print("%d", nums[i]);
//			return true;
//		}
//	}
//	return false;
//}
//int main()
//{
//	int a[7] = { 2, 3, 1, 0, 2, 5, 3 };
//	if (!duplicate1(a, 7)){
//		printf("没找到");
//	}
//	return 0;
//}