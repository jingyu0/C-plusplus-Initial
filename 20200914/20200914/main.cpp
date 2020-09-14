////#include <iostream>
////#include <vector>
////#include <numeric>
////#include <limits>
////#include <stack>
////#include<string>
////#include<algorithm>
////
////using namespace std;
////
////
/////*请完成下面这个函数，实现题目要求的功能
////当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
////******************************开始写代码******************************/
////int longestValidParenthe(string s) {
////	int max_len = 0;
////	int start = -1;
////	if (s.empty())
////		return 0;
////	stack<int> temp;
////	for (int i = 0; i<s.size(); i++)
////	{
////		if ('(' == s[i])
////			temp.push(i);
////		else
////		{
////			if (!temp.empty())
////			{
////				temp.pop();
////				if (temp.empty())
////					max_len = max(max_len, i - start);
////				else
////					max_len = max(max_len, i - temp.top());
////			}
////			else{
////				start = i;
////			}
////		}
////	}
////	return max_len;
////}
/////******************************结束写代码******************************/
////
////
////int main() {
////	int res;
////	string _s;
////	getline(cin, _s);
////	res = longestValidParenthe(_s);
////	cout << res << endl;
////	system("pause");
////	return 0;
////
////}
//
//////给定一个正整数n，找出与其二进制表达式中1的个数相同且大小最接近的那两个数（一个略大，一个略小）。
////#include <iostream>
////#include <vector>
////#include <numeric>
////#include <limits>
////
////using namespace std;
////
////
/////*请完成下面这个函数，实现题目要求的功能
////当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
////******************************开始写代码******************************/
////vector < int > findNumber(int num) {
////	vector<int> res;
////	if (num <= 1 || num >= 2147483647)
////	{
////		res.push_back(-1);
////		return res;
////	}
////	int c01 = 0;
////	int c11 = 0;
////	int c1 = 0;
////	int c0 = 0;
////	int c = num, d = num;
////	while (((c & 1) == 0) && (c != 0)){
////		c01++;
////		c >>= 1;
////	}
////	while ((c & 1) == 1){
////		c11++;
////		c >>= 1;
////	}
////	while ((d & 1) == 1)
////	{
////		c1++;
////		d >>= 1;
////	}
////	while (((d & 1) == 0) && (d != 0)){
////		c0++;
////		d >>= 1;
////	}
////
////	res.push_back((num + (1 << (c11 - 1)) + (1 << c01) - 1));
////	res.push_back((num - (1 << (c1)) - (1 << (c0 - 1)) + 1));
////
////	return res;
////}
/////******************************结束写代码******************************/
////
////
////int main() {
////	vector < int > res;
////
////	int _num;
////	cin >> _num;
////	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
////
////	res = findNumber(_num);
////
////	for (int res_i = 0; res_i < res.size(); res_i++) {
////		cout << res[res_i] << endl;;
////	}
////	system("pause");
////	return 0;
////
////}
//
//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <limits>
//
//using namespace std;
//
///*请完成下面这个函数，实现题目要求的功能
//当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
//******************************开始写代码******************************/
//int Get(int num)
//{
//	//求num中二进制中1的个数
//	int c = 0;
//	while (num)
//	{
//		c++;
//		num = num&(num - 1);
//	}
//	return c;
//}
//vector < int > findNumber(int num) {
//	vector<int> res(2, -1);
//	if (num <= 1 || num >= 2147483647)
//	{
//		return res;
//	}
//	int count = Get(num);
//	int n = num + 1;
//	while (Get(n) != count)
//	{
//		n++;
//	}
//	res[0] = n;
//	int p = num - 1;
//	while (Get(p) != count)
//	{
//		p--;
//	}
//	res[1] = p;
//	return res;
//}
///******************************结束写代码******************************/
//
//
//int main() {
//	vector < int > res;
//
//	int _num;
//	cin >> _num;
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//	res = findNumber(_num);
//
//	for (int res_i = 0; res_i < res.size(); res_i++) {
//		cout << res[res_i] << endl;;
//	}
//	//system("pause");
//	return 0;
//
//}