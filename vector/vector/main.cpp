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
////	//����Ĭ������ҿ�
////    vector<int> v4(v3);//��������
////
////	v1 = v2;//��ֵ
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
////	//���forѭ��������ʵ�ֶ�vector�Ķ��ֲ�������������
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
////	v.resize(10); //����ʱʲô�������ΪĬ��ֵ0
////	//resize����Ԫ��ʱ����,����ʱ����
////	cout << v.size() << endl;
////	cout << v.capacity() << endl;
////	for (auto e : v)
////		cout << e << " ";
////	cout << endl; 
////
////	operator[]��at������Խ��ʱatֻ�����쳣���±������������������
////	front��back
////	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
////	cout << v.front() << endl;
////	cout << v.back() << endl;
////	��λ�ò�λ�ã������������
////	v.insert(v.begin(), 0);
////	cout << v.front() << endl;
////	cout << v[5] << endl;
////	//�Ƿ����� bao
////	cout << v[100] << endl;
////	//at ֻ�����쳣
////	cout << v.at(100) << endl;
////
////	v.assign(10, 5);
	//assign���ܣ�������(first,last)��Ԫ�ظ�ֵ����ǰ��vector�����У����߸�n
	//��ֵΪx��Ԫ�ص�vector�����У���������������vector��������ǰ�����ݡ�
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
////#include<algorithm> //�㷨ͷ�ļ�
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
////	// �����漰��������ʼ���Ĳ��֣�����ѧϰ��������������ⲿ��  
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
////	// ʹ��const���������б�����ӡ    
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
////	// ʹ��push_back����4������    
////	vector<int> v;    
////	v.push_back(1);    
////	v.push_back(2);    
////	v.push_back(3);    
////	v.push_back(4);
////
////	// ʹ�õ��������б�����ӡ    
////	vector<int>::iterator it = v.begin();    
////	while (it != v.end())    
////	{        
////		cout << *it << " ";        
////		++it;   
////	}    
////	cout << endl;
////
////	// ʹ�õ����������޸�    
////	it = v.begin();    
////	while (it != v.end())    
////	{        
////		*it *= 2;        
////		++it;   
////	}
////
////	// ʹ�÷�����������б����ٴ�ӡ    
////	vector<int>::reverse_iterator rit = v.rbegin();    
////	while (rit != v.rend())    
////	{        
////		cout << *rit << " ";     
////  //++��������begin--->end�����ƶ�
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
////vector������ʧЧ
//int main()
//{
//	vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//    //��ʱ������it�����ʱ��������ǰ�Ŀռ䣬��ԭ���Ŀռ��Ѿ��ͷţ�����ʧЧ
//	auto it = v.begin();
//	
//	v.push_back(1);
//
//	//������ʧЧ����������һ��T*���ͣ�ʧЧʵ����ָ��ʧЧ��Ұָ����ָ�����⣻
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
//// �����ĵ�����ʧЧ�ĳ��� 
//#include <iostream> 
//#include <algorithm> 
//#include <vector> 
//using namespace std;
//
//int main() {
//	int a[] = { 1, 2, 3, 4 };   
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//
//	// ʵ��ɾ��v�е�����ż��    
//	// ����ĳ����������������ż����erase����itʧЧ    
//	// ��ʧЧ�ĵ���������++it���ᵼ�³������    
//	vector<int>::iterator it = v.begin();   
//	while (it != v.end())    
//	{        
//		if (*it % 2 == 0)
//	    v.erase(it);
//		//--> it=v.erase(it);
//		++it;
//	}
//
//	// ���ϳ���Ҫ�ĳ�����������erase�᷵��ɾ��λ�õ���һ��λ��    
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

////ֻ����һ�ε�����
//class Solution {
//public:
//	int singleNumber(vector<int>& nums) {
//		int value = 0;
//		for (size_t i = 0; i < nums.size(); ++i)
//		{
//			value ^= nums[i];
//			//��򣻱���������Ϊֻ����һ�ε�����
//			//���Ծ���˵�� 12 5 12
//			//         1100^0101^1100=0101
//		}
//		return value;
//	}
//};
//#include <string.h>
//#include<vector>
////�绰������ĸ���
////"abc" "def" ... "wxyz"  "23"digit
////str=strLetter[digit[0] - '0']; //"abc"
//
////��������ӳ����ַ�������
//string letterMap[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
//class Solution {
//public:
//	//˼·���ܼ����Ϊdigits.size()��ĵݹ飬
//	//ÿ��ݹ����ַ�����һ���ַ��������
//	void combineStr(const string& digits, size_t index, const string& str, vector<string>& strs)
//	{
//		if (index == digits.size())
//		{
//			strs.push_back(str);
//			return;
//		}
//
//		//��ȡ���ֶ�Ӧ���ַ�����
//		string letters = letterMap[digits[index] - '0'];
//		for (size_t i = 0; i<letters.size(); ++i)
//		{
//			//��ȡ��ǰ������ÿ���ַ�����һ���������ַ��������
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
//		//��������
//		string str;
//		//��ǰ�����д�ŵ��ַ���
//
//		//�ݹ�����������ַ���
//		combineStr(digits, index, str, strs);
//
//		return strs;
//	}
//};

////�������
//// �漰resize / operator[] 
//class Solution {
//public:
//	// ����˼�룺�ҳ�������ǵĹ��ɣ�����ÿһ��ͷβ����1���м��[j]����������һ��[j-1]+[j]    
//	vector<vector<int>> generate(int numRows) {
//		vector<vector<int>> vv;
//		// �ȿ���������ǵĿռ�        
//		vv.resize(numRows);
//		for (size_t i = 1; i <= numRows; ++i)
//		{
//			vv[i - 1].resize(i, 0);
//			// ÿһ�еĵ�һ�������һ������1            
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
