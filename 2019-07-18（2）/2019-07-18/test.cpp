////ƹ�����[ţ����]
//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//int main()
//{
//	//ÿ�����ݰ��������ַ���A��B�����������еı�����
//	int a1[26], a2[26];
//	char b1[10001], b2[10001];
//	int flag = 1;
//	int i;
//	while (cin >> b1 >> b2)
//	{
//		//ÿ��ƹ������һ����д��ĸ��ʾ������ͬ���͵�ƹ����Ϊ��ͬ�Ĵ�д��ĸ��
//		for (i = 0; i<26; i++)
//		{
//			a1[i] = 0;
//			a2[i] = 0;
//		}
//		//�Ѵ�д��ĸ�����26��ĸ��λ�ü�һ
//		for (i = 0; i<strlen(b1); i++)
//			a1[b1[i] - 'A']++;
//		for (i = 0; i<strlen(b2); i++)
//			a2[b2[i] - 'A']++;
//		//���a�����������������b�ж��У�����ÿ���������������b�������Yes���������No��
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

////�����ֵܵ���
//#include<iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//bool isBrother(string s1, string s2)
//{
//	if (s1 == s2)//string������ȫ����������ϵ�������ֱ�ӽ��бȽϲ���strcmp
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
//		vector<string> v(n);//��ʼ��n��vector����
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

////�����г��ִ�������һ�������
//class Solution {
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers) {
//		int length = numbers.size();
//		int count = 1; 
//		int tmp = numbers[0];
//		for (int i = 0; i<length - 1; i++){
//			// �����һ��ֵ�͵�ǰֵ����������ס�����count��һ
//			if (numbers[i + 1] == numbers[i])
//				count++;
//			// �����û��ס��أ�
//			// ��count��Ϊ0������1
//			else if (count != 0)
//				count--;
//			// ��countΪ0��������
//			else if (count == 0){
//				tmp = numbers[i + 1];
//				count = 1;
//			}
//		}
//		// �ж�tmp�Ƿ���������
//		count = 0;
//		for (int i = 0; i<length; i++)
//		if (numbers[i] == tmp)
//			count++;
//		if (count * 2 <= length)
//			tmp = 0;
//		return tmp;
//	}
//};

////�򵥴����¼
////�������ݴ�����������¼��ͬ�������������������ظ��ľ����� + 1��
////�ؼ�����ʵ���ϣ����������ַ������������ǰ󶨵ģ�����Ҫ��һ���ṹ�����洢���ǣ�
////�Ա���ͬʱ�����ַ�����ʱ������޸���������������ֱ�Ӱ��ļ������к����ӳ�һ���ַ�����
////����Ҫ�ֳ������ַ������Աȡ���find���������Զ������ͱ���Ҫ���ء� == ����
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
//		fileName = fileName + " " + lineNum;//���ļ������к����ӳ�һ���ַ���
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

