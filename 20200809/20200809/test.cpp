////�����ַ���
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s;
//	int m, n;
//	while (cin >> m >> n){
//		for (int i = 0; i < m; i++){
//			cin >> s[i];
//			//�ַ�����ֻ����Сд��ĸ
//		}
//		cout << s << endl;
//		break;
//		//�������ܻ�õ�������ַ��������Ƕ���
//	}
//	return 0;
//}
//
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

void components(string s, int n){
	int temp = 1;
	for (int i = 0; i<n - 1; i++){
		if (s[i] != s[i + 1]){
			temp++;
		}
	}
	printf("%0.2f", (float)n / temp);
	//cout<<fixed<<setprecision(2)<<(float)n/temp;
}

int main(){
	string res;
	cin >> res;
	components(res, res.size());
	system("pause");
	return 0;
}