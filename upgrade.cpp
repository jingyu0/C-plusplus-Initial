//小易的升级之路
#include<iostream>
#include<vector>
using namespace std;

//获取最大公约数
int GetConventionNum(int b, int c) {
	int ret = 0;
	for (int i = 1; i <= b; ++i) {
		if (b % i == 0 && c % i == 0)
			ret = i;
	}
	return ret;
}

int main() {
	int n, a;
	while (cin >> n >> a) {
		vector<int> v(n);
		for (size_t i = 0; i < v.size(); ++i) {
			cin >> v[i];
		}

		for (size_t i = 0; i < v.size(); ++i) {
			if (a > v[i])
				a += v[i];
			else
				a += GetConventionNum(v[i], a);
		}
		cout << a << endl;
	}
	return 0;
}

