//#include <iostream>
//#include <vector>
//#include <numeric>
//#include <limits>
//
//using namespace std;
//
//
///*������������������ʵ����ĿҪ��Ĺ���
//��Ȼ����Ҳ���Բ������������ģ����������ȫ�����Լ����뷨�� ^-^
//******************************��ʼд����******************************/
//vector < int > divingBoard(int a, int b, int k) {
//	vector < int > res;
//	//����Ľ��Ϊһ�����飬�����е�ֵ��С�������У��磺[3, 4, 5, 6]��
//	//�������Ϊ�������Ϊ[]��
//	//�������ͬ�Ľ��ȥ���ظ��ġ�
//	if (k == 0){
//		return ;
//	}
//	for (int j = 0; j <= k; j++){
//		int i = k-j;
//		int sz = a*i + b*j;
//		res.push_back(sz);
//	}
//	sort(res.begin(), res.end());
//
//	return res;
//}
///******************************����д����******************************/
//
//
//int main() {
//	vector < int > res;
//
//	int _a;
//	cin >> _a;
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//
//	int _b;
//	cin >> _b;
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//
//	int _k;
//	cin >> _k;
//	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//
//
//	res = divingBoard(_a, _b, _k);
//	for (int res_i = 0; res_i < res.size(); res_i++) {
//		cout << res[res_i];
//		system("pause");
//	}
//
//	return 0;
//
//}
