////��������ʽ�ж�
//#include <iostream>
//#include<stdlib.h>
//#include<string>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	string str[1024];
//	for (int i = 0; i<n; i++)
//		cin >> str[i];
//	bool p1 = true;
//	bool p2 = true;
//	for (int j = 1; j<n; j++)
//	{
//		if (str[j - 1]>str[j])
//			p1 = false;
//		if (str[j - 1].size()>str[j].size())
//			p2 = false;
//	}
//	if (p1&&p2)
//		cout << "both" << endl;
//	else if (p1 && (!p2))
//		cout << "lexicographically" << endl;
//	else if ((!p1) && p2)
//		cout << "lengths" << endl;
//	else
//		cout << "none" << endl;
//	system("pause");
//	return 0;
//}

//����С������
#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, m, n, c;
	int min;
	cin >> a >> b;
	m = a;
	n = b;
	while (b != 0)
	{
		//շת��������������
		c = a%b;
		a = b;
		b = c;
	}
	min = (m*n) / a;
    cout << min << endl;
    system("pause");
	return 0;
}

//��������������
#include<stdio.h>
int main()  /* ����������Լ�� */
{
	int m, n, a, b, c;

	printf("Input two integer numbers:\n");
	scanf("%d,%d", &a, &b);
	m = a; n = b;
	/* a, b����ȣ�������С����ֱ�����Ϊֹ��*/

	while (a != b)
	if (a>b)  a = a - b;

	else  b = b - a;

	printf("The largest common divisor:%d\n", a);
	printf("The least common multiple:%d\n", m*n / a);
}

//��ٷ��������������󹫱���