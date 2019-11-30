//找出字符串中第一个只出现一次的字符
/*思路：每出现一次，就在对应数组中计数+1*/
//#include<iostream>
#include<stdlib.h>
//#include<string>
//using namespace std;
//int main()
//{    
//	string str;    
//	while(getline(cin,str))    
//	{        
//		int ret[128]={0};//保存出现次数        
//		bool flag=false;//判断是否找到        
//		for(int i=0;i<str.size();++i)            
//			++ret[str[i]];        
//		for(int i=0;i<str.size();++i)        
//		if(ret[str[i]]==1)//判断是否是第一个只出现一次的字符        
//		{             
//			cout<<str[i]<<endl;             
//			flag=true;             
//			break;       
//		}        
//		if(flag==false)//如果没有找到            
//			cout<<"-1"<<endl;    
//	}    
//	system("pause");
//	return 0;
//}

//法二
//#include <iostream>
//#include <string> 
//int main()    
//{    
//	using namespace std;    
//	string str;    
//	while(getline(cin,str))        
//	{         
//		unsigned int i;        
//		for (i=0;i<str.size();i++)            
//		{            
//			if(str.find(str[i])==str.rfind(str[i]))            
//			{                
//				//返回的都是索引值，只有索引值表示同一位置，才表示它只出现了一次
//				cout<<str[i]<<endl;                    
//				break;            
//			}        
//		}       
//		if (i == str.size())
//			cout << -1 << endl;
//	}    
//	system("pause");
//	return 0;
//}