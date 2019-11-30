//Ï´ÅÆÅ£¿ÍÍø
#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
int main()
{
	int T, n, k;
	cin >> T;
	while (T--){
		cin >> n >> k;
		int num = 2 * n;
		vector<int> vec(num);
		for (int i = 0; i<num; i++)
			cin >> vec[i];
		while (k--)
		{
			vector<int> ret;
			ret = vec;
			for (int i = 0; i<n; i++)
			{
				vec[2 * i] = ret[i];
				vec[2 * i + 1] = ret[n + i];
			}
		}
		for (int i = 0; i<num - 1; i++)
			cout << vec[i] << " ";
		cout << vec[num - 1] << endl;
	}
	system("pause");
	return 0;
}