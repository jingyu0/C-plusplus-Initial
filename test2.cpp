////��ƻ��
////1.���������ڵ�������������Է�������������С�ڻ����ƽ������ƻ���ѣ�ѡ��һ���ɣ����ܱ�2����
////2.���������ƽ����
////3.������ƻ���ѵ�ƻ���Ƶ�С��ƽ������ƻ���ѣ�����ƶ�����
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	int n, a[100];
//	cin >> n;
//	int sum = 0;
//	int avar = 0;
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//		sum += a[i];
//	}
//	if ((sum % n) != 0)
//	{
//		cout << -1 << endl;
//		return 0;
//	}
//	avar = sum / n;
//	for (int i = 0; i < n; i++)
//	{
//		//������2ȥ���룬ʹ��������ƽ���������ֵ����ÿһ���˵�ƻ�����������    
//		if (1 == ((avar - a[i]) & 0x01))
//		{
//			cout << -1 << endl;
//			return 0;
//		}
//		else if (avar >= a[i])
//		{
//			count += (avar - a[i]) / 2;
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}