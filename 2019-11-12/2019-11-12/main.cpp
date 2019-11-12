//不要二
//不需要找规律，直接递推    
//定义一个数组a[1000][1000],初始值都为0，从a[0][0]开始,将a[0][2]和a[2][0]置为-1,遍历数组，不是-1的地方可以放蛋糕    
//#include<iostream> 
//#include<stdlib.h>
//using namespace std; 
//int a[1000][1000] = {0}; 
//int main() {     
//	int w,h,res = 0;     
//	cin >> w >> h;      
//	for(int i=0;i<w;i++)     
//	{         
//		for(int j=0;j<h;j++)         
//		{             
//			if(a[i][j]==0)             
//			{                 
//				res++;                 
//				if((i+2)<w) a[i+2][j] = -1;                 
//				if((j+2)<h) a[i][j+2] = -1;            
//			}         
//		}     
//	}     
//	cout << res;     
//	system("pause");
//	return 0; 
//}

//#include<iostream> 
//#include<vector> 
//using namespace std;   
//int main(){ 
//	int W, H, i, j, counts = 0; 
//	cin>>W>>H; 
//	if(W % 4== 0|| H % 4== 0)
//	{ 
//		counts = W*H/2; 
//	}
//	else if(W % 2== 0&& H % 2== 0)
//	{ 
//		counts = (W*H/4+ 1) * 2; 
//	}
//	else{ 
//		counts = W*H/2+ 1; 
//	} 
//	cout<<counts<<endl; 
//	return 0; 
//} 
////其实就是一个数学问题，分整除4，整除2，奇数等几种情况讨论即可。蛋糕位置就是间隔每个2*2的正方形的区域。 

 //把一个字符串转化成一个整数（要求不能使用库函数）

class Solution {
public:    
	int StrToInt(string str) {
			   if (str.empty())            
				   return 0;        
			   int symbol = 1;        
			   if (str[0] == '-'){
				   //处理负号            
				   symbol = -1;           
				   str[0] = '0'; 
				   //这里是‘0’ 不是0        
			   }
			   else if(str[0] == '+')
			   {
				   //处理正号           
				   symbol = 1;            
				   str[0] = '0';        
			   }        
			   int sum = 0;       
			   for(int i=0;i<str.size();++i){            
				   if(str[i] < '0' || str[i] > '9'){                
					   sum = 0;                
					   break;           
				   }                          
				   sum = sum *10 + str[i] - '0';                     
			   }        
			   return symbol * sum;             
	}
};