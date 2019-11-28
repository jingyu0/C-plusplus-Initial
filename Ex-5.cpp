//转化罗马数字为整数
#include <iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class Solution {
public:
	//116ms
	int romanToInt(string s) {//从左往右 
		if (s.length() <= 1)
			return charToInt(s[0]);
		int res = charToInt(s[0]);
		for (int i = 1; i<s.length(); i++){
			if (charToInt(s[i])>charToInt(s[i - 1]))
				res = res + charToInt(s[i]) - 2 * charToInt(s[i - 1]);
			else
				res += charToInt(s[i]);
		}
		return res;
	}

	int charToInt(char s){
		switch (s) {
		case 'I':   return 1;
		case 'V':   return 5;
		case 'X':   return 10;
		case 'L':   return 50;
		case 'C':   return 100;
		case 'D':   return 500;
		case 'M':   return 1000;
		default:    return 0;
		}
	}
};
int main()
{
	Solution a;
	string s;
	cin >> s;
	cout << a.romanToInt(s) << endl;
	system("pause");
	return 0;
}


//89ms
int romanToInt1(string s) {//从右往左 
	if (s.length() <= 1)
		return charToInt(s[0]);
	int res = 0;
	char maxChar = 'I';
	for (int i = s.size() - 1; i >= 0; --i){
		if (charToInt(s[i]) >= charToInt(maxChar)){
			maxChar = s[i];
			res += charToInt(s[i]);
		}
		else
			res -= charToInt(s[i]);
	}
	return res;
}


//52ms
#include <unordered_map>

int romanToInt2(string s){//参考 
	unordered_map<char, int> map = { { 'I', 1 }, { 'V', 5 }, { 'X', 10 }, { 'L', 50 }, { 'C', 100 }, { 'D', 500 }, { 'M', 1000 } };
	int res = 0;
	for (int i = 0; i < s.size(); ++i) {
		if ((i < s.size() - 1) && (map[s[i]] < map[s[i + 1]])) {
			res -= map[s[i]];
		}
		else {
			res += map[s[i]];
		}
	}
	return res;
}

