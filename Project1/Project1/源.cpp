//#include<iostream>
//using namespace std;
//int max(int dp[101][101],int m, int n){
//	return dp[n-2][0] + dp[0][n-2];
//}
//int main(){
//	int m, n;
//	int dp[101][101];
//	while (cin >> m >> n){
//		for (int i = 0; i < m; i++){
//			for (int j = 0; j < n; j++){
//				cin >> dp[i][j];
//			}
//		}
//		cout << max(dp, m, n) << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
//	string str;
//	cin >> str;
//	int len = str.size();
//	int count = 0;
//	int begin = 0;
//	for (int i = 0; i < len; i++){
//		if (str[i] == 'n'){
//			count++;
//		}
//	}
//	for (int i = 0; i <= count; i++){
//		int temp;
//		for (int j = begin; j < len; j++){
//			if (str[j] == 'n'){
//				temp = j;
//				break;
//			}
//			cout << str[j];
//		}
//		cout << endl;
//		if (i != count){
//			cout << 'N';
//			begin = temp + 1;
//		}
//	}
//	system("pause");
//	return 0;
//}

//QuickSort
#include<iostream>
using namespace std;
//��������O(n2) ƽ����ʱ�临�Ӷ�O(N*lgN)
//���Ų��õ��Ƿ��η����б����ģ�����һ�ö������������������Ƕ���������ȣ�lg(N+1)
//���ȶ��㷨��  
//�ȶ��㷨---�����������д���a[i]=a[j],��������֮ǰ��a[i]��a[j]ǰ�棻��������֮��a[i]��Ȼ��a[j]֮ǰ������������㷨���ȶ��ġ�
void QuickSort(int arr[], int left, int right){
	if (left > right){
		return;
	}
	int i = left;
	int j = right;
	int base = arr[left];
	while (i != j){
		while (arr[j] >= base && i < j){
			//��С�ڻ�׼�㣨��һ���ڵ㣩�������ŵ���׼�����
			j--;
		}
		while (arr[i] <= base && i < j){
			//�Ҵ��ڻ�׼�㣨��һ���ڵ㣩�������ŵ���׼���ұ�
			i++;
		}
		if (i < j){
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}

	arr[left] = arr[i];
	arr[i] = base;
	
	QuickSort(arr, left, i - 1);
	QuickSort(arr, i + 1, right);
}
int main(){ 
	int arr[10] = { 3, 4, 5, 1, 2, 6, 7, 8, 5, 1 };
	QuickSort(arr, 0, 9);
	for (int i = 0; i < 10; i++){
		cout << arr[i];
	}
	cout << endl;
	system("pause");
	return 0;
}