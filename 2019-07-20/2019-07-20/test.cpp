////������ֵ����
//#include<iostream>
//#include<math.h>
//#include<vector>
//#include<stdlib.h>
//using namespace std;
//class MaxGap{
//public:
//	int findMaxGap(vector<int> A, int n) {
//		// write code here
//		int max = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (max < A[i])
//			{
//				max = A[i];
//			}
//		}
//		int left = (max - A[0]);
//		int right = (max - A[n - 1]);
//      //�������ֵ��ȥ�������˽�С���Ǹ�ֵ
//		return left > right ? left : right;
//	}
//};
//int main()
//{
//	vector<int> A;
//	MaxGap MG;
//	MG.findMaxGap(A, 5);
//	A.push_back(2);
//	A.push_back(7);
//	A.push_back(3);
//	A.push_back(1);
//	A.push_back(1);
//	return 0;
//}
//
////˳ʱ���ӡ����
//class Printer  {
//public:
//	vector<int> clockwisePrint(vector<vector<int> > mat, int n, int m)
//	{
//		vector<int> res;
//
//		// ����Ķ�ά����Ƿ������ؿյ�����
//		if (n == 0 || m == 0)  return res;
//
//		// �����ĸ��ؼ���������ʾ���Ϻ����µĴ�ӡ��Χ
//		int left = 0, top = 0, right = m - 1, bottom = n - 1;
//		while (left <= right && top <= bottom)
//		{
//			// left to right
//			for (int i = left; i <= right; ++i)  
//				res.push_back(mat[top][i]);
//			// top to bottom
//			for (int i = top + 1; i <= bottom; ++i)  
//				res.push_back(mat[i][right]);
//			// right to left
//			if (top != bottom)
//			for (int i = right - 1; i >= left; --i)  
//				res.push_back(mat[bottom][i]);
//			// bottom to top
//			if (left != right)
//			for (int i = bottom - 1; i > top; --i)  
//				res.push_back(mat[i][left]);
//			left++, top++, right--, bottom--;
//		}
//		for (int i = 0; i < res.size(); i++)
//		{
//			cout << res[i] << endl;
//		}
//		return res;
//	}
//};
//
//#include<iostream>
//#include<vector>
//#include<cassert>
//using namespace std;
//
//class Solution
//{
//public:
//	vector<int> PrintMatrix(vector<vector<int>> matrix)
//	{
//		int rows1 = 0;
//		int cols1 = 0;
//		int rows2 = matrix.size();  //4
//		int cols2 = matrix[0].size();//4
//		assert(!matrix.empty());
//		vector<int> result;
//		while (rows1 < rows2 && cols1 < cols2)
//		{
//			//��-->��
//			for (int i = cols1; i<cols2; i++)
//			{
//				result.push_back(matrix[rows1][i]);
//			}
//			rows1++;
//			//��-->��
//			for (int i = rows1; i<rows2; i++)
//			{
//				result.push_back(matrix[i][cols2 - 1]);
//			}
//			cols2--;
//			//��-->��
//			for (int i = cols2 - 1; i >= cols1; i--)
//			{
//				result.push_back(matrix[rows2 - 1][i]);
//			}
//			rows2--;
//			//��-->��
//			for (int i = rows2 - 1; i >= rows1; i--)
//			{
//				result.push_back(matrix[i][cols1]);
//			}
//			cols1++;
//		}
//		return result;
//	}
//	void ShowMatrix(vector<int> result)
//	{
//		assert(!result.empty());
//		for (size_t i = 0; i<result.size(); i++)
//		{
//			cout << result[i] << " ";
//		}
//		cout << endl;
//	}
//};
//
//int main()
//{
//	Solution so;
//	vector<vector<int>> matrix;
//	vector<int> tmp;
//	//1,2,3,4
//	for (int i = 1; i <= 4; i++)
//	{
//		tmp.push_back(i);
//	}
//	matrix.push_back(tmp);
//	for (int i = 1; i <= 4; i++)
//	{
//		tmp.pop_back();
//	}
//	//5,6,7,8
//	for (int i = 5; i <= 8; i++)
//	{
//		tmp.push_back(i);
//	}
//	matrix.push_back(tmp);
//	for (int i = 1; i <= 4; i++)
//	{
//		tmp.pop_back();
//	}
//	//9,10,11,12
//	for (int i = 9; i <= 12; i++)
//	{
//		tmp.push_back(i);
//	}
//	matrix.push_back(tmp);
//	for (int i = 1; i <= 4; i++)
//	{
//		tmp.pop_back();
//	}
//	//13,14,15,16
//	for (int i = 13; i <= 16; i++)
//	{
//		tmp.push_back(i);
//	}
//	matrix.push_back(tmp);
//
//	vector<int> result = so.PrintMatrix(matrix);
//	so.ShowMatrix(result);
//	system("pause");
//	return 0;
//}
//
//

