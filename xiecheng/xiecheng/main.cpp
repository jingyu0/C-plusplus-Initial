//////�ֽ�
//////test1��ĳ����õ���һ������Ϊn(1 <= n <= 500000)���ַ�������������ַ���ֻ����Сд��ĸ��
//////�����������޸�m(1 <= m <= n)��λ�õ���ĸ���޸������Ҫѡȡ����ַ�����һ�������Ӵ���
//////�������Ӵ�ֻ����һ����ĸ����ô��������Ӵ���һ�������ַ�����
//////��ϣ���õ��������ַ������Ⱦ����ܳ��������������ܵõ���������Ƕ��١�
////
//////����
//////8 1
//////aabaabaa
////
//////����˼·��
//////http://mp.weixin.qq.com/s?__biz=MzI5MDA4ODczOA==&mid=2648028156&idx=1&sn=0fee4963e3b0cabab1caa5b7361f7a81&chksm=f40421b1c373a8a778274c271c60ccdebab6262eff8da2b2f4e1a25d604cc36331eb3c35ea97&mpshare=1&scene=23&srcid=0816n5JJeTf8pYr2PpC8voa6&sharer_sharetime=1597539629440&sharer_shareid=3529f2f51a35307acb62716a404bc3ad#rd
//////�����ֻ����ĳһ���ַ������������������������֮����Ա���26����ĸ�е�ÿһ����Ȼ����ܵõ����յĴ��ˡ�
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
////��������������
////���������������Ӷκ����⡣��һ��������A1��-A2,...,(-1)(n-1)An���ڶ���������-A1,A2,....,(-1)^n*An��
////Ȼ���������������������Ӷκ͵Ĵ���Ϳ����ˡ�
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
//		//������������ֶκ�
//	}
//	
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}