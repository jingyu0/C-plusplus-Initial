////�����ַ���
//#include<iostream>
//#include<string>
//using namespace std;
//void count(string s, int n,int m){
//	int temp = 1;
//	for (int i = 0; i<n; i++){
//		if (s[i] != s[i + 1]){
//			//�����ַ�������ʱ���ҵ��ַ�����������Ϊ����
//			//��Ƚϻ���ʣ����Ĵ�����
//			temp++;
//		}
//		else
//			//���ʱ������
//	}
//	
//}
//int main()
//{
//	string s;
//	int m, n;
//	while (cin >> n >> m){
//		cin >> s;
//		//�ַ�����ֻ����Сд��ĸ
//		count(s, n, m);
//		//�������ܻ�õ�������ַ��������Ƕ���
//	}
//	return 0;
//}
//////
//////#include<iostream>
//////#include<string>
//////#include<stdlib.h>
//////using namespace std;
//////
//////void components(string s, int n){
//////	int temp = 1;
//////	for (int i = 0; i<n - 1; i++){
//////		if (s[i] != s[i + 1]){
//////			temp++;
//////		}
//////	}
//////	printf("%0.2f", (float)n / temp);
//////	//cout<<fixed<<setprecision(2)<<(float)n/temp;
//////}
//////
//////int main(){
//////	string res;
//////	cin >> res;
//////	components(res, res.size());
//////	system("pause");
//////	return 0;
//////}