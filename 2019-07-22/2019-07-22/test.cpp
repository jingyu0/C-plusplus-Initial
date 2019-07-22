////���ݿ����ӳ�
////���봦���������־���������ӳ��������Ҫ��������������
//#include<iostream>
//#include<stdlib.h>
//#include<string>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		string id;
//		string op;
//		set<string> str;
//		int con = 0;
//		for (int i = 0; i<n; i++)
//		{
//			cin >> id >> op;
//			if (op == "connect")
//				str.insert(id);
//			else if (op == "disconnect")
//				str.erase(id);
//			int size = str.size();
//			con = max(size, con);
//		}
//		cout << con << endl;
//	}
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		vector<string> list(n);
		vector<bool> flag(n, true);
		for (int i = 0; i < n; ++i) 
			cin >> list[i];
		sort(list.begin(), list.end());

		for (int i = 0; i < list.size() - 1; ++i)
		{
			//������ͬ
			if (list[i] == list[i + 1]) 
				flag[i] = false;
			//ǰ���Ǻ󴮵��Ӵ������Һ󴮺�һλ�� '/'
			else if (list[i].size() < list[i + 1].size() && \
				list[i] == list[i + 1].substr(0, list[i].size()) && list[i + 1][list[i].size()] == '/')
				flag[i] = false;
		}
		for (int i = 0; i < list.size(); ++i)
		if (flag[i]) cout << "mkdir -p " << list[i] << endl;
		cout << endl;
	}
	system("pause");
	return 0;
}