////��2
//#include<iostream>
//using namespace std;
//int main(){
//	int sz[10000];
//	//int sz2[10000];
//	int n, res;
//	//n������  res��
//	cin >> n >> res;
//	int temp[10000];
//	for (int i = 0; i < res; i++){
//		cin >> sz[i];
//		//������
//		int m = 1;
//		if (sz[i] == 1)
//		{
//			//��ͷ��β��ֵ
//			for (int j = 0; j < n; j++){
//				temp[j] = m;
//				m++;
//			}
//			int x;
//			x = temp[0];
//			for (int j = 1; j < n; j++){
//				temp[j - 1] = temp[j];//������ǰ�ƶ�һλ
//			}
//			temp[n - 1] = x;
//			//�ٽ����еĵ�1�����Ƶ�ĩβ��
//			//���÷���һ
//		}
//		else{
//			for (int i = 0; i < n; i += 2){
//				swap(temp[i], temp[i + 1]);
//			}
//		}
//		//���÷���2
//		//�ڽ������еĵ�1�������2��������3�������4������...����N - 1�������N����
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << temp[i] << " ";
//	}
//	system("pause");
//	return 0;
//}

