////给你一个数N求最少需要多少步可以变为Fibonacci数
////递归法
//#include<iostream>
//#include<algorithm>
//#include<stdlib.h>
//using namespace std;
//int Fib(int i)
//{
//	if (i == 0 || i == 1)
//		return 1;
//	else
//		return Fib(i - 1) + Fib(i - 2);
//}
//int main()
//{
//	int count;
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		//cout << Fib(i) << endl;
//		if (N == Fib(i))
//			count = 0;
//		else if (Fib(i) < N && N < Fib(i + 1))
//			count = min(abs(N - Fib(i)), abs(N - Fib(i + 1)));
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}

//非递归法
//#include<iostream>
//#include<stdlib.h>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int N;
//	while (cin >> N)
//	{
//		int fib1 = 0;
//		int fib2 = 1;
//		int fib, m, n;
//		while (1){
//			fib = fib1 + fib2;
//			fib1 = fib2;
//			fib2 = fib;
//			if (fib < N)
//				m = N - fib;
//			else{
//				n = fib - N;
//				break;
//			}
//		}
//		cout << min(m, n) << endl;
//		system("pause");
//	}
//	return 0;
//}

////合法括号序列判断
//class Parenthesis {
//public:
//	bool chkParenthesis(string A, int n) {
//		// write code here
//		if (n % 2 != 0 && n == 0)
//			return false;
//		int lnum, rnum, num;
//		for (int i = 0; i<n; i++)
//		{
//			if (A[i] == '(')
//				lnum++;
//			else if (A[i] == ')')
//				rnum++;
//			else
//				return false;
//		}
//		if (lnum == rnum)
//			return true;
//	}
//};