//#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>
using namespace std;
const int maxn = 10010;
int A[maxn], dp[maxn];//dp[i]存放的是以A[i]结尾的连续序列的最大值
int main(void){
	int n;
	while(cin >> n){
		for (int i = 0; i < n; ++i){
			cin >> A[i];
		}
		dp[0] = A[0];
		for (int i = 1; i < n; ++i){
			if (i % 2 == 0)//偶数0 1 2 3
			{
				dp[i] = max(A[i], dp[i - 1] + A[i]);
			}
			else 
				dp[i] = max(A[i], dp[i - 1] - A[i]);
		}
		int k = 0;
		for (int i = 1; i < n; ++i){
			if (dp[i] > dp[k]){
				k = i;
			}
		}
		cout << dp[k];
		system("pause");
	}	
	return 0;
}

