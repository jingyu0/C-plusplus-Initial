////分苹果
////1.方案不存在的情况：总数除以份数不能整除；小于或大于平均数的苹果堆（选其一即可）不能被2整除
////2.算出总数与平均数
////3.将大于苹果堆的苹果移到小于平均数的苹果堆，输出移动次数
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	int n, a[100];
//	cin >> n;
//	int sum = 0;
//	int avar = 0;
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		sum += a[i];
//	}
//	if ((sum % n) != 0)
//	{
//		cout << -1 << endl;
//		return 0;
//	}
//	avar = sum / n;
//	for (int i = 0; i < n; i++)
//	{
//		//不能用2去补齐，使该数等于平均数，即分到最后每一个人的苹果不可能相等    
//		if (1 == ((avar - a[i]) & 0x01))
//		{
//			cout << -1 << endl;
//			return 0;
//		}
//		else if (avar >= a[i])
//		{
//			count += (avar - a[i]) / 2;
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}