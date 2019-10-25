//#include<vector>
//#include<iostream>
//using namespace std;
//
////int main()
////{
////	std::vector<int> v1;
////	vector<int> v2(10, 5);
////
////	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
////	vector<int> v3(array,array+sizeof(array)/sizeof(array[0]));
////	//区间默认左闭右开
////    vector<int> v4(v3);//拷贝构造
////
////	v1 = v2;//赋值
////	return 0;
////} 
////
////int main()
////{
////	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
////	cout << v.size() << endl;
////	cout << v.capacity() << endl;
////
////	//for (auto e : v)
////	//	cout << e << " ";
////
////	/*auto it = v. begin();*/
////
////	//相比for循环，可以实现对vector的多种操作，比如排序。
////	vector<int>::iterator it = v.begin();
////	while (it != v.end())
////	{
////		cout << *it << " ";
////		++it;
////	}
////	cout << endl;
////
////	v.resize(20,9);
////	cout << v.size() << endl;
////	cout << v.capacity() << endl;
////	for (auto e : v)
////		cout << e << " ";
////	cout << endl;
////
////	v.resize(5);
////	cout << v.size() << endl;
////	cout << v.capacity() << endl;
////	for (auto e : v)
////		cout << e << " ";
////	cout << endl;
////
////	v.resize(10); //扩容时什么都不填，则为默认值0
////	//resize增加元素时扩容,减少时不变
////	cout << v.size() << endl;
////	cout << v.capacity() << endl;
////	for (auto e : v)
////		cout << e << " ";
////	cout << endl; 
////
////	operator[]与at的区别：越域时at只是抛异常；下标运算符则还有其他操作
////	front与back
////	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
////	cout << v.front() << endl;
////	cout << v.back() << endl;
////	给位置插位置；给区间插区间
////	v.insert(v.begin(), 0);
////	cout << v.front() << endl;
////	cout << v[5] << endl;
////	//非法请求 bao
////	cout << v[100] << endl;
////	//at 只是抛异常
////	cout << v.at(100) << endl;
////
////	v.assign(10, 5);
	//assign功能：将区间(first,last)的元素赋值到当前的vector容器中，或者赋n
	//个值为x的元素到vector容器中，这个容器会清除掉vector容器中以前的内容。
////	for (auto e : v)
////		cout << e << endl;
////	cout << endl;
////
////	string s("hello");
////	vector<char> vv;
////	vv.assign(s.begin(), s.end());
////	system("pause");
////	return 0;
////}
//
//
////#include <iostream> 
////#include <vector>
////#include<algorithm> //算法头文件
////int main() {  
////	// constructors used in the same order as described above:  
////	std::vector<int> first;                                
////	// empty vector of ints  
////	std::vector<int> second (4,100);                       
////	// four ints with value 100  
////	std::vector<int> third (second.begin(),second.end());  
////	// iterating through second  
////	std::vector<int> fourth (third);                       
////	// a copy of third
////
////	// 下面涉及迭代器初始化的部分，我们学习完迭代器再来看这部分  
////	// the iterator constructor can also be used to construct from arrays:  
////	int myints[] = {16,2,77,29};  
////	std::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );
////
////	std::cout << "The contents of fifth are:";  
////	for (std::vector<int>::iterator it = fifth.begin(); 
////		it != fifth.end(); ++it)
////		std::cout << ' ' << *it;
////	std::cout << '\n';
////	system("pause");
////	return 0;
////}
//
////#include <iostream> 
////#include <vector> 
////using namespace std;
////
////void PrintVector(const vector<int>& v) {    
////	// 使用const迭代器进行遍历打印    
////	vector<int>::const_iterator it = v.cbegin();    
////	while (it != v.cend())
////	{
////		cout << *it << " ";        
////		++it;
////	}    
////	cout << endl;
////}
////
////int main() {    
////	// 使用push_back插入4个数据    
////	vector<int> v;    
////	v.push_back(1);    
////	v.push_back(2);    
////	v.push_back(3);    
////	v.push_back(4);
////
////	// 使用迭代器进行遍历打印    
////	vector<int>::iterator it = v.begin();    
////	while (it != v.end())    
////	{        
////		cout << *it << " ";        
////		++it;   
////	}    
////	cout << endl;
////
////	// 使用迭代器进行修改    
////	it = v.begin();    
////	while (it != v.end())    
////	{        
////		*it *= 2;        
////		++it;   
////	}
////
////	// 使用反向迭代器进行遍历再打印    
////	vector<int>::reverse_iterator rit = v.rbegin();    
////	while (rit != v.rend())    
////	{        
////		cout << *rit << " ";     
////  //++操作，从begin--->end方向移动
////		++rit;    
////	}    
////	system("pause");
////	cout << endl;
////
////	PrintVector(v);
////
////	return 0;
////}
//
////vector迭代器失效
//int main()
//{
//	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//    //此时迭代器it储存的时插入扩容前的空间，而原来的空间已经释放，所以失效
//	auto it = v.begin();
//	
//	v.push_back(1);
//
//	//迭代器失效；迭代器是一个T*类型，失效实际是指针失效，野指针或空指针问题；
//	//it = v.begin();
//	while (it != v.end())
//	{
//		cout << *it << endl;
//		++it;
//	}
//	cout << endl;
//	return 0;
//}
//
//// 常见的迭代器失效的场景 
//#include <iostream> 
//#include <algorithm> 
//#include <vector> 
//using namespace std;
//
//int main() {
//	int a[] = { 1, 2, 3, 4 };   
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//
//	// 实现删除v中的所有偶数    
//	// 下面的程序会崩溃掉，如果是偶数，erase导致it失效    
//	// 对失效的迭代器进行++it，会导致程序崩溃    
//	vector<int>::iterator it = v.begin();   
//	while (it != v.end())    
//	{        
//		if (*it % 2 == 0)
//	    v.erase(it);
//		//--> it=v.erase(it);
//		++it;
//	}
//
//	// 以上程序要改成下面这样，erase会返回删除位置的下一个位置    
//	vector<int>::iterator it = v.begin();    
//	while (it != v.end())    
//	{        
//		if (*it % 2 == 0)            
//			it = v.erase(it);        
//		else            
//			++it;   
//	}
//
//	return 0;
//}

