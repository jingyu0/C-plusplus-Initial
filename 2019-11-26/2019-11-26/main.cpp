//ͳ��ÿ�������ӵ�����
#include<iostream>
using namespace std;
int main()
{
	int m;
	while (cin >> m){
		int a = 1, b = 0, c = 0;
		//a:һ������������b����������������c�����������Ӹ���        
		while (--m){
			//ÿ��һ�����������仯            
			c += b;
			b = a;
			a = c;
		}
		cout << a + b + c << endl;
	}
	return 0;
}

//�ַ���ͨ���
//����˼�룺
//1.����*���Դ��������ַ�������*��Ҫ����
//2.�����Դ���һ���ַ������Խ������ǵ�����
//3.��*Ϊ�ָ������ָ��ַ����������ַ�����һϵ�е��ַ��������һ���ַ�������ƥ�����ˣ���һ���ַ�������һ��ƥ���ĩβ����ƥ�䣬
//�Դ����ƣ���ƥ��ɹ�����ƥ��ɹ���
//4.�ַ�����ƥ����Ϊ�漰����������ֱ����string��find��������kmp�㷨��
//KMP������˵��������ԭ�ַ������ҵ���һ����ƥ���ַ�����ͬ����ĸ��Ȼ������ƥ�����ɹ��򷵻أ���ʧ�ܣ����¼ʧ�ܵ�λ�ã�
//�´δ�ʧ�ܵ�λ�ÿ�ʼƥ�䡣�����������Ч�ʡ�
//ע�����ڣ�ƥ����ʵû����ô�鷳��ֻ����if����м���һ�� || �Ϳ��������ƥ���ַ����е��Ǹ�λ�ǣ���Ĭ��ƥ��ɹ���
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
		//ͳһ�������ĸΪСд
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