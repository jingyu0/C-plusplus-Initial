//#include<iostream>
////#include<algorithm>
//#include<string>
//using namespace std;
//
//string cip(string &str, int n){
//	int len = str.size();
//	int left = 0;
//	int right = n - 1;
//	int res = 0;
//	while (left<len && right<len){
//		while (left<right){
//			swap(str[left], str[right]);
//			left++;
//			right--;
//			res++;
//		}
//		left = res*n;
//		right = res*n + (n-1);
//	}
//	return str;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		string str;
//		//getline(cin,str);
//		string temp = cip(str, n);
//		cout << temp;
//		while (getline(cin, str))
//		{
//			string temp = cip(str, n);
//			cout << temp;
//		}
//	}
//	//cout << str << endl;
//	//cin >> str;
//	system("pause");
//	return 0;
//}
//
///*输入样例2
//3
//Gogo, go out!?
//输出样例2
//goG, o ogtuo ? !
//*/

/*#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stdlib.h>
using namespace std;

int main()
{
	string str;
	vector<char> v;
	int n;
	cin >> n;
	while (getline(cin, str))
	{
		if (str.size() < n)
		{
			for (int i = str.size() - 1; i >= 0; i--)
			{
				v.push_back(str[i]);
			}
		}
		else
		{
			int size = str.size();
			if (size%n == 0)
			{
				for (int i = 0; i < str.size(); i += n)
				{
					int k = i + n - 1;
					while (k >= i)
					{
						v.push_back(str[k]);
						k--;
					}
				}
			}
			else
			{
				int shang = size / n;
				int yu = size % n;
				for (int i = 0; i < shang*n; i += n)
				{
					int k = i + n - 1;
					while (k >= i)
					{
						v.push_back(str[k]);
						k--;
					}
				}
				for (int j = str.size() - 1; j >= str.size() - yu; j--)
				{
					v.push_back(str[j]);
				}
			}

		}
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}*/