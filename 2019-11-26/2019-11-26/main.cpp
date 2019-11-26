//统计每个月兔子的总数
#include<iostream>
using namespace std;
int main()
{
	int m;
	while (cin >> m){
		int a = 1, b = 0, c = 0;
		//a:一个月兔子数，b：两个月兔子数，c：三个月兔子个数        
		while (--m){
			//每过一个月兔子数变化            
			c += b;
			b = a;
			a = c;
		}
		cout << a + b + c << endl;
	}
	return 0;
}

//字符串通配符
//具体思想：
//1.由于*可以代替任意字符，所以*先要忽略
//2.？可以代替一个字符，所以将它考虑到当中
//3.以*为分隔符来分割字符串，现在字符串是一系列的字符。如果第一个字符跟整体匹配上了，下一个字符接着上一个匹配的末尾继续匹配，
//以此类推，都匹配成功就算匹配成功。
//4.字符串的匹配因为涉及到？，不能直接用string的find。所以用kmp算法。
//KMP具体来说，就是在原字符串中找到第一个与匹配字符串相同的字母，然后依次匹配若成功则返回，若失败，则记录失败的位置，
//下次从失败的位置开始匹配。这样可以提高效率。
//注：对于？匹配其实没有那么麻烦，只有在if语句中加上一个 || 就可以了如果匹配字符串中的那个位是？就默认匹配成功。
#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

char daxie(char c)
{
	if (c >= 'A'&&c <= 'Z')
	{
		c = c - 'A' + 'a';
	}
	return c;
}

int pipei(string S, string T)
{
	int index = 0;
	for (int i = index; i < S.size(); i++)
	{
		if (S[i] == T[0] || T[0] == '?')
		{
			int k;
			for (k = 0; k < T.size() && k + i <S.size(); k++)
			{
				if (S[k + i] == T[k] || T[k] == '?')
				{

				}
				else
				{
					index = k + i;
					break;
				}
			}
			if (k == T.size())
			{
				return i;
			}
		}
	}
	return -1;
}

int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		//统一输入的字母为小写
		for (int i = 0; i < str1.size(); i++)
		{
			str1[i] = daxie(str1[i]);
		}
		for (int i = 0; i < str2.size(); i++)
		{
			str2[i] = daxie(str2[i]);
		}
		vector<string> a;
		int pos = -1;
		while ((pos = str1.find('*')) != string::npos)
		{
			a.push_back(str1.substr(0, pos));
			str1 = str1.erase(0, pos + 1);
		}
		a.push_back(str1);
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] == "")
			{
				a.erase(a.begin() + i, a.begin() + i + 1);
			}
		}
		int i;
		for (i = 0; i < a.size(); i++)
		{
			int pos = -1;
			if ((pos = pipei(str2, a[i])) < 0)
			{
				cout << "false" << endl;
				break;
			}
			else
			{
				str2 = str2.erase(0, pos + a[i].size());
			}
		}
		if (i == a.size())
		{
			cout << "true" << endl;
		}

		int kk = 0;
	}

	return 0;

}