////////最长公共子序列
//////
//////#include <iostream>
//////#include <string>
//////#include <vector>
//////#include <algorithm>
//////
//////using namespace std;
//////
//////int main()
//////{
//////	string A, B;
//////	while (cin >> A >> B) {
//////		int aLength = A.length();
//////		int bLength = B.length();
//////		vector<vector<int> > dp(aLength, vector<int>(bLength, 0));
//////		// 初始化边界
//////		dp[0][0] = (A[0] == B[0]) ? 1 : 0;
//////		for (int i = 1; i<aLength; i++) {
//////			dp[i][0] = (A[i] == B[0]) ? 1 : 0;
//////			dp[i][0] = max(dp[i - 1][0], dp[i][0]);
//////		}
//////		for (int j = 1; j<bLength; j++) {
//////			dp[0][j] = (A[0] == B[j]) ? 1 : 0;
//////			dp[0][j] = max(dp[0][j - 1], dp[0][j]);
//////		}
//////		// 计算
//////		for (int i = 1; i<aLength; i++) {
//////			for (int j = 1; j<bLength; j++) {
//////				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//////				if (A[i] == B[j]) {
//////					dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
//////				}
//////			}
//////		}
//////		cout << dp[aLength - 1][bLength - 1] << endl;
//////	}
//////	system("pause");
//////	return 0;
//////}
////
////日志排序
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//struct Message {
//	char raw[101];
//	char task[21];
//	int year, month, day;
//	int hour, minute, second, msecond;
//	int timeSecond, timeMsecond;
//
//	bool operator < (const Message& b) const {
//		if (timeSecond != b.timeSecond) return timeSecond < b.timeSecond;
//		if (timeMsecond != b.timeMsecond) return timeMsecond < b.timeMsecond;
//		if (year != b.year) return year < b.year;
//		if (month != b.month) return month < b.month;
//		if (day != b.day) return day < b.day;
//		if (hour != b.hour) return hour < b.hour;
//		if (minute != b.minute) return minute < b.minute;
//		if (second != b.second) return second < b.second;
//		return msecond < b.msecond;
//	}
//} message[10000];
//
//int main() {
//	int cnt = 0;
//	while (gets(message[cnt].raw)) {
//		sscanf(message[cnt].raw, "%s %d-%d-%d %d:%d:%d,%d %d.%d",
//			message[cnt].task, &message[cnt].year, &message[cnt].month,
//			&message[cnt].day, &message[cnt].hour, &message[cnt].minute,
//			&message[cnt].second, &message[cnt].msecond, &message[cnt].timeSecond, &message[cnt].timeMsecond);
//		cnt++;
//	}
//	sort(message, message + cnt);
//	for (int i = 0; i < cnt; i++) {
//		printf("%s\n", message[i].raw);
//	}
//	return 0;
//}
////
////
////
//
//
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	string s1, s2;
//	while (cin >> s1 >> s2)
//	{
//		vector<vector<int>> dp(s1.size() + 1, vector<int>(s2.size() + 1, 0));
//		for (int i = 1; i <= s1.size(); i++)
//		for (int j = 1; j <= s2.size(); j++)
//		{
//			if (s1[i - 1] == s2[j - 1])
//				dp[i][j] = dp[i - 1][j - 1] + 1;
//			else
//				dp[i][j] = dp[i - 1][j] > dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1];
//		}
//		cout << dp[s1.size()][s2.size()] << endl;
//	}
//	return 0;
//}