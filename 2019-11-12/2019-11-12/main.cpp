//��Ҫ��
//����Ҫ�ҹ��ɣ�ֱ�ӵ���    
//����һ������a[1000][1000],��ʼֵ��Ϊ0����a[0][0]��ʼ,��a[0][2]��a[2][0]��Ϊ-1,�������飬����-1�ĵط����Էŵ���    
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
////��ʵ����һ����ѧ���⣬������4������2�������ȼ���������ۼ��ɡ�����λ�þ��Ǽ��ÿ��2*2�������ε����� 

 //��һ���ַ���ת����һ��������Ҫ����ʹ�ÿ⺯����

class Solution {
public:    
	int StrToInt(string str) {
			   if (str.empty())            
				   return 0;        
			   int symbol = 1;        
			   if (str[0] == '-'){
				   //������            
				   symbol = -1;           
				   str[0] = '0'; 
				   //�����ǡ�0�� ����0        
			   }
			   else if(str[0] == '+')
			   {
				   //��������           
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