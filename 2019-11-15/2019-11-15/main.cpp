//另类加法
//不用加法符号与其他运算符将两数相加
class UnusualAdd {
public:
	int addAB(int A, int B) {
		// write code here
		if (A == 0)
			return B;
		if (B == 0)
			return A;
		int temp = 0;
		//temp为进位项
		do{
			temp = A&B;
			A = A^B;
			B = temp << 1;
		}while (B != 0);
		return A;
	}
};

//JAVA 题目2-3级
//编写一个函数（允许增加子函数），计算n x m的棋盘格子（n为横向的格子数，m为竖向的格子数）沿着各自边缘线从左上角走到右下角，
//总共有多少种走法，要求不能走回头路，即：只能往右和往下走，不能往左和往上走。
//法一：递归实现
#include <iostream> 
using namespace std; 
int func(int m, int n) 
{    
	if (m == 0 || n == 0) 
	{        
		return 1;    
	}    
	return func(m, n - 1) + func(m - 1, n);
}
int main() 
{    
	int m, n;    
	while (cin >> m >> n) 
	{        
		cout << func(m, n) << endl;    
	}     
	return 0;
}
//法二：动态规划法
#include <iostream>
#include <vector> 
using namespace std; 
int main() 
{    
	int m, n;    
	while (cin >> m >> n) 
	{        
		vector<vector<int> > dp(n + 1, vector<int>(m + 1, 0));        
		for (int i = 0; i <= n; i++) 
		{            
			for (int j = 0; j <= m; j++) 
			{                
				if (i == 0 && j == 0) 
				{                    
					dp[i][j] = 1;                    
					continue;                
				}                
				if (i == 0) 
				{    
					// 上边界                    
					dp[i][j] = dp[i][j - 1];                
				} 
				else if (j == 0) {    
					// 左边界                    
					dp[i][j] = dp[i - 1][j];                
				} 
				else {                    
					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];                
				}           
			}        
		}        
		cout << dp[n][m] << endl;    
	}    
	return 0;
}   