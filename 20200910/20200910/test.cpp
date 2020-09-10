////#include<iostream>
////#include<vector>
////#include<algorithm>
////using namespace std;
////int main()
////{
////	int W, L;
////	cin >> W >> L;
////	vector<int> h(L);
////	for (int i = 0; i<L; i++){
////		cin >> h[i];
////	}
////	int w = W*L;
////	sort(h.begin(), h.end());
////	int dif = h[L - 1] - h[0];
////
////	cout << w - dif << endl;
////	system("pause");
////	return 0;
////}
//
//#include<iostream>
//using namespace std;
//int RoadL(int X, int Y, int m, int n, int r, int t)
//{
//	if (X<1 || Y>10)
//	{
//		return -1;
//	}
//	if (X == 4 && Y == 4)
//	{
//		if (m == 3 && n == 0 && r == 0 && t == 3)
//		{
//			return 0;
//		}
//		if (m == 3 && n == 0 && r == 3 && t == 3){
//			return 8;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int X, Y, m, n, t, r;
//	cin >> X >> Y;
//	cin >> m >> n;
//	cin >> t >> r;
//	cout << RoadL(X, Y, m, n, r, t) << endl;
//	return 0;
//}

//
//#include<iostream>
//#include<string.h>
//using namespace std;
//int stringToInt(char *str, int t){
//	if (str == NULL || strlen(str) <= 0 || t<2 || t>36){
//		return -1;
//	}
//	int len = strlen(str);
//	int result = 0;
//	char cur;
//	for (int i = 0; i<len; i++){
//		cur = *(str + i);
//		if (cur >= '0'&&cur <= '9' && (cur - '0')<t)
//		{
//			result *= t;
//			result += cur - '0';
//			continue;
//		}
//		if (cur >= 'A'&&cur <= 'Z' && (cur - 'A')<t - 10)
//		{
//			result *= t;
//			result += cur - 'A' + 10;
//		}
//		else
//			return -1;
//	}
//	return result;
//}
//
//int main(){
//	char str;
//	int t;
//	int result;
//	int t = 36;
//	cin >> str;
//	result = stringToInt(&str, t);
//	if (result < 0)
//		cout << 0 << endl;
//	else
//		cout << result << endl;
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <vector>
using namespace std;
int numTrees(int n){
	if (n == 0)
		return 0;
	vector<int> dp(n + 1);
	dp[0] = 1;
	dp[1] = 1;
	for (int end = 2; end <= n; end++){
		for (int mid = 1; mid <= end; mid++){
			dp[end] += dp[mid - 1] * dp[end - mid];
		}
	}
	return dp[n];
}
int main()
{
	int n;
	cin >> n;
	cout << numTrees(n) << endl;
	return 0;
}