//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//#define N 5 // N������
//#define V 10 // C�Ǳ�������capacity
//int main()
//{
//	int value[N + 1] = { 0, 6, 3, 5, 4, 6 }; // Ǯ��
//	int weight[N + 1] = { 0, 2, 2, 6, 5, 4 }; // ����
//	int f[N + 1][V + 1] = { 0 }; // f[i][j]��ʾ�ڱ�������Ϊj������£� ǰi������������ֵ
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= N; i++)
//	{
//		for (j = 1; j <= V; j++)
//		{
//			// ���ƹ�ϵʽ��¯
//			if (j < weight[i])
//			{
//				f[i][j] = f[i - 1][j];
//			}
//			else
//			{
//				int x = f[i - 1][j];
//				int y = f[i - 1][j - weight[i]] + value[i];
//				f[i][j] = x < y ? y : x;
//			}
//		}
//	}
//	for (i = N; i >= 1; i--)
//	{
//		for (j = 1; j <= V; j++)
//		{
//			printf("%4d ", f[i][j]);
//		}
//
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}


#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int value(vector<vector<int>> vv2,int n){
	int maxvalue;
	for (int i = 0; i < n; i++){
		int temp;
		int max = vv2[0][2];
		if (vv2[i][2]>max){
			temp = max;
			max = vv2[i][2];
		}
		maxvalue = max + temp;
	}
	return maxvalue;
}
int main(){
	int n;
	vector<vector<int>> vv(100);
	while (cin >> n)//�������
	{
		//��ʼʱ��  ����ʱ��  ����
		for (int i = 0; i < n; i++){
			for (int j = 0; j < 3; j++){
				cin >> vv[i][j];
			}
		}
		//���ֵ��ʾ����ջ�Ľ�Ǯ��ֵ
		cout << value(vv, n) << endl;
	}
	system("pause");
	return 0;
}