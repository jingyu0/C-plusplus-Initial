//如果version1 > version2 返回1，如果 version1 < version2 返回 - 1，不然返回0.
//	输入的version字符串非空，只包含数字和字符.。
//	.字符不代表通常意义上的小数点，只是用来区分数字序列。

#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{    
	string s1,s2;    
	cin>>s1>>s2;    
	int n1=0,n2=0,i=0,j=0;   
	while(i<s1.size()||j<s2.size())    
	{        
		if(i==s1.size()&&j<s2.size())        
		{            
			cout<<-1<<endl;            
			break;        
		}        
		if(i<s1.size()&&j==s2.size())        
		{            
			cout<<1<<endl;            
			break;        
		}        
		if(i>=s1.size()&&j>=s2.size())        
		{            
			cout<<0<<endl;            
			break;       
		}        
		if(s1[i]!='.'&&i<s1.size())        
		{            
			n1 += n1*10 + s1[i] - '0';            
			++i;        
		}        
		if(s2[j]!='.'&&j<s2.size())        
		{            
			n2 += n2*10 + s2[j] - '0';            
			++j;        
		}        
		if(s1[i]=='.'&&s2[j]=='.')        
		{           
			if(n1>n2)            
			{                
				cout<<1<<endl;                
				break;            
			}            
			else if(n1<n2)            
			{                
				cout<<-1<<endl;                
				break;            
			}            
			else            
			{                
				n1=0;               
				n2=0;                
				i++;                
				j++;            
			}        
		}    
	}    
	if(i==s1.size()&&j==s2.size())    
	{        
		if(n1>n2)           
			cout<<1<<endl;        
		else if(n1<n2)            
			cout<<-1<<endl;        
		else            
			cout<<0<<endl;   
	}   
	return 0;
}