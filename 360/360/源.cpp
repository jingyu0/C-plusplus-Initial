//题1：合法名字
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int hfmz(vector<string> v1){
//	if (v1.empty()){
//		return 0;
//	}
//	int n = 0;
//	bool flag = true;
//	for (int i = 0; i < v1.size(); i++){
//		flag = true;
//		string temp = v1[i];
//		if (temp.size()>10)
//		{
//			continue;
//		}
//		for (int j = 0; j < temp.size(); j++){
//			if (isalpha(temp[j]))
//			{
//				j++;
//				continue;
//			}
//			else{
//				flag = false;
//				break;
//			}
//		}
//		if (flag){
//				n++;
//		}
//	}
//	return n;
//}
//int main(){
//	int m;
//	cin >> m;
//	vector<string> v;
//	for (int i = 0; i < m; i++)
//	{
//		string str;
//		cin >> str;
//		v.push_back(str);
//	}
//	cout << hfmz(v);
//	return 0;
//}

