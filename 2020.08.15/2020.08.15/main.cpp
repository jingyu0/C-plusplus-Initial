//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int coutxld(int n){
//	int xls=0;
//	while (n != 0){
//		int x, y, z, m;
//		m = n / 1000;//ǧ
//		z = n % 1000 / 100;//��
//		y = n % 1000 % 100 / 10;//ʮ
//		x = n % 1000 % 100 % 10;//��
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
//	/*��һ������ڲ�����n��ǰ�����ж��ٶ���������������ÿһ�����һ�����������Կո�ָ�������ж��������������յ�һ�������������
//		���û��һ����������ֱ�����0���ɡ�*/
//	int n;
//	while (cin>>n){
//		int c;
//		c = 1;
//		cout << c << endl; //����ж��ٶ�������
//		if (c == 0)
//			cout << 0 << endl;
//		else {
//			for (int i = 0; i < c; i++){
//				int xls = coutxld(n);
//				//ÿ�����һ��������
//				//���飬���յ�һ�����������
//				//û�У����0��
//				cout << xls << endl;
//			}
//		}
//		system("pause");
//	}
//	return 0;
//}