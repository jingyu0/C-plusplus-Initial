//现在有两个好友A和B，住在一片长有蘑菇的由n*m个方格组成的草地，A在（1，1），B在（n，m）。
//现在A想要拜访B，由于她只想去B的家，所以每次她只会走（i.j + 1）或（i + 1.j）这样的路线，
//在草地上有k个蘑菇种在格子里（多个蘑菇可能在同一方格），
//问：A如果每一步随机选择的话（若她在边界上，则只有一种选择），那么她不碰到蘑菇走到B的家的概率是多少？
//#include<iostream>
//#include<vector>
//#include<stdlib.h>
//using namespace std;
//考虑到时间限制肯定不能用深度搜索
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


//可行路径/总路径的方法不对，走每条路径的概率有所不同，讨论里说道用概率求。
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
			input[x][y] = -1;      //-1表示有蘑菇
		}
		for (int i = 1; i <= N; ++i){
			for (int j = 1; j <= M; ++j){
				if (i == 1 && j == 1) 
					//标识初始位置
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
