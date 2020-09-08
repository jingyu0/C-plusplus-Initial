#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> cer(10);
	vector<int> maxtast(10);
	int i = 0;
	while (cin >> cer[i]){
		i++;
		if (cin.get() == '\n'){
			break;
		}
	}
	int j = 0;
	while (cin >> maxtast[j]){
		j++;
		if (cin.get() == '\n'){
			break;
		}
	}
	if (cer.size() == 0 || maxtast.size() == 0)
		return 0;
	int len = cer.size();
	int len1 = maxtast.size();
	//sort(cer.begin(), cer.end());
	//sort(maxtast.begin(), maxtast.end());
	int count = 0;
	for (int i = 0; i < len;){
		if (cer[i++] == 0){
			break;
		}
		for (int j = i; j < len1; j++){
			if (cer[i] == maxtast[j]){
				count += 1;
				i++;
			}
			if (maxtast[j] == 0){
				break;
			}
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}