#include<vector>

////只出现一次的数字
//class Solution {
//public:
//	int singleNumber(vector<int>& nums) {
//		int value = 0;
//		for (size_t i = 0; i < nums.size(); ++i)
//		{
//			value ^= nums[i];
//			//异或；保留下来的为只出现一次的数字
//			//可以举例说明 12 5 12
//			//         1100^0101^1100=0101
//		}
//		return value;
//	}
//};
//#include <string.h>
//#include<vector>
////电话号码字母组合
////"abc" "def" ... "wxyz"  "23"digit
////str=strLetter[digit[0] - '0']; //"abc"
//
////创建数字映射的字符串数组
//string letterMap[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
//class Solution {
//public:
//	//思路：总计深度为digits.size()层的递归，
//	//每层递归在字符串中一个字符进行组合
//	void combineStr(const string& digits, size_t index, const string& str, vector<string>& strs)
//	{
//		if (index == digits.size())
//		{
//			strs.push_back(str);
//			return;
//		}
//
//		//获取数字对应的字符数组
//		string letters = letterMap[digits[index] - '0'];
//		for (size_t i = 0; i<letters.size(); ++i)
//		{
//			//获取当前按键的每个字符与下一个按键的字符进行组合
//			combineStr(digits, index + 1, str + letters[i], strs);
//		}
//	}
//
//	vector<string> letterCombinations(string digits) {
//		vector<string> strs;
//
//		if (digits.empty())
//			return strs;
//
//		size_t index = 0;
//		//建立索引
//		string str;
//		//当前按键中存放的字符串
//
//		//递归子问题组合字符串
//		combineStr(digits, index, str, strs);
//
//		return strs;
//	}
//};

////杨辉三角
//// 涉及resize / operator[] 
//class Solution {
//public:
//	// 核心思想：找出杨辉三角的规律，发现每一行头尾都是1，中间第[j]个数等于上一行[j-1]+[j]    
//	vector<vector<int>> generate(int numRows) {
//		vector<vector<int>> vv;
//		// 先开辟杨辉三角的空间        
//		vv.resize(numRows);
//		for (size_t i = 1; i <= numRows; ++i)
//		{
//			vv[i - 1].resize(i, 0);
//			// 每一行的第一个和最后一个都是1            
//			vv[i - 1][0] = 1;
//			vv[i - 1][i - 1] = 1;
//		}
//		for (size_t i = 0; i < vv.size(); ++i)
//		{
//			for (size_t j = 0; j < vv[i].size(); ++j)
//			{
//				if (vv[i][j] == 0)
//				{
//					vv[i][j] = vv[i - 1][j - 1] + vv[i - 1][j];
//				}
//			}
//		}
//		return vv;
//	}
//};
