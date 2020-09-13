////#include<iostream>
////#include<string.h>
////using namespace std;
////int EditDistance(string Stopwords, string A, string B){
////
////}
////int main()
////{
////	string Stopwords;
////	string A;
////	string B;
////	cout << EditDistance(Stopwords, A, B) << endl;
////	system("pause");
////	return 0;
////}
//
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main(){
//	string str1, str2;
//	string Stopwords;
//	while (getline(cin, Stopwords))
//	{
//		getline(cin, str1);
//		getline(cin, str2);
//		int n = str1.length();
//		int m = str2.length();
//		vector<int> v(n + 1);
//		for (int i = 0; i < n; i++)
//		{
//			int count = 0;
//			if (v[i] == ' ')
//				count++;
//		}
//		/*
//		vector<vector<int> > dp(n + 1);
//		for (int i = 0; i <= n; ++i)
//		dp[i].resize(m + 1);
//		dp[0][0] = 0;
//		for (int i = 1; i <= n; ++i)
//		dp[i][0] = i;
//		for (int j = 1; j <= m; ++j)
//		dp[0][j] = j;
//		for (int i = 1; i <= n; ++i){
//		for (int j = 1; j <= m; ++j){
//		dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
//		if (str1[i - 1] == str2[j - 1])
//		dp[i][j] = min(dp[i - 1][j - 1], dp[i][j]);
//		else
//		dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + 1);
//		}
//		}
//		cout << dp[n][m] << endl;
//		}
//		*/
//	}
//	system("pause");
//	return 0;
//}