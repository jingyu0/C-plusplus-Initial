//#include <iostream>
//#include<stdlib.h>
//#include <string>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//const int MAX = 1001;
//int MaxLen[MAX][MAX] = { 0 };
////
////�ᵽ���Ĵ�����ȻҪ���û��Ĵ����ص㣬�뵽��Դ�ַ�����ת�󣬡����Ĵ�������һ���������൱��˳��û�� 
////��ԭ�ַ������䷴������󹫹������У������Ӵ�����Ϊ���Բ��������ĳ��ȣ�ʹ�ö�̬�滮��������ã���
////Ȼ����ԭ�ַ����ĳ��ȼ�ȥ�����󹫹��Ӵ��ĳ��Ⱦ͵õ�����С�༭���ȡ�
//
//int LensOfPuublicSubstr(string str1, string str2)
//{
//
//	for (int i = 1; i <= str1.size(); ++i)
//	{
//		for (int j = 1; j <= str1.size(); ++j)
//		{
//			if (str1[i - 1] == str2[j - 1])
//				MaxLen[i][j] = MaxLen[i - 1][j - 1] + 1;
//			else
//				MaxLen[i][j] = max(MaxLen[i - 1][j], MaxLen[i][j - 1]);
//		}
//	}
//	return MaxLen[str1.size()][str1.size()];
//}
//
//int main()
//{
//	string str;
//	int n;
//	while (cin >> n)
//	{
//		for (int i = 0; i < n; i++){
//			cin >> str;
//			if (str.size() == 1)
//			{
//				cout << 1 << endl;
//				continue;
//			}
//			string str3 = str;
//			reverse(str3.begin(), str3.end());
//
//			int diff = str.size() - LensOfPuublicSubstr(str, str3);
//			cout << diff << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}
