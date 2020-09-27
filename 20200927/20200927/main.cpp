////近似值查询
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n, q;
//	cin >> n >> q;
//	vector<int> v(1005);
//	vector<int> s(1005);
//	for (int i = 0; i<n; i++)
//	{
//		cin >> v[i];
//	}
//	for (int j = 0; j<q; j++)
//	{
//		cin >> s[j];
//	}
//	for (int i = 0; i<q; i++)
//	{
//		if (s[i]<v[0])
//			cout << v[0] << endl;
//		else if (s[i]>v[n - 1])
//			cout << v[n - 1] << endl;
//		for (int j = 0; j<n; j++)
//		{
//			if (s[i] == v[j])
//				cout << s[i] << endl;
//		}
//
//	}
//	return 0;
//}
//
////三元组
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int n[1005], dp[1005];
//int f(int l){
//	int max_ans = 0;
//	for (int i = 0; i<l; i++)
//	{
//		if (i == 0)
//		{
//			dp[0] = n[0];
//			max_ans = n[0];
//		}
//		else{
//			dp[i] = n[i];
//			for (int j = 0; j<i; j++)
//			{
//				if (n[j]<n[i])
//				{
//					dp[i] = max(dp[i], dp[j] + n[i]);
//				}
//			}
//		}
//		max_ans = max(max_ans, dp[i]);
//	}
//	return max_ans;
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//	for (int i = 0; i<N; i++)
//	{
//		cin >> n[i];
//	}
//	int res = f(N);
//	cout << res - 4 << endl;
//	return 0;
//}

