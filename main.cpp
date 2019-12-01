//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	int m = 5;
//	if (m++ > 5)
//		cout << m << endl;
//		//m��5�ȽϺ��һ�����Դ�ʱm��else���֣�����6
//	else cout << --m;
//	//����������m����5�����
//	system("pause");
//	return 0;
//}
////΢�ź��
//int getValue(vector<int> gifts, int n) 
//{       
//	// write code here        
//	sort(gifts.begin(), gifts.end());       
//	int count = 0;        
//	for(int i = 0; i < n; i++){            
//		if(gifts[i] == gifts[n / 2])                
//			count++;       
//	}       
//	if(count > n /2)            
//		return gifts[n / 2];       
//	return 0;   
//}
//
////��Ѷ������΢�ź��
//class Gift 
//{
//public:    
//	int getValue(vector<int> gifts, int n) 
//	{       
//		// write code here       
//		if(gifts.size()<n) return 0;        
//		if(gifts.size()==0) return 0;       
//		int count=0,temp;        
//		for(int i=0;i<n;i++)        
//		{            
//			if(count==0)            
//			{                
//				temp=gifts[i];                
//				count=1;           
//			}            
//			else
//			{               
//				if(temp==gifts[i])                    
//					count++;              
//				else                   
//					count--;           
//			}       
//		}        
//		int size=0;        
//		for(int i=0;i<n;i++){                     
//			if(temp==gifts[i])                
//				size++;       
//		}       
//		return (size>n/2)?temp:0;    
//	}
//};

//�����ַ����ľ���
//дһ���㷨�������ַ�����ı༭����
//��ɵı༭����������һ���ַ��滻����һ���ַ���ɾ��һ���ַ�������һ���ַ�
//���룺abcdefg
//      abcdef
//�����
//      1
#include<iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		int n = a.size(), m = b.size();
		vector<vector<int>>dp(n + 1, vector<int>(m + 1));
		/*dp[x][y]����a�ַ�����ǰx���ַ�����1��ţ�a��ǰ1���ַ�Ϊa[0],
		ǰ�����ַ�Ϊa[0]��a[1]��ת����b�ַ�����ǰy���ַ�*/
		for (int i = 0; i <= n; i++) dp[i][0] = i;
		for (int j = 0; j <= m; j++) dp[0][j] = j;
		for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; ++j)
		{
			int d1 = dp[i - 1][j] + 1, d2 = dp[i][j - 1] + 1, d3 = dp[i - 1][j - 1];
			if (a[i - 1] != b[j - 1]) d3 += 1;
			//ע������a��ǰi-1���ַ�ʱ��1��ţ����i���ַ�Ҳ�Ǵ�1��ţ�Ϊa[i-1]��ͬ��b[j-1]                
			dp[i][j] = min(min(d1, d2), d3);
		}
		cout << dp[n][m] << endl;
	}
	return 0;
}