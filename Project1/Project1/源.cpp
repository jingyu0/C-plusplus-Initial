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
//快排最坏情况O(n2) 平均的时间复杂度O(N*lgN)
//快排采用的是分治法进行遍历的，看作一棵二叉树，遍历次数就是二叉树的深度，lg(N+1)
//不稳定算法。  
//稳定算法---假设在数列中存在a[i]=a[j],若在排序之前，a[i]在a[j]前面；并且排序之后，a[i]依然在a[j]之前，则这个排序算法是稳定的。
void QuickSort(int arr[], int left, int right){
	if (left > right){
		return;
	}
	int i = left;
	int j = right;
	int base = arr[left];
	while (i != j){
		while (arr[j] >= base && i < j){
			//找小于基准点（第一个节点）的数，放到基准点左边
			j--;
		}
		while (arr[i] <= base && i < j){
			//找大于基准点（第一个节点）的数，放到基准点右边
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