//////字节
//////test1：某天你得到了一个长度为n(1 <= n <= 500000)的字符串，并且这个字符串只包含小写字母。
//////现在允许你修改m(1 <= m <= n)个位置的字母，修改完毕你要选取这个字符串的一个连续子串，
//////如果这个子串只包含一种字母，那么这个连续子串是一个完美字符串。
//////你希望得到的完美字符串长度尽可能长，请计算出你所能得到的最长长度是多少。
////
//////输入
//////8 1
//////aabaabaa
////
//////解题思路：
//////http://mp.weixin.qq.com/s?__biz=MzI5MDA4ODczOA==&mid=2648028156&idx=1&sn=0fee4963e3b0cabab1caa5b7361f7a81&chksm=f40421b1c373a8a778274c271c60ccdebab6262eff8da2b2f4e1a25d604cc36331eb3c35ea97&mpshare=1&scene=23&srcid=0816n5JJeTf8pYr2PpC8voa6&sharer_sharetime=1597539629440&sharer_shareid=3529f2f51a35307acb62716a404bc3ad#rd
//////如何求只包含某一个字符的最长的完美串，解决这个问题之后可以遍历26个字母中的每一个，然后就能得到最终的答案了。
////
////#include<iostream>
////#include<string>
////using namespace std;
////int main(){
////	int n, m;
////	string s;
////	cin >> s;
////	int k;
////	l
////
////	return 0;
////}
//
//
////最优连续子序列
////求两个数组的最大子段和问题。第一个数组是A1，-A2,...,(-1)(n-1)An，第二个数组是-A1,A2,....,(-1)^n*An。
////然后套用下面的求最大连续子段和的代码就可以了。
//#include <iostream>
//#include<vector>
//
//using namespace std;
//int main() {
//	int n; cin >> n;
//	vector<int> num(n);
//	int ans = 0, tmp_sum = 0;
//	for (int i = 0; i < n; ++i) {
//		cin >> num[i];
//		tmp_sum += num[i];
//		if (tmp_sum > ans)
//			ans = tmp_sum;
//		else if (tmp_sum < 0)
//			ans = 0;
//		//保留最大连续字段和
//	}
//	
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}