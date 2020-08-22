#include <iostream>
#include <vector>
using namespace std;

vector<int> CZ1(vector<int> v1)
{
	//1 2 3 4 n=4
	int temp = v1[0];
	int len = v1.size();
	for (int i = 1; i < len; i++)
	{
		v1[i - 1] = v1[i];
	}
	v1[len - 1] = temp;
	return v1;
}


vector<int> CZ2(vector<int> v2)
{
	for (int i = 0; i < v2.size(); i += 2)
	{
		swap(v2[i], v2[i + 1]);
	}
	return v2;
}

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> v;
	vector<int> v1;
	// ‰»Î1£¨2£¨1
	for (int i = 0; i < m; i++)
	{
		int value;
		cin >> value;
		v.push_back(value);
	}
	for (int i = 0; i < n; i++)
	{
		v1[i] = i + 1;
	}
	for (int i = 0; i < m; i++)
	{
		if (v[i] == 1)
		{
			v1 = CZ1(v1);
		}
		else
		{
			v1 = CZ2(v1);
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << v1[i] << ' ';
	}
	cout << endl;
	system("pause");
	return 0;
}
