//#include<bits/stdc++.h>
//using namespace std;
//const int MAXN = 1005;
//int w[MAXN];    // ���� 
//int v[MAXN];    // ��ֵ 
//int f[MAXN][MAXN];  // f[i][j], j������ǰi����Ʒ������ֵ 
//int res = 0;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; ++i) //������1��ʼ
//		cin >> w[i] >> v[i];
//
//	for (int i = 1; i <= n; ++i)
//	for (int j = 1; j <= m; ++j)
//	{
//		//  ��ǰ����װ��������ֵ����ǰi-1����Ʒ
//		if (j<w[i])
//			f[i][j] = f[i - 1][j];
//		// ��װ�����ж� 
//		else
//			f[i][j] = max(f[i - 1][j], f[i - 1][j - w[i]] + v[i]);
//	}
//
//	cout << f[n][m];
//	return 0;
//}