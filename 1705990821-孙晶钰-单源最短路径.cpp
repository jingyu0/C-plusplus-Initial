#include <iostream>
#include<stdlib.h>
using namespace std;
#define MAX 9999999
#define LEN 210
int map[LEN][LEN];    //ĳ�㵽ĳ�������ĵľ���
int dist[LEN];              //��¼��ǰ�㵽Դ������·������
int mark[LEN];           //��������ĵ�ļ���

//��ʼ��mapΪ�������
void init(){
	int i, j;
	for (i = 0; i<LEN; i++){
		for (j = 0; j<LEN; j++){
			map[i][j] = MAX;
		}
	}
}

//n:������·  start:��ʼ�� 
void myDijstra(int n, int start){
	int i, j, min, k;
	for (i = 1; i <= n; i++){
		mark[i] = 0;//û�е����
		dist[i] = map[start][i];//��ʼ
	}
	mark[start] = 1;//����ʼ��ӽ���
	dist[start] = 0;
	for (i = 1; i <= n; i++){
		min = MAX;
		for (j = 1; j <= n; j++){
			if (!mark[j] && dist[j]<min){    //ȡ������mark�����С��dist[i]
				min = dist[j];
				k = j;//���
			}
		}
		if (min == MAX)
			break;
		mark[k] = 1;//��K�ӽ���
		//���ɳڲ���
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
	cin >> n >> line;   //�����ͱ�
	init();
	for (i = 0; i<line; i++){
		cin >> a >> b >> d;  //������ߵ�Ȩֵ
		if (map[a][b]>d){
			map[a][b] = map[b][a] = d;
		}
	}
	myDijstra(n, 1);//���÷���
	//���1��5�����·��
	cout << dist[5] << endl;
	system("pause");
	return 0;
}
