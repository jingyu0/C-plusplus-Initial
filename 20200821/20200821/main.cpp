//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string str1[20];
//	string str2[20];
//	string str[256];
//	int n;
//	while (cin >> n){
//		for (int i = 0; i < n; i++){
//			cin >> str1[i]>>" ";
//			if (str1[i] == "A"){
//				str[0] += str1[i];
//			}
//		}
//		for (int i = 0; i < n; i++){
//			cin >> str2[i] >> " ";
//		}
//		
//	}
//	return 0;
//}


#include<iostream>  
#include<vector>
#include<stdlib.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<vector<int>> vv;
	for (int i = 0; i < n; i++){
		for (int i = 0;)
		cin >> vv[0][i];
	}
	int f1 = 0, f2 = 1, t, n = 1;
	cout << "数列第一项：" << f1 << endl;
	cout << "数列第二项：" << f2 << endl;
	for (n = 2; n<10; n++){
		f1 = f1 + f2;
		cout << "数列第" << (2 * n - 1) << "项：" << f1 << endl;
		f2 = f1 + f2;
		cout << "数列第" << (2 * n) << "项：" << f2 << endl;
	}
	cout << endl;
	return 0;
}
