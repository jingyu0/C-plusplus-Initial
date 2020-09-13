//#include<iostream>
//using namespace std;
//
//void cal(char *str, int *next, int len){
//	next[0] = -1;
//	int k = -1;
//	for (int q = 1; q<len - 1; q++){
//		while (k>-1 && str[k + 1] != str[q])
//		{
//			k = next[k];
//		}
//		if (str[k + 1] == str[q])
//		{
//			k = k + 1;
//		}
//		next[q] = k;
//	}
//}
//int KMP(char *str, int n, char* sen, int m){
//	int *next = new int[m];
//	cal(sen, next, m);
//	int k = -1;
//	for (int i = 0; i<n; i++){
//		while (k>-1 && sen[k + 1] != str[i])
//			k = next[k];
//		if (sen[k + 1] == str[i]){
//			k = k + 1;
//		}
//		if (k == m - 1){
//			return i - m + 1;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int n, m;
//	char* str = "helloworld";
//	char* sen = "hello\nworld\nowo";
//	/*cin >> n >> m;
//	cin >> str;*/
//	int count;
//	for (int i = 0; i<m; i++){
//		//cin >> sen;
//		//char c = getchar();
//		//while (c == '\n'){
//		//	i++;
//		//}
//		count = KMP(str, n, sen, m);
//	}
//	int sum = 0;
//	sum += count;
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}