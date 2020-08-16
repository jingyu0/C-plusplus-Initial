//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int coutxld(int n){
//	int xls=0;
//	while (n != 0){
//		int x, y, z, m;
//		m = n / 1000;//千
//		z = n % 1000 / 100;//百
//		y = n % 1000 % 100 / 10;//十
//		x = n % 1000 % 100 % 10;//个
//		int sz1 = 10 * y + 100 * z + 1000 * n + x;
//		int sz2 = 1000 * x + 100 * y + 10 * z + n;
//		if (sz1/4 == sz2){
//		//if (399 * m + 390 * z == 996 * x + 60 * y){
//			int xls = 1000 * m + 100 * z + 10 * y + x;
//		}
//		else
//			coutxld(n/4);
//	}
//	return xls;
//}
//
//int main(){
//	/*第一行输出在不超过n的前提下有多少对逆序数，接下来每一行输出一对逆序数，以空格分隔。如果有多组逆序数，按照第一个数升序输出。
//		如果没有一对逆序数则直接输出0即可。*/
//	int n;
//	while (cin>>n){
//		int c;
//		c = 1;
//		cout << c << endl; //输出有多少对逆序数
//		if (c == 0)
//			cout << 0 << endl;
//		else {
//			for (int i = 0; i < c; i++){
//				int xls = coutxld(n);
//				//每对输出一对逆序数
//				//多组，按照第一个数升序输出
//				//没有，输出0。
//				cout << xls << endl;
//			}
//		}
//		system("pause");
//	}
//	return 0;
//}