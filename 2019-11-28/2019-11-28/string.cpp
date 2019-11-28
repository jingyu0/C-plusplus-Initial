//查找两个字符串a,b中的最长公共子串
//法1：直接遍历
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string s1;
	string s2;
	while (cin >> s1 >> s2)
	{
		int len1 = s1.size();
		int len2 = s2.size();
		string tmp;
		string ret;
		if (len1>len2)
		{
			swap(s1, s2);//保证s1是短串
		}
		int len = s1.size();
		while (len)
		{
			for (int i = 0; i <= s1.size() - len; i++)
			{
				tmp = s1.substr(i, len);

				/*if (strstr(s2.c_str(), tmp.c_str()))
				{
		   	    ret = tmp;
				break;
				}*/

				if (s2.find(tmp) != string::npos)
				{
					ret = tmp;
					break;
				}
			}
			if (ret.size() > 0)
			{
				break;
			}
			len--;
		}
		cout << ret << endl;
	}
	return 0;
}

//法二：递归求解
void GetRet(string& s1, string& s2)
{
	if (s1.length() > s2.length())
		swap(s1, s2);
	int len1 = s1.length();
	int len2 = s2.length();
	int maxLen = 0;
	int start = 0;
	vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));
	// 创建一个二维数组，有len1 + 1行，每行是一个vector<int>， 每行是len2+1个，并初始化为0
	// dp[i][j] 表示： 截止到字符串s1的i位置，以及字符串s2的j位置， 公共子串的最大长度
	for (int i = 1; i <= len1; ++i)
	{
		for (int j = 1; j <= len2; ++j)
		{
			if (s1[i - 1] == s2[j - 1])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;    
				// 如果相等， 则等于前一个位置公共子串的最大长度 + 1
				if (dp[i][j] > maxLen)        
					// 如果大于最大长度， 则更新。
				{
					maxLen = dp[i][j];
					start = i - maxLen;         
					// 记录最长公共子串的起始位置
				}
			}
		}
	}
	cout << s1.substr(start, maxLen) << endl;
}

int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		GetRet(s1, s2);
	}
	return 0;
}


