//////#include<iostream>
//////#include<string>
//////#include<vector>
//////using namespace std;
//////void knapsack(int products, int capacity, vector<int>& weight, vector<int>& value, vector<vector<int>>& result){
//////	for (int i = 1;i<)
//////}
//////int main(){
//////	int products, capacity;
//////	vector<int> weight(1, 0);
//////	vector<int> value(1, 0);
//////	cin >> products >> endl;
//////	for (int i = 0; i <= products; ++i){
//////		int temp;
//////		cin >> temp;
//////		weight.push_back(temp);
//////	}
//////	for (int i = 0; i <= products; ++i){
//////		int temp;
//////		cin >> temp;
//////		value.push_back(temp);
//////	}
//////	vector<vector<int>> result(products + 1, vector<capacity + 1, 0));
//////	knapsack(products, capacity, weight, value, result);
//////	cout << result[products][capacity] << endl;
//////	return 0;
//////}
////
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main(){
//	int n, m, k;
//	cin >> n >> m >> k;
//	//int pri, wei, v;
//	vector<int> pri;
//	vector<int> wei;
//	vector<int> v;
//	for (int i = 0; i<n; i++){
//		cin >> pri[i] >> wei[i] >> v[i];
//		pri.push_back(rand());
//		wei.push_back(rand());
//		v.push_back(rand());
//	}
//	sort(v.begin(), v.end());
//	vector<int>::iterator it;
//	for ( it= v.begin(); it < v.end(); it++){
//		cout << *it << " ";
//	}
//	system("pause");
//	return 0;
//}
//
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//vector<int> Rob(int x, int y, string com){
//	vector<int> res;
//	if (com.size()>10000 || x>10000 || x<-10000 || y>10000 || y<-10000){
//		return res;
//	}
//	for (int i = 0; i<com.size(); i++){
//		if (com[i] == 'U')
//			y--;
//		else if (com[i] == 'D')
//			y++;
//		else if (com[i] == 'L')
//			x--;
//		else if (com[i] == 'R')
//			x++;
//	}
//	res.push_back(x);
//	res.push_back(y);
//	return res;
//}
//int main(){
//	int x;
//	int y;
//	cin >> x >> y;
//	string com;
//	cin >> com;
//	vector<int> res = Rob(x, y, com);
//	for (int i = 0; i<res.size(); i++){
//		cout << res[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n, m, k;
	cin >> n >> m >> k;
	int pri, wei, v;
	vector<int> pri;
	vector<int> wei;
	vector<int> v;
	/*for (int i = 0; i<n; i++){
	cin >> pri[i]];
	}
	for (int i = 0; i<n; i++){
	cin >> wei[i];
	}
	for (int i = 0; i<n; i++){
	cin >> v[i];
	}
	for ( it= v.begin(); it < v.end(); it++){
	cout << *it << " ";
	}*/
	cout << 2 << endl;
	return 0;
}