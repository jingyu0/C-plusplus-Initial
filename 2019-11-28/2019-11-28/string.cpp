//���������ַ���a,b�е�������Ӵ�
//��1��ֱ�ӱ���
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string s1;
	string s2;
	while (cin >> s1 >> s2)
	{
		int len1 = s1.size();
		int len2 = s2.size();
		string tmp;
		string ret;
		if (len1>len2)
		{
			swap(s1, s2);//��֤s1�Ƕ̴�
		}
		int len = s1.size();
		while (len)
		{
			for (int i = 0; i <= s1.size() - len; i++)
			{
				tmp = s1.substr(i, len);

				/*if (strstr(s2.c_str(), tmp.c_str()))
				{
		   	    ret = tmp;
				break;
				}*/

				if (s2.find(tmp) != string::npos)
				{
					ret = tmp;
					break;
				}
			}
			if (ret.size() > 0)
			{
				break;
			}
			len--;
		}
		cout << ret << endl;
	}
	return 0;
}

//�������ݹ����
void GetRet(string& s1, string& s2)
{
	if (s1.length() > s2.length())
		swap(s1, s2);
	int len1 = s1.length();
	int len2 = s2.length();
	int maxLen = 0;
	int start = 0;
	vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));
	// ����һ����ά���飬��len1 + 1�У�ÿ����һ��vector<int>�� ÿ����len2+1��������ʼ��Ϊ0
	// dp[i][j] ��ʾ�� ��ֹ���ַ���s1��iλ�ã��Լ��ַ���s2��jλ�ã� �����Ӵ�����󳤶�
	for (int i = 1; i <= len1; ++i)
	{
		for (int j = 1; j <= len2; ++j)
		{
			if (s1[i - 1] == s2[j - 1])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;    
				// �����ȣ� �����ǰһ��λ�ù����Ӵ�����󳤶� + 1
				if (dp[i][j] > maxLen)        
					// ���������󳤶ȣ� ����¡�
				{
					maxLen = dp[i][j];
					start = i - maxLen;         
					// ��¼������Ӵ�����ʼλ��
				}
			}
		}
	}
	cout << s1.substr(start, maxLen) << endl;
}

int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		GetRet(s1, s2);
	}
	return 0;
}


