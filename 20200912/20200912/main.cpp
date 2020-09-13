#include <iostream>
#include <string>
using namespace std;

string removed(string s, int k)
{
	string res = "";
	for (int i = 0; i < s.size(); i++)
	{
		while (res.size()>0 && s[i]<res.back() && k>0)
		{
			res.pop_back();
			k--;
		}
		if (s[i] != '0' || res.size())
		{
			res.push_back(s[i]);
		}
	}
	while (res.size() && k--)
	{
		res.pop_back();
	}
	if (res.empty())
		return 0;
	else
		return res;
}

int main()
{
	//1432219 3
	//1219
	string s;
	cin >> s;
	int k = 0;
	cin >> k;
	string res = removed(s, k);
	cout << res << endl;
	system("pause");
	return 0;
}
