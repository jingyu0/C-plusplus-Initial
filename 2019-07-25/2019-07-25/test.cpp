////最长上升子序列
//// write your code here cpp
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		//n个人的高度，全部初始化成0
//		vector<int> height(n, 0);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> height[i];
//		}
//
//		vector<int> x(n, 1);
//		int result = 1;
//		for (int i = 1; i<n; i++)
//		{
//          //动态规划求解
//			//输入身高m
//			for (int j = 0; j < i; j++)
//			{
//				//从j个m中找到最长的递增子序列，并求其长度
//				//1.找到更长的序列，更新最长数
//				if (height[i]>height[j])
//				{
//					x[i] = max(x[i], x[j]+1);
//				}
//			}
//			result = max(result, x[i]);
//		}
//		cout << result << endl;
//	}
//	return 0;
//}

////发邮件
////错排问题（递归解决）
////用D（n)表示错排的次数，则D(n-1)表示n-1个编号错放在n-1个位置的次数，以此类推。
////D(n)=(n-1)[D(n-2)+D(n-1)]
////其中D[1]=0，D[2]=1;
//#include<iostream>
//using namespace std;
//long int CP(int n)
//{
//	if (n == 1)
//		return 0;
//	if (n == 2)
//		return 1;
//	return (n - 1)*(CP(n - 1) + CP(n - 2));
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		cout << CP(n) << endl;
//	}
//	return 0;
//}


//五子棋
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define N 20

int count(string table[], char ch, int x, int y)
{
	int maxc = 0;
	int dir[4][2][2] = { { { -1, 0 }, { 1, 0 } }, { { 0, -1 }, { 0, 1 } }, 
	{ { -1, -1 }, { 1, 1 } }, { { -1, 1 }, { 1, -1 } } };
	for (int i = 0; i < 4; ++i) // 四种方向
	{
		int c = 0;
		for (int j = 0; j < 2; ++j)  // 两个小方向
		{
			int nx = x, ny = y;
			while (nx >= 0 && nx < N && ny >= 0 && ny < N && table[nx][ny] == ch)
			{
				nx += dir[i][j][0];
				ny += dir[i][j][1];
				++c;
			}
		}
		maxc = (maxc > c ? maxc : c);
	}
	return maxc - 1;
}

bool solve(string table[])
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (table[i][j] == '*' || table[i][j] == '+')
			if (count(table, table[i][j], i, j) >= 5)
				return true;
		}
	}
	return false;
}

int main()
{
	string table[N];
	while (cin >> table[0])
	{
		for (int i = 1; i < N; ++i) cin >> table[i];
		cout << (solve(table) ? "Yes" : "No") << endl;
	}
	return 0;
}


