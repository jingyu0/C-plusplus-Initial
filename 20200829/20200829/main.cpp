////�����ֵ���
////#include<iostream>
////using namespace std;
////inline int max(int a, int b){
////	return (a > b) ? a : b;
////}
////int maxvalue(int vv[101][101], int m, int n){
////	int temp[101][101] = { 0 };
////	for (int i = 0; i<m; i++){
////		for (int j = 0; j<n; j++){
////			if (i == 0 && j == 0)
////				temp[i][j] = vv[0][0];
////			else if (i == 0)
////				temp[i][j] = temp[i][j - 1] + vv[i][j];
////			else if (j == 0)
////				temp[i][j] = temp[i - 1][j] + vv[i][j];
////			else
////				temp[i][j] = max(temp[i - 1][j], temp[i][j - 1]) + vv[i][j];
////			//cout << temp[i][j] << " ";
////		}
////	}
////	return temp[m - 1][n - 1];
////}
////int main(){
////	int m, n;
////	cin >> m;
////	if (cin.get() == ',')
////		cin >> n;
////	//cin >> m >> "," >> n;
////	int vv[101][101];
////	//vector<vector<int>> vv;
////	//vv[3][3] = {{2,3,1},{1,5,1},{4,2,1}};
////	for (int i = 0; i<m; i++){
////		for (int j = 0; j<n; j++){
////			cin >> vv[i][j];
////		}
////	}
////	//���½��ƶ�  ������
////	int x = maxvalue(vv, m, n);
////	cout << x << endl;
////	system("pause");
////	return 0;
////}
//
////#include<iostream>
////using namespace std;
////void QuickSort(int arr[], int left, int right){
////	if (left > right){
////		return;
////	}
////	int i = left;
////	int j = right;
////	int base = arr[left];
////	while (i != j){
////		while (arr[j] >= base && i < j){
////			//��С�ڻ�׼�㣨��һ���ڵ㣩�������ŵ���׼�����
////			j--;
////		}
////		while (arr[i] <= base &&i < j){
////			//�Ҵ��ڻ�׼�㣨��һ���ڵ㣩�������ŵ���׼���ұ�
////			i++;
////		}
////		if (i < j){
////			int temp = arr[i];
////			arr[i] = arr[j];
////			arr[j] = temp;
////		}
////	}
////	arr[left] = arr[i];
////	arr[i] = base;
////
////	QuickSort(arr, left, i - 1);
////	QuickSort(arr, i + 1, right);
////}
////int main(){
////	int n;
////	int arr[1000];
////	cin >> n;
////	//int arr[9] = { 25, 84, 21, 47, 15, 27, 68, 35, 20 };
////	//n==9
////	cin >> arr[0];
////	for (int i = 1; i < n; i++){
////		if (cin.get() == ',')
////			cin >> arr[i];
////	}
////	QuickSort(arr, 0, n-1);
////	for (int i = 0; i < n-1; i++){
////		cout << arr[i] << ",";
////	}
////	cout << arr[n-1] << endl;
////	system("pause");
////	return 0;
////}
//
//
///**
//*
//* �ַ�������
//*       ˼·������java��������ʽ���»��߳���2���滻��һ���»��ߣ�  *             ���жϹ��˺���ַ���ǰ���Ƿ���һ���»��ߣ������һ������
//*/
//public class Main {
//	public static void main(String[] args) {
//		Scanner sc = new Scanner(System.in);
//		String s = sc.nextLine();
//		String str = s.replaceAll("[_]{2,}", "_");
//		if (str.charAt(0) == '_') {
//			str = str.substring(1, str.length());
//		}
//		if (str.charAt(str.length() - 1) == '_') {
//			str = str.substring(0, str.length() - 1);
//		}
//		System.out.println(str);
//	}
//}
//
//
///**
//*
//* �ֽ�������
//*
//* ˼·��
//*  1. ��������һ������k��k��ֵ������С����2��ע�����kӦ������Ϊ���Ա���������������ڷ����У������εݹ���÷�***����ջ�ڴ����
//*  2. �������ǡ�õ���n������ֽ��ѽ���
//*  3. ��n>k����n�ܱ�k�������ȴ�ӡkֵ������n����k������Ϊ�µ�n��Ȼ��ݹ�ִ��
//*  4. ��n���ܱ�k����������k+1��Ϊk��ֵ��Ȼ��ݹ�ִ��
//*/
//public class Main {
//	private static int k = 2;
//	public static void main(String[] args) {
//		Scanner sc = new Scanner(System.in);
//		int n = sc.nextInt();
//		f(n);
//	}
//
//	public static void f(int n) {
//		while (k <= n) {
//			if (k == n) {
//				System.out.print(n);
//				break;
//			}
//			else if (n > k && n % k == 0) {
//				System.out.print(k + "*");
//				n = n / k;
//				f(n);
//				break;
//			}
//			else if (n > k && n % k != 0) {
//				k = k + 1;
//				f(n);
//				break;
//			}
//		}
//	}
//}