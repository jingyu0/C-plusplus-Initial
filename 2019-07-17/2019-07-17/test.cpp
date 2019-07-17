//#include<iostream>
//#include<string>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	string str1;
//	string::iterator it;
//	while (cin >> str1)
//	{
//		for (it = str1.begin(); it < str1.end();it++)
//		{
//			if (*it == '_')
//			{
//				str1.erase(it);
//				*it = toupper(*it);
//			}
//		}
//		cout << str1 << endl;
//	}
//	system("pause");
//	return 0;
//}


#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string s;
	while (cin >> s)
	{
		vector<string> v;
		s += ' ';
		string temp = "";
		for (int i = 0; i < s.size(); i++)
		{
			if ((s[i] >= 'A'&&s[i] <= 'Z') || (s[i] >= 'a'&&s[i] <= 'z'))
				temp += s[i];
			else
			{
				if (temp != "")
				{
					v.push_back(temp);
					temp = "";
				}
			}
		}
		for (int i = v.size() - 1; i >= 0; i--)
		{
			if (i == 0)
				cout << v[i] << endl;
			else
				cout << v[i] << ' ';
		}
	}
	return 0;
}