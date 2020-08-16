#include<iostream>
#include<vector>
using namespace std;
int Reverse(int number){
	int sum = 0, s;
	if (number == 0){
		return 0;
	}
	else if (number >= 0){
		while (number != 0){
			sum = sum * 10;
			s = number % 10;
			number /= 10;
			sum += s;
		}
		return sum;
	}
}

int main(){
	int num;
	while (cin >> num){
		vector<int>v;
		int count = 0;
		for (int i = 1; i < num; i++){
			int tmp = Reverse(i);
			if (tmp == (i * 4)){
				count++;
				v.push_back(i);
				v.push_back(i * 4);
			}
		}
		cout << count << endl;
		if (count == 0){
			cout << 0 << endl;
		}
		else{
			for (int i = 0; i < v.size(); i+=2){
				cout << v[i] << " " << v[i+1];
				cout << endl;
			}
		}
		system("pause");
		return 0;
	}
}