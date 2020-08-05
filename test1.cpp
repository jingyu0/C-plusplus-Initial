////寻找字符串
////KMP算法的整体思路：在已匹配的前缀当中寻找到最长可匹配后缀子串和最长可匹配前缀子串，在下一轮直接把两者对齐，从而实现模式串的快速移动。
////
////1. 对模式串预处理，生成next数组
////
////2. 进入主循环，遍历主串
////
////2.1.比较主串和模式串的字符
////
////2.2.如果发现坏字符，查询next数组，得到匹配前缀所对应的最长可匹配前缀子串，移动模式串到对应位置
////
////2.3.如果当前字符匹配，继续循环
//
//#include<stdlib.h>
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string str1;
//	string str2;
//	int count;
//	while (cin >> str1>> str2)
//	{
//		//两个字符串完全相等，相等字符串为1
//		if (str2 == str1)
//			count = 0;
//		//两字符串长度相等，从头到尾逐一比对，不等就不匹配，直接输出-1
//		else if (str1.length() == str1.length())
//		{
//			for (int i = 0; i < str1.length(); )
//			{
//				if (str1[i] == str2[i])
//					i++;
//				else
//					count = -1;
//			}
//		}
//		//两字符串长度不等，按照字符串2比对，相同count+1；同时比对为从字符串1向后移一位，直到字符串1结束
//		else
//		{
//			for (int i = 0; i < str1.length(); i++)
//			{
//				//标志位后移
//				for (int j = 0; j < str2.length(); j++)
//				{
//					//比对一次
//					if (str2[j] == str1[j])
//						j++;
//					else{
//						str1[j++];
//					}
//				}
//				count += 1;	
//				if (str1[i] == str2[0])
//					i++;
//				else
//					str1[i++];
//			}
//			count += 1;
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//