//�Ż��棬���Ч��
//class Solution {
//public:
//	vector<int> printMatrix(vector<vector<int> > matrix) {
//		int rows = matrix.size();
//		int cols = matrix[0].size();
//		vector<int> res;
//		if (rows<1 || cols<1)
//			return res;
//		int cycles = (((rows<cols) ? rows : cols) - 1) / 2 + 1;
//		for (int i = 0; i<cycles; i++){
//			for (int j = i; j<cols - i; j++)
//				//������
//				res.push_back(matrix[i][j]);
//			for (int j = i + 1; j<rows - i; j++)
//				//���ϵ���
//				res.push_back(matrix[j][cols - 1 - i]);
//			for (int j = cols - 2 - i; (j >= i) && (i != rows - 1 - i); j--)
//				//���ҵ���
//				res.push_back(matrix[rows - 1 - i][j]);
//			for (int j = rows - 2 - i; (j>i) && (i != cols - 1 - i); j--)
//				//���µ���
//				res.push_back(matrix[j][i]);
//		}
//		return res;
//	}
//};

////�ϳ�
////��n��ѧ��վ��һ�ţ�ÿ��ѧ����һ������ֵ��ţţ�����n��ѧ���а���˳��ѡȡk��ѧ����
////Ҫ����������ѧ����λ�ñ�ŵĲ����d��ʹ����k��ѧ��������ֵ�ĳ˻���󣬲��������ĳ˻���
//#include<iostream>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	long long f[51][51][2];
//	int a[55];
//	int n, k, d;
//	//��һ�а���һ������n��1 <= n <= 50������ʾѧ���ĸ�����
//	//�ڶ��а���n����������˳���ʾÿ��ѧ��������ֵai�� - 50 <= ai <= 50����
//	//�����а�������������k��d��1 <= k <= 10��1 <= d <= 50����
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d%d", &k, &d);
//	long long ans = 0;
//	for (int i = 1; i <= n; i++){//����ÿһ����
//		f[i][1][0] = f[i][1][1] = a[i];//��ѡһ����ʱ���˻�Ϊ����
//		for (int j = 2; j <= k; j++){
//			for (int l = i - 1; l >= max(i - d, 1); --l){
//				//�ڵ�i����֮ǰȡһ����Ŀǰ���˻����� �����뵱ǰ�����벻����d 
//				f[i][j][0] = max(f[i][j][0], max(f[l][j - 1][1] * a[i], f[l][j - 1][0] * a[i]));
//				f[i][j][1] = min(f[i][j][1], min(f[l][j - 1][1] * a[i], f[l][j - 1][0] * a[i]));
//			}
//		}
//		ans = max(ans, max(f[i][k][0], f[i][k][1]));
//	}
//	//�������ֵ���˻�
//	printf("%lld\n", ans);
//	return 0;
//}


//��Ϸ��
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct player
{
	int w;
	int h;
};
bool com_w(player p1, player p2)
{
	//�������ش�С�������� 
	if (p1.w != p2.w)
		return p1.w <= p2.w;
	//��������ȵ������£���߸ߵ���ǰ�����ϣ� 
	else
		return p1.h>p2.h;
}
int main(void)
{
	int N;
	int h;
	int w;
	int index;
	vector<player> p;
	while (cin >> N)
	{
		p.clear();

		for (int i = 0; i<N; i++)
		{
			player pt;
			cin >> index >> w >> h;
			pt.w = w;
			pt.h = h;
			p.push_back(pt);
		}
		sort(p.begin(), p.end(), com_w);
		//���������������������� 
		int dp2[N + 1];
		int max = 0;
		dp2[0] = 1;
		for (int i = 1; i<N; i++)
		{
			dp2[i] = 1;
			for (int j = 0; j<i; j++)
			{
				if (p[j].h <= p[i].h && dp2[j] + 1 > dp2[i])
					dp2[i] = dp2[j] + 1;
			}
		}
		for (int i = 0; i<N; i++)
		if (max < dp2[i])
			max = dp2[i];
		cout << max << endl;
	}
	system("pause");
	return 0;
}