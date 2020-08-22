////题2
//#include<iostream>
//using namespace std;
//int main(){
//	int sz[10000];
//	//int sz2[10000];
//	int n, res;
//	//n个数字  res次
//	cin >> n >> res;
//	int temp[10000];
//	for (int i = 0; i < res; i++){
//		cin >> sz[i];
//		//新数组
//		int m = 1;
//		if (sz[i] == 1)
//		{
//			//从头到尾数值
//			for (int j = 0; j < n; j++){
//				temp[j] = m;
//				m++;
//			}
//			int x;
//			x = temp[0];
//			for (int j = 1; j < n; j++){
//				temp[j - 1] = temp[j];//依次向前移动一位
//			}
//			temp[n - 1] = x;
//			//①将排列的第1个数移到末尾；
//			//调用方法一
//		}
//		else{
//			for (int i = 0; i < n; i += 2){
//				swap(temp[i], temp[i + 1]);
//			}
//		}
//		//调用方法2
//		//②交换排列的第1个数与第2个数、第3个数与第4个数、...、第N - 1个数与第N个数
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << temp[i] << " ";
//	}
//	system("pause");
//	return 0;
//}

