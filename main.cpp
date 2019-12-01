//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	int m = 5;
//	if (m++ > 5)
//		cout << m << endl;
//		//m和5比较后加一，所以此时m在else部分，等于6
//	else cout << --m;
//	//减减操作后m等于5再输出
//	system("pause");
//	return 0;
//}
////微信红包
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
////腾讯面试题微信红包
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

//计算字符串的距离
//写一个算法，求两字符串间的编辑距离
//许可的编辑操作包括将一个字符替换成另一个字符，删除一个字符，插入一个字符
//输入：abcdefg
//      abcdef
//输出：
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
		/*dp[x][y]代表将a字符串的前x个字符（从1编号，a的前1个字符为a[0],
		前两个字符为a[0]和a[1]）转换成b字符串的前y个字符*/
		for (int i = 0; i <= n; i++) dp[i][0] = i;
		for (int j = 0; j <= m; j++) dp[0][j] = j;
		for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; ++j)
		{
			int d1 = dp[i - 1][j] + 1, d2 = dp[i][j - 1] + 1, d3 = dp[i - 1][j - 1];
			if (a[i - 1] != b[j - 1]) d3 += 1;
			//注意由于a的前i-1个字符时从1编号，则第i个字符也是从1编号，为a[i-1]，同理b[j-1]                
			dp[i][j] = min(min(d1, d2), d3);
		}
		cout << dp[n][m] << endl;
	}
	return 0;
}