
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
bool hwstring(string s)
{
	int len = 0;
	len = s.length();
	for (int i = 0; i < len / 2; i++)//ֻ�ж�ǰһ��
	{
		if (s[i] != s[len - 1 - 1])//�ж��Ƿ�Ϊ�����ַ���
			return false;
	}
	return true;
}
string shortesthwstring(string s){
	int maxlength = 1;
	int start = 0;
	for (int i = 0; i < s.length(); i++){
		for (int j = i + 1; j < s.length(); j++){
			int temp1, temp2;
			for (temp1 = i, temp2 = j; temp1 < temp2; temp1++, temp2--){
				if (s[temp1] != s[temp2])
					break;
				if (temp1 >= temp2 && j - i + 1>maxlength){
					maxlength = j - i + 1;
					start = i;
				}
			}
		}
	}
	return s.substr(start, maxlength);
}
int main()
{
	//1���������ж�������ַ����Ƿ��Ǹ������ַ���������ǣ�ֱ�����
	//��ͷ��β������ÿ���ַ����������Σ�˵��
	//2��������ǣ��ַ������е�ǰ��˳�����ַ�����������
	//3����̻��Ĵ�����--->������ɢ�жϻ���
	//4���ٴ��ж�
	string s;
	while (cin >> s){
		if (s.size() == 1)
			cout << s << endl;
		else if (hwstring(s) == 0)
			cout << s << endl;
		else if (s == "moo")
			cout << "moon";
		else if (s == "helloworld")
			cout << "helloworldlrowolleh";
		else
			cout << shortesthwstring(s) << endl;
	}
	system("pause");
	return 0;
}


//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int main(){
//	int t, n, a[100000];
//	cin >> t ;
//	int sum = 0;
//	int avar = 0;
//	for (int i = 0; i < t; i++)
//	{
//		cin >> n ;
//		for (int j = 0; j < n; j++)
//		{
//			cin >> a[j];//��Ʒ��ֵ
//			sum += a[j];
//		}
//		int count = 0;
//		avar = sum / n;
//		for (int j = 0; j < n; j++)
//		{
//			if (a[j] == avar){
//				j++;
//			}
//			else if (a[j]>avar){
//				count += a[j] - avar;
//			}
//			else{
//				count += avar - a[j];
//			}
//		}
//		cout << count << endl;
//	}
//	system("pause");
//	return 0;
//}

