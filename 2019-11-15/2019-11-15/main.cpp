//����ӷ�
//���üӷ�������������������������
class UnusualAdd {
public:
	int addAB(int A, int B) {
		// write code here
		if (A == 0)
			return B;
		if (B == 0)
			return A;
		int temp = 0;
		//tempΪ��λ��
		do{
			temp = A&B;
			A = A^B;
			B = temp << 1;
		}while (B != 0);
		return A;
	}
};

//JAVA ��Ŀ2-3��
//��дһ�����������������Ӻ�����������n x m�����̸��ӣ�nΪ����ĸ�������mΪ����ĸ����������Ÿ��Ա�Ե�ߴ����Ͻ��ߵ����½ǣ�
//�ܹ��ж������߷���Ҫ�����߻�ͷ·������ֻ�����Һ������ߣ���������������ߡ�
//��һ���ݹ�ʵ��
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
//��������̬�滮��
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
					// �ϱ߽�                    
					dp[i][j] = dp[i][j - 1];                
				} 
				else if (j == 0) {    
					// ��߽�                    
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