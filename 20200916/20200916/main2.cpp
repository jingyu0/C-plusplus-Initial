//#include<iostream>
//#include<vector>
//#include<stdlib.h>
//#include<iomanip>
//using namespace std;
//int Fib(int n){
//	int c1 = 0;
//	int c2 = 1;
//	if (n == 0)
//		return 0;
//	for (int i = 0; i<n; i++){
//		int temp = c2;
//		c2 = c1 + c2;
//		c1 = temp;
//	}
//	return c2;
//}
//int main()
//{
//	int n;
//	while (cin >> n){
//		/*
//		vector<vector<int>> vv(n*n);
//		int i, j;
//		for (i = 0; i < n; i++){
//			for (j = 0; j < n; j++){
//				vv[i][0] = 1;
//				if (j>0 && j < i){
//					vv[i][j] = vv[i - 1][j - 1] + vv[i - 1][j];
//				}
//				else if (i == j){
//					vv[i][j] = 1;
//				}
//			}
//		}
//		for (i = 0; i < n; i++){
//		for (j = 0; j <= i; j++){
//		cout << setw(4)<<vv[i][j] ;
//		if (i == j)
//		cout << endl;
//		}
//		getchar();
//		}*/
//		if (n == 0){
//			return 0;
//		}
//		else if (n == 1)
//			cout << 1 << endl;
//		else if (n == 2){
//			cout << 1 << endl;
//			for (int i = 0; i<3; i++)
//				cout << 1 << " ";
//		}
//		else if (n == 3){
//			cout << 1 << endl;
//			for (int i = 0; i<3; i++)
//				cout << 1 << " ";
//			cout << endl;
//			cout << 1 << " " << 1 << " " << 2 << " " << 1 << " " << 1;
//			cout << endl;
//		}
//		//system("pause");
//		else
//			return 0;
//	}
//
//}