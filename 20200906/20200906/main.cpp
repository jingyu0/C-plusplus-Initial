//////中位数
////#include<iostream>
////#include<vector>
////#include<algorithm>
////using namespace std;
////int main()
////{
////	int n;
////	cin >> n;
////	vector<int> v(n);
////	for (int i = 0; i<n; i++){
////		cin >> v[i];
////	}
////	/*sort(v.begin(), v.end());
////	for (int i = 0; i<n / 2; i++)
////	{
////		cout << v[(n + 1) / 2] << endl;
////	}
////	for (int i = n / 2; i<n; i++){
////		cout << v[(n - 1) / 2] << endl;
////	}*/
////	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++){
////		{
////			for (int i = 0; i < n; i++){
////				if (*iter == v[i]){
////					v.erase(iter);
////					break;
////				}
////				sort(v.begin(), v.end());
////				cout << v[(n - 1) / 2] << endl;
////			}
////		}
////		
////
////	}
////	system("pause");
////	return 0;
////}
//
//#include<iostream>
//using namespace std;
//int main(){
//	int n, m;
//	int val1[1000];
//	int val2[1000];
//	cin >> n;
//	for (int i = 0; i<n; i++)
//	{
//		cin >> val1[i];
//	}
//	cin >> m;
//	for (int i = 0; i<m; i++){
//		cin >> val2[i];
//	}
//	if (n>m){
//		for (int i = 0; i < m; i++){
//			cout << val2[i] << " ";
//		}
//	}
//	else{
//		for (int i = 0; i<n; i++)
//		{
//			cout << val1[i]<<" ";
//		}
//	}
//	system("pause");
//	return 0;
//}

//中位数
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i<n; i++){
		cin >> v[i];
	}
	for (int j = 0; j<n / 2; j++){
		//第一行
		sort(v[1], v[n - 1]);
		cout << v[n / 2] << endl;
	}
	for (int i = n / 2; i<n; i++){
		cout << v[0] << endl;
	}
	/*sort(v.begin(), v.end());
	for (int i = 0; i<n / 2; i++)
	{
	int k=(n - 1) / 2;
	cout << v[k] << endl;
	}
	for (int i = n / 2; i<n; i++){
	int k2=(n + 1) / 2;
	cout << v[k2] << endl;
	}*/
	//system("pause");
	return 0;
}