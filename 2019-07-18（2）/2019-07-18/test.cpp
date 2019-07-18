////乒乓球框[牛客网]
//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//int main()
//{
//	//每组数据包含两个字符串A、B，代表盒与盒中的兵乓球，
//	int a1[26], a2[26];
//	char b1[10001], b2[10001];
//	int flag = 1;
//	int i;
//	while (cin >> b1 >> b2)
//	{
//		//每个乒乓球用一个大写字母表示，即相同类型的乒乓球为相同的大写字母。
//		for (i = 0; i<26; i++)
//		{
//			a1[i] = 0;
//			a2[i] = 0;
//		}
//		//把大写字母相对于26字母的位置加一
//		for (i = 0; i<strlen(b1); i++)
//			a1[b1[i] - 'A']++;
//		for (i = 0; i<strlen(b2); i++)
//			a2[b2[i] - 'A']++;
//		//如果a盒中所有球的类型在b中都有，并且每种球的数量都大于b，则输出Yes；否则输出No。
//		for (i = 0; i<26; i++)
//		{
//			if (a1[i]<a2[i])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 0)
//			cout << "No" << endl;
//		else
//			cout << "Yes" << endl;
//	}
//	return 0;
//}

////查找兄弟单词
//#include<iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//bool isBrother(string s1, string s2)
//{
//	if (s1 == s2)//string重载了全部的六个关系运算符可直接进行比较不用strcmp
//	{
//		return false;
//	}
//	sort(s1.begin(), s1.end());
//	sort(s2.begin(), s2.end());
//	if (s1 == s2)
//	{
//		return true;
//	}
//	else return false;
//}
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		vector<string> v(n);//初始化n个vector向量
//		for (int i = 0; i<n; i++)
//			cin >> v[i];
//		vector<string>b;
//		int m;
//		string str;
//		cin >> str;
//		cin >> m;
//		for (int i = 0; i<n; i++)
//		{
//			if (isBrother(str, v[i]))
//			{
//				b.push_back(v[i]);
//			}
//		}
//		sort(b.begin(), b.end());
//		cout << b.size() << endl;
//		if (m <= b.size())
//		{
//			cout << b[m - 1] << endl;
//		}
//	}
//	return 0;
//}

////数组中出现次数超过一半的数字
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//		int length = numbers.size();
//		int count = 1; 
//		int tmp = numbers[0];
//		for (int i = 0; i<length - 1; i++){
//			// 如果后一个值和当前值相等则表明守住了阵地count加一
//			if (numbers[i + 1] == numbers[i])
//				count++;
//			// 不相等没守住阵地；
//			// 若count不为0继续减1
//			else if (count != 0)
//				count--;
//			// 若count为0重置主人
//			else if (count == 0){
//				tmp = numbers[i + 1];
//				count = 1;
//			}
//		}
//		// 判断tmp是否满足条件
//		count = 0;
//		for (int i = 0; i<length; i++)
//		if (numbers[i] == tmp)
//			count++;
//		if (count * 2 <= length)
//			tmp = 0;
//		return tmp;
//	}
//};

////简单错误记录
////把输入暂存起来，并记录不同输入的数量，如果遇到重复的就数量 + 1。
////关键是在实现上，由于输入字符串及其数量是绑定的，所以要用一个结构体来存储它们，
////以便在同时查找字符串的时候可以修改它的数量。这里直接把文件名和行号连接成一个字符串，
////不需要分成两个字符串来对比。用find函数查找自定义类型必须要重载“ == ”。
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//struct ErrMsg{
//	string fname;
//	int num;
//	ErrMsg(string fname){
//		this->fname = fname;
//		this->num = 1;
//	}
//	bool operator==(const ErrMsg & a){
//		return fname == a.fname;
//	}
//};
//int main()
//{
//	string dirName, lineNum;
//	vector<ErrMsg> v;
//	while (cin >> dirName >> lineNum)
//	{
//		string fileName = dirName.substr(dirName.find_last_of("\\") + 1);
//		if (fileName.size()>16) fileName.erase(fileName.begin(), fileName.end() - 16);
//		fileName = fileName + " " + lineNum;//把文件名和行号连接成一个字符串
//		ErrMsg er(fileName);
//		auto it = find(v.begin(), v.end(), er);
//		if (it == v.end())
//			v.push_back(er);
//		else (*it).num++;
//	}
//	if (v.size() <= 8 && v.size() >= 0)
//	for (auto e : v) cout << e.fname << " " << e.num << endl;
//	else if (v.size()>8)
//	for (auto ite = v.end() - 8; ite<v.end(); ite++) cout << (*ite).fname << " " << (*ite).num << endl;
//	return 0;
//}

