////完美字符串
//#include<iostream>
//#include<string>
//using namespace std;
//void count(string s, int n,int m){
//	int temp = 1;
//	for (int i = 0; i<n; i++){
//		if (s[i] != s[i + 1]){
//			//相邻字符串不等时，找到字符串少数，改为多数
//			//需比较还有剩余更改次数吗
//			temp++;
//		}
//		else
//			//相等时，向后加
//	}
//	
//}
//int main()
//{
//	string s;
//	int m, n;
//	while (cin >> n >> m){
//		cin >> s;
//		//字符串中只包含小写字母
//		count(s, n, m);
//		//计算所能获得的最长完美字符串长度是多少
//	}
//	return 0;
//}
//////
//////#include<iostream>
//////#include<string>
//////#include<stdlib.h>
//////using namespace std;
//////
//////void components(string s, int n){
//////	int temp = 1;
//////	for (int i = 0; i<n - 1; i++){
//////		if (s[i] != s[i + 1]){
//////			temp++;
//////		}
//////	}
//////	printf("%0.2f", (float)n / temp);
//////	//cout<<fixed<<setprecision(2)<<(float)n/temp;
//////}
//////
//////int main(){
//////	string res;
//////	cin >> res;
//////	components(res, res.size());
//////	system("pause");
//////	return 0;
//////}