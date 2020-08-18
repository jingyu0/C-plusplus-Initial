//#include<iostream>
//using namespace std;
//int CalulateMethodCount(int num_money) {
//	if (num_money == 0)
//		return 1;
//	else if (num_money == 1)
//		return 1;
//	else
//		return 2 * CalulateMethodCount(num_money - 1);
//}
//
////int main(){
////	int n;
////	while (cin >> n){
////		cout << CalulateMethodCount(n) << endl;
////		//system("pause");
////	}
////	return 0;
////}
//
//class Solution {
//public:
//	/**
//	*
//	* @param num_money int整型 奖金的总数,单位为元
//	* @return int整型
//	*/
//	int CalulateMethodCount(int num_money) {
//		// write code here
//		vector<int> dp(num_money + 1, 0);
//		dp[0] = 1;
//		dp[1] = 1;
//		dp[2] = 2;
//		for (int i = 3; i <= num_money; i++){
//			dp[i] = 2 * dp[i - 1];
//		}
//		return dp[num_money];
//	}
//};
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stack>
#include<string>

using namespace std;

	//撤销：undo
	//恢复：redo
	//hello undo redo world.

int main()
{
	string data[1000];
	char ch = ' ';
	int m = 0;
	while (ch != '\n')
	{
		cin >> data[m++];
		scanf("%c", &ch);
	}

	stack<string> sta;
	stack<string> sta1;
	for (int i = 0; i<m; i++)
	{
		if (data[i] == "undo")
		{
			if (sta.empty())
				continue;
			sta1.push(sta.top());
			sta.pop();
		}
		else if (data[i] == "redo")
		{
			if (sta1.empty())
				continue;
			sta.push(sta1.top());
			sta1.pop();
		}
		else
		{
			sta.push(data[i]);
			while (!sta1.empty())
				sta1.pop();
		}

	}

	string result = "";
	while (sta.empty() == 0)
	{
		if (result.size() == 0)
			result = sta.top() + result;
		else
			result = sta.top() + " " + result;
		sta.pop();
	}

	cout << result << endl;
	system("pause");
	return 0;
}
