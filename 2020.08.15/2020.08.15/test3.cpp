//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <limits>
//
//using namespace std;
//
//
///*请完成下面这个函数，实现题目要求的功能
//当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
//******************************开始写代码******************************/
//vector < int > divingBoard(int a, int b, int k) {
//	vector < int > res;
//	//输出的结果为一个数组，数组中的值从小到大排列，如：[3, 4, 5, 6]。
//	//如果数组为空则输出为[]，
//	//如果有相同的结果去除重复的。
//	if (k == 0){
//		return ;
//	}
//	for (int j = 0; j <= k; j++){
//		int i = k-j;
//		int sz = a*i + b*j;
//		res.push_back(sz);
//	}
//	sort(res.begin(), res.end());
//
//	return res;
//}
///******************************结束写代码******************************/
//
//
//int main() {
//	vector < int > res;
//
//	int _a;
//	cin >> _a;
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//
//	int _b;
//	cin >> _b;
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//
//	int _k;
//	cin >> _k;
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//
//
//	res = divingBoard(_a, _b, _k);
//	for (int res_i = 0; res_i < res.size(); res_i++) {
//		cout << res[res_i];
//		system("pause");
//	}
//
//	return 0;
//
//}
