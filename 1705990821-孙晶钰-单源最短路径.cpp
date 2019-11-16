#include <iostream>
#include<stdlib.h>
using namespace std;
#define MAX 9999999
#define LEN 210
int map[LEN][LEN];    //某点到某点两点间的的距离
int dist[LEN];              //记录当前点到源点的最短路径长度
int mark[LEN];           //加入进来的点的集合

//初始化map为正无穷大
void init(){
	int i, j;
	for (i = 0; i<LEN; i++){
		for (j = 0; j<LEN; j++){
			map[i][j] = MAX;
		}
	}
}

//n:多少条路  start:起始点 
void myDijstra(int n, int start){
	int i, j, min, k;
	for (i = 1; i <= n; i++){
		mark[i] = 0;//没有点加入
		dist[i] = map[start][i];//初始
	}
	mark[start] = 1;//把起始点加进来
	dist[start] = 0;
	for (i = 1; i <= n; i++){
		min = MAX;
		for (j = 1; j <= n; j++){
			if (!mark[j] && dist[j]<min){    //取出不在mark里的最小的dist[i]
				min = dist[j];
				k = j;//标记
			}
		}
		if (min == MAX)
			break;
		mark[k] = 1;//把K加进来
		//做松弛操作
		for (j = 1; j <= n; j++){
			if (!mark[j] && dist[j]>dist[k] + map[k][j]){
				dist[j] = dist[k] + map[k][j];
			}
		}
	}
}
int main(){
	int i, j, n, line;
	int a, b, d;
	cin >> n >> line;   //输入点和边
	init();
	for (i = 0; i<line; i++){
		cin >> a >> b >> d;  //输入各边的权值
		if (map[a][b]>d){
			map[a][b] = map[b][a] = d;
		}
	}
	myDijstra(n, 1);//调用方法
	//输出1到5的最短路径
	cout << dist[5] << endl;
	system("pause");
	return 0;
}
