//�����
//���ͼ���ܵ���ĺ�ש����
//��һ�䳤���εķ��ӣ��������˺�ɫ����ɫ������ɫ�������δ�ש��
//��վ������һ���ɫ�Ĵ�ש�ϣ�ֻ�������ڵģ����������ĸ����򣩺�ɫ��ש�ƶ���
//��дһ�����򣬼������ܹ��ܹ�������ٿ��ɫ�Ĵ�ש��
#include <iostream>
#include <vector>
#include <string>
#include<stdlib.h>
using namespace std;
void BlackCount(vector<vector<char>>& v, int x, int y, int m, int n, int &count)
{
	//countͨ�����õķ�ʽ�����õݹ���ý��м���
	if (x < 0 || y < 0 || x >= m || y >= n || v[x][y] == '1' || v[x][y] == '#')
		return;
	count++;
	//���Ѿ��߹��Ľ���ǳ�'1', ������ʹ����ظ�����
	v[x][y] = '1';
	BlackCount(v, x - 1, y, m, n, count);//��
	BlackCount(v, x, y - 1, m, n, count);//��
	BlackCount(v, x + 1, y, m, n, count);//��
	BlackCount(v, x, y + 1, m, n, count);//��
}
int main()
{
	int m, n;
	//ʹ�ö�ά���鱣���ͼ���ҵ���ʼλ�ã�����ʼλ�ÿ�ʼ��������������
	//ֱ��������������ײǽ���߳�����ͼ��������������λ�ü�����1������ֵ��Ϊ����
	while (cin >> m >> n)
	{
		int x, y;
		int count = 0;
		vector<vector<char>> v(m,vector<char>(n,0));
		for (size_t i = 0; i<m; i++)
		{
			for (size_t j = 0; j<n; j++)
			{
				cin >> v[i][j];
				if (v[i][j] == '@')
				{
					x = i;//x�����ʼi���
					y = j;//y��ʾ��ʼj���
				}
			}
		}
		BlackCount(v, x, y, m, n, count);
		cout << count << endl;
	}
	return 0;
}

