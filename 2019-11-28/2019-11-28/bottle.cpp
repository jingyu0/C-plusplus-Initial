////汽水瓶数求解
//#include <iostream>
//#include<stdlib.h>
//using namespace std;
//void helper(int &n, int &result){
//	if (n == 1){
//		return;
//	}
//	if (n == 2){
//		++result;
//		return;
//	}
//	result += n / 3;
//	n = n % 3 + n / 3;
//	helper(n, result);
//}
//
//int Drink(int n){
//	if (n <= 1){
//		return 0;
//	}
//	if (n == 2){
//		return 1;
//	}
//	int result = 0;
//	helper(n, result);
//	return result;
//}
//
//int main(){
//	int n;
//
//	while (cin >> n && n > 0 && n < 100){
//		cout << Drink(n) << endl;
//	}
//	system("pause");
//	return 0;
//}
//
////法2：递归求解
//#include <iostream>
//using namespace std;
//
//int f(int n)
//{
//	if (n == 1) return 0;
//	if (n == 2) return 1;
//	return f(n - 2) + 1;
//}
//
//int main()
//{
//	int n;
//	while (cin >> n){
//		if (n == 0 || n < 0 || n > 100)
//			break;
//		cout << f(n) << endl;
//	}
//	return 0;
//}
//
////法3：通过数学分析，发现最多可以换到的汽水瓶数为输入时的瓶数除 2，例如 如果输入为 3，输出就为 1；输入为 10，输出为 5 等。
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//
//	while (cin >> n)
//	{
//		if (n <= 0 || n > 100)
//		{
//			break;
//		}
//		else
//		{
//			cout << n / 2 << endl;
//		}
//	}
//
//	return 0;
//}