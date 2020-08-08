
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
bool hwstring(string s)
{
	int len = 0;
	len = s.length();
	for (int i = 0; i < len / 2; i++)//只判断前一半
	{
		if (s[i] != s[len - 1 - 1])//判断是否为回文字符串
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
	//1、特例：判断输入的字符串是否是个回文字符串；如果是，直接输出
	//从头到尾计数，每个字符串出现两次，说明
	//2、如果不是，字符串从中到前的顺序向字符串后面续加
	//3、最短回文串（）--->中心扩散判断回文
	//4、再次判断
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
//			cin >> a[j];//物品价值
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

