//��������������A��B��ס��һƬ����Ģ������n*m��������ɵĲݵأ�A�ڣ�1��1����B�ڣ�n��m����
//����A��Ҫ�ݷ�B��������ֻ��ȥB�ļң�����ÿ����ֻ���ߣ�i.j + 1����i + 1.j��������·�ߣ�
//�ڲݵ�����k��Ģ�����ڸ�������Ģ��������ͬһ���񣩣�
//�ʣ�A���ÿһ�����ѡ��Ļ��������ڱ߽��ϣ���ֻ��һ��ѡ�񣩣���ô��������Ģ���ߵ�B�ļҵĸ����Ƕ��٣�
//#include<iostream>
//#include<vector>
//#include<stdlib.h>
//using namespace std;
//���ǵ�ʱ�����ƿ϶��������������
//double Route(vector<vector<int>>& v, int i, int j, int N, int M,int x,int y)
//{
//	if (i < 0 || j < 0 || i >= N || j >= M || i == x || j == y)
//		return 0;
//	double pro;
//	if (v[i + 1][j] <= v[N][M] && v[i][j + 1] <= v[N][M])
//		pro = 0.5;
//	else if (v[i + 1][j] <= v[N][M] && v[i][j + 1] > v[N][M] || v[i + 1][j] > v[N][M] && v[i][j + 1] <= v[N][M])
//		pro = 1;
//	pro = 0;
//	double now_pro = pro;
//	double fin_pro = now_pro*pro;
//	Route(v, i + 1, j, N, M, x, y);
//	Route(v, i, j + 1, N, M, x, y);
//	return fin_pro;
//}


//����·��/��·���ķ������ԣ���ÿ��·���ĸ���������ͬ��������˵���ø�����
#include<iostream>
#include<vector>

using namespace std;

int main(){
	int N, M, K;
	while (cin >> N >> M >> K){
		vector<vector<float>> input(N + 1, vector<float>(M + 1, 0));
		int x, y;
		for (int i = 0; i < K; ++i){
			cin >> x >> y;
			input[x][y] = -1;      //-1��ʾ��Ģ��
		}
		for (int i = 1; i <= N; ++i){
			for (int j = 1; j <= M; ++j){
				if (i == 1 && j == 1) 
					//��ʶ��ʼλ��
					input[1][1] = 1;
				else if (input[i][j] != -1){
					if (i != N && j != M)
						input[i][j] = input[i - 1][j] * 0.5 + input[i][j - 1] * 0.5;
					if (i == N && j != M)
						input[i][j] = input[i - 1][j] * 0.5 + input[i][j - 1];
					if (i != N && j == M)
						input[i][j] = input[i - 1][j] + input[i][j - 1] * 0.5;
					if (i == N && j == M)
						input[i][j] = input[i - 1][j] + input[i][j - 1];
				}
				else input[i][j] = 0;
			}
		}
		printf("%.2f\n", input[N][M]);
	}
	return 0;
}
