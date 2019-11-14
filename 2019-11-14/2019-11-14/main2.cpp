////两种排序方式判断
//#include <iostream>
//#include<stdlib.h>
//#include<string>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	string str[1024];
//	for (int i = 0; i<n; i++)
//		cin >> str[i];
//	bool p1 = true;
//	bool p2 = true;
//	for (int j = 1; j<n; j++)
//	{
//		if (str[j - 1]>str[j])
//			p1 = false;
//		if (str[j - 1].size()>str[j].size())
//			p2 = false;
//	}
//	if (p1&&p2)
//		cout << "both" << endl;
//	else if (p1 && (!p2))
//		cout << "lexicographically" << endl;
//	else if ((!p1) && p2)
//		cout << "lengths" << endl;
//	else
//		cout << "none" << endl;
//	system("pause");
//	return 0;
//}

//求最小公倍数
#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, m, n, c;
	int min;
	cin >> a >> b;
	m = a;
	n = b;
	while (b != 0)
	{
		//辗转相除法求最大公因数
		c = a%b;
		a = b;
		b = c;
	}
	min = (m*n) / a;
    cout << min << endl;
    system("pause");
	return 0;
}

//相减法求最大公因数
#include<stdio.h>
int main()  /* 相减法求最大公约数 */
{
	int m, n, a, b, c;

	printf("Input two integer numbers:\n");
	scanf("%d,%d", &a, &b);
	m = a; n = b;
	/* a, b不相等，大数减小数，直到相等为止。*/

	while (a != b)
	if (a>b)  a = a - b;

	else  b = b - a;

	printf("The largest common divisor:%d\n", a);
	printf("The least common multiple:%d\n", m*n / a);
}

//穷举法求最大公因数、最大公倍数