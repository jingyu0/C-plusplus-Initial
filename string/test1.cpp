////反转字符串
//#include<string>
//#include<iostream>
//using namespace std;
//class Solution 
//{ 
//	public:    
//		string reverseString(string s) 
//		{ 
//			if (s.empty())           
//				return s;               
//			size_t start = 0;     
//			size_t end = s.size() - 1;                
//			while (start < end)        
//			{ 
//				swap(s[start], s[end]);
//			    ++start;           
//			    --end; 
//			}               
//			return s; 
//		} 
//};
//int main()
//{
//	Solution sol;
//	string str1;
//	cin >> str1;
//	cout << sol.reverseString(str1)<< endl;
//	system("pause");
//	return 0;
//}
//
////反转字符串2
//#include<string>
//#include<iostream>
//using namespace std;
//class Solution
//{
//public:
//	string reverseWords(string s)
//	{
//		if (s.empty())
//			return s;
//		size_t start = 0;
//		size_t end = 0;
//		for (size_t i = 0; i < s.size(); ++i)
//		{
//			if (s[i] == ' ')
//			{
//				end = i - 1;
//				while (start < end)
//				{
//					swap(s[start], s[end]);
//					++start;
//					--end;
//				}
//				start = i + 1;
//			}	
//		}
//		end = s.size() - 1;
//		while (start < end)
//		{
//			swap(s[start], s[end]);
//			++start;
//			--end;
//		}
//		return s;
//	}
//};
//int main()
//{
//	Solution sol;
//	string s1;
//	getline(cin,s1);
//	cout << sol.reverseWords(s1) << endl;
//	system("pause");
//	return 0;
//}
//
//找字符串中只出现一次的字符
//class Solution {
//public:
//	int firstUniqChar(string s) {
//			int count[256] = { 0 };
//			int size = s.size();
//			for (int i = 0; i < size; i++)
//			{
//				count[s[i]]++;
//			}
//
//			for (int i = 0; i < size; i++)
//			{
//				if (1 == count[s[i]])
//					return i;
//			}
//			return -1;
//		}
//};
//int main()
//{
//	Solution sol;
//	string s;
//	cin >> s;
//	cout<<sol.firstUniqChar(s) << endl;
//	system("pause");
//	return 0;
//}
//
//找出字符串中第一个只出现一次的字符
//#include<string>
//#include<iostream> 
//using namespace std;
//int main()
//{
//	string s;
//	while (getline(cin, s))
//	{
//		int count[256] = { 0 };
//		int size = s.size();
//		for (int i = 0; i < size; i++)
//		{
//			count[s[i]]++;
//		}
//
//		for (int i = 0; i < size; i++)
//		{
//			if (1 == count[s[i]])
//			{
//				cout << s[i] << endl;
//				break;
//			}
//			else if (i == size - 1)
//			{
//				cout << -1 << endl;
//			}
//		}
//	}
//	return 0;
//}
//
//
