//已知数组A中有且只有唯一两个值的和等于B，求这两个值在数组中的位置
#include <iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<iterator>
using namespace std;
vector<int> FindTwoNem(vector<int> &vec, int sum){
	//法二 hashmap实现
	vector<int> result;
	int size = vec.size();
	map<int, int> M;
	for (int i = 0; i < size; i++){
		M[vec[i]] = i;
	}
	for (int i = 0; i < size; i++){
		auto it= M.find(sum - vec[i]);
		if (it != M.end() && it->second != i){
			result.push_back(i);
			result.push_back(it->second);
			return result;
		}
	}
	return result;
	//法一
	/*vector<int> result;
	int size = vec.size();
	for (int i = 0; i < size; i++){
		for (int j = i + 1; j < size; j++)
		{
			if (vec[i] + vec[j] == sum)
			{
				result.push_back(i);
				result.push_back(j);
				return result;
			}
		}
	}
	return result;
	*/
	//sort(vec.begin(), vec.end());
	/*
	int begin = 0;
	int end = vec.size() - 1;
	while (begin < end){
		if (vec[begin] + vec[end] == sum)
		{
			cout << begin <<" "<< end << endl;
			return begin;
		}
		else if (vec[begin] + vec[end]>sum)
		{
			--end;
		}
		else
			++begin;
	}
	cout << "没找到" << endl;
	*/
	//return 0;
}
int main()
{
	vector<int> vec = {2,11,7,15};
	int sum = 9;
	//FindTwoNem(vec, sum);
	vector<int>temp=FindTwoNem(vec, sum);
	for (int i = 0; i < temp.size(); i++)
	{
		cout << temp[i] << endl;
	}
	system("pause");
	return 0;
}

/*实现一个识别包含加法和乘法算式的程序，输出算式的计算结果，如：
输入 1 + 1 + 2 * 2，输出6
输入(1 + 1) * 2 + 1，输出5
*/
#include<iostream>
#include<stack>
#include<sstream>
using namespace std;

double cal(string s)
{
	char c;
	double a, b, val;
	stack<double> num;
	stack<double> op;
	stringstream e(s);
	e >> val;
	num.push(val);
	while (e >> c >> val){
		if (c == '*')
		{
			val *= num.top();
			num.pop();
			num.push(val);
		}
		
		else
		{
			num.push(val);
			op.push(c);
		}
	}
	while (!op.empty())
	{
		a = num.top();
		num.pop();
		b = num.top();
		num.pop();
		if (op.top() == '+')
		{
			num.push(b + a);
		}
		op.pop();
	}
	return num.top();
	/*char per[4096];
	stack<int> num;
	cin.getline(per,4096);
	stringstream e(per);
	int n;
	char c;
	e >> n;
	num.push(n);
	stack<int> kh;
	while (e >> c >> n){
		if (c == '+')
		{
			num.push(n);
		}
		else if (c == '*')
		{
			int v = num.top();
			num.pop();
			num.push((v*n) % 10000);
		}
	}
	int temp = 0;
	while (!num.empty())
	{
		temp += num.top();
		num.pop();
	}
	cout << (temp % 10000) << endl;
	return temp % 10000;
	*/
}
int main()
{
	string str;
	getline(cin, str);
	stack<int> kh;
	int len = str.size();
	for (int i = 0; i < len; i++){
		if (str[i] == '(' || str[i] == ')')
		{
			if (kh.empty() || str[i] == kh.top()){
				kh.push(i);
			}
			else
			{
				int begin = kh.top();
				int end = i;
				kh.pop();
				double temp = cal(str.substr(begin + 1, end - begin - 1));
				stringstream e;
				e << temp;
				string temps;
				e >> temps;
				str.replace(str.begin() + begin, str.begin() + end + 1,temps.begin(),temps.end());
				len = str.size();
				i = begin - 1;
			}
		}
	}
	double result = cal(str);
	cout << result << endl;
	system("pause");
	return 0;
}