#include<iostream>
#include<algorithm>
#include<vector>
typedef long long LL;
const int N = 1000000;
using namespace std;
//暴力求解
//int Number(int n){
//	vector<int> v;
//	//2，3，5
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(5);
//	int id = n - 1;
//	if (id > 2 && id < 12){
//		for (int i = 0; i < 3; i++){
//			for (int j = 0; j < 3; j++){
//				v.push_back(2);
//				v[id] += v[i] * 10 + v[j];
//				id++;
//			}
//		}
//	}
//	
//	else if (id >= 12){
//		//到三位数
//		for (int z = 0; z < 3; z++){
//			for (int i = 0; i < 3; i++){
//				for (int j = 0; j < 3; j++){
//					v[id] += v[z] * 100 + v[i] * 10 + v[j];
//					id++;
//				}
//			}
//		}
//	}
//	return v[id];
//}
//int main(){
//	int n;
//	while (cin >> n){
//		int ret = Number(n);
//		cout << ret << endl;
//	}
//	return 0;
//}


//打印进表
int nums[N];
int cnt = 0;
bool only_234(LL n){
	while (n){
		//将每一位都为2、3或5的数打印到一张表中
		if (n % 10 != 2 && n % 10 != 5 && n % 10 != 3){
			return false;
		}
		n /= 10;
	}
	return true;
}
void init(){
	for (int i = 2; i < N; i++){
		if (only_234(i)){
			nums[cnt++] = i;
		}
	}
}

int main(){
	init();
	int n;
	while (cin >> n){
		cout << nums[n - 1] << endl;
	}
	system("pause");
	return 0;
}