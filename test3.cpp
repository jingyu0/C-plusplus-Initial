#include<iostream>
using namespace std;
#include<string>
string my_reverse(string str){
	int size = str.size();
	if (size <= 0){
		return NULL;
	}
	if (size>100){
		return NULL;
	}
	int i = 0;
	int j = size - 1;
	char tmp;
	while (i < j){
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++; j--;
	}
	int k = 0;//用来保存每个单词起始地位置
	for (int i = 0; i < size; i++){
		if (str[i] == ' '){
			int n = k, m = i - 1;
			while (n < m){
				tmp = str[n];
				str[n] = str[m];
				str[m] = tmp;
				n++; m--;
			}
			k = i + 1;
		}
	}
	return str;
}
int main(){
	string str = "i like beijing.";
	string s = my_reverse(str);
	cout << s << endl;
	system("pause");
	return 0;
}
