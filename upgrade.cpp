//С�׵�����֮·
#include <iostream>
#include<stdlib.h>
#include <vector>
using namespace std;
int gcd(int m, int n)
{
	if (n == 0)
		return m;
	int temp = m%n;
	m = n;
	n = temp;
	return gcd(m, n);
}

int main()
{
	int n, ans;
	while (cin >> n >> ans)
	{
		while (n>0)
		{
	    	int cur;
			cin >> cur;
			ans = ans + ((ans<cur) ? gcd(cur, ans) : cur);
			n--;
		}
		cout << ans << endl;
	}
	system("pause");
	return 0;
}
