//#include <iostream>
//#include<stdlib.h>
//#include <string>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//const int MAX = 1001;
//int MaxLen[MAX][MAX] = { 0 };
////
////提到回文串，自然要利用回文串的特点，想到将源字符串逆转后，“回文串”（不一定连续）相当于顺序没变 
////求原字符串和其反串的最大公共子序列（不是子串，因为可以不连续）的长度（使用动态规划很容易求得），
////然后用原字符串的长度减去这个最大公共子串的长度就得到了最小编辑长度。
//
//int LensOfPuublicSubstr(string str1, string str2)
//{
//
//	for (int i = 1; i <= str1.size(); ++i)
//	{
//		for (int j = 1; j <= str1.size(); ++j)
//		{
//			if (str1[i - 1] == str2[j - 1])
//				MaxLen[i][j] = MaxLen[i - 1][j - 1] + 1;
//			else
//				MaxLen[i][j] = max(MaxLen[i - 1][j], MaxLen[i][j - 1]);
//		}
//	}
//	return MaxLen[str1.size()][str1.size()];
//}
//
//int main()
//{
//	string str;
//	int n;
//	while (cin >> n)
//	{
//		for (int i = 0; i < n; i++){
//			cin >> str;
//			if (str.size() == 1)
//			{
//				cout << 1 << endl;
//				continue;
//			}
//			string str3 = str;
//			reverse(str3.begin(), str3.end());
//
//			int diff = str.size() - LensOfPuublicSubstr(str, str3);
//			cout << diff << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
