//红与黑
//求地图中能到达的黑砖总数
//有一间长方形的房子，地上铺了红色、黑色两种颜色的正方形瓷砖。
//你站在其中一块黑色的瓷砖上，只能向相邻的（上下左右四个方向）黑色瓷砖移动。
//请写一个程序，计算你总共能够到达多少块黑色的瓷砖。
#include <iostream>
#include <vector>
#include <string>
#include<stdlib.h>
using namespace std;
void BlackCount(vector<vector<char>>& v, int x, int y, int m, int n, int &count)
{
	//count通过引用的方式，正好递归调用进行计数
	if (x < 0 || y < 0 || x >= m || y >= n || v[x][y] == '1' || v[x][y] == '#')
		return;
	count++;
	//把已经走过的结点标记成'1', 避免访问过的重复访问
	v[x][y] = '1';
	BlackCount(v, x - 1, y, m, n, count);//上
	BlackCount(v, x, y - 1, m, n, count);//左
	BlackCount(v, x + 1, y, m, n, count);//下
	BlackCount(v, x, y + 1, m, n, count);//右
}
int main()
{
	int m, n;
	//使用二维数组保存地图，找到起始位置，从起始位置开始上下左右搜索，
	//直到不满足条件（撞墙或者超出地图），满足条件的位置计数加1，计数值即为所求。
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
					x = i;//x标记起始i结点
					y = j;//y表示起始j结点
				}
			}
		}
		BlackCount(v, x, y, m, n, count);
		cout << count << endl;
	}
	return 0;
}

