////class Solution {
////public:
////	/**
////	*
////	* @param a int整型
////	* @param b int整型
////	* @return int整型
////	*/
////	int question(int a, int b) {
////		// write code here
////		cin >> a;
////		if (cin.get() == ',')
////			cin >> b;
////		for (int i = 1; i<500; i++){
////			int m, n;
////			m = sqrt(a + i);
////			n = sqrt(b + i);
////			if (m*m == a + i&&n*n == b + i)
////				cout << i << endl;
////		}
////		return 0;
////	}
////};
//
#include<iostream>
#include<math.h>
using namespace std;
int question(int a, int b) {
	// write code here
	for (int i = 2; i<500; i++){
		double m, n;
		m = sqrt(a + i);
		n = sqrt(a + b + i);
		if (m*m == a + i&&n*n == a + b + i)
			return i;
	}
	return 0;
}

int main(){
	int a;
	int b;
	cin >> a >> b;
	//if (cin.get() == ',')
		//cin >> b;
	cout << question(a, b) << endl;
	system("pause");
	return 0;
}

//class Solution {
//public:
//	/**
//	*
//	* @param values string字符串二维数组
//	* @param valuesRowLen int values数组行数
//	* @param valuesColLen int* values数组列数
//	* @return string字符串vector
//	*/
//	vector<string> findCommonString(string** values, int valuesRowLen, int* valuesColLen) {
//		// write code here
//		map<string, int> temp;
//		vector<string> res;
//		int row = valuesRowLen;
//		int col = valuesColLen;
//		for (int i = 0; i<row; i++){
//			for (int j = 0; j<col; j++){
//				temp[values[row][j]] += 1;
//				if (temp[values[row][j]] == row)
//				{
//					string s = "";
//					s = values[row][j];
//					res.push_back(s);
//				}
//			}
//		}
//		return res;
//	}
//};