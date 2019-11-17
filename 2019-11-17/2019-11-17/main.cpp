////井字棋
//class Board {
//public:
//	bool checkWon(vector<vector<int> > board) {
//		// write code here
//		int rows = board.size();
//		int cols = board[0].size();
//		//判断一行
//		for (int i = 0; i<rows; i++)
//		if (board[i][0] == board[i][1] &&
//			board[i][1] == board[i][2] &&
//			board[i][0] == 1)
//			return true;
//
//		//判断一列
//		for (int j = 0; j<cols; j++)
//		if (board[0][j] == board[1][j] &&
//			board[1][j] == board[2][j] &&
//			board[0][j] == 1)
//			return true;
//		//判断主对角线
//		if (board[2][0] == board[1][1] &&
//			board[1][1] == board[0][2] &&
//			board[2][0] == 1)
//			return true;
//
//		//判断副对角线
//		if (board[0][0] == board[1][1] &&
//			board[1][1] == board[2][2] &&
//			board[0][0] == 1)
//			return true;
//		return false;
//	}
//};


//密码强度等级
#include <iostream>
#include<stdlib.h>
#include <string>
using namespace std;
int main()
{
	string password;
	while (getline(cin, password))
	{
		int score = 0;
		//密码长度得分        
		if (password.size() <= 4){
			score += 5;
		}
		else if (password.size() >= 8){
			score += 25;
		}
		else{
			score += 10;
		}
		//字母、数字、符号统计        
		int Alpha = 0, alpha = 0, number = 0, number_count = 0, ch = 0, ch_count = 0;
		for (int i = 0; i<password.size(); i++)
		{
			if (password[i] >= 'a' && password[i] <= 'z'){
				alpha = 1;
			}
			else if (password[i] >= 'A' && password[i] <= 'Z'){
				Alpha = 1;
			}
			else if (isdigit(password[i])){
				number = 1;
				number_count++;
			}
			else{
				ch = 1;
				ch_count++;
			}
		}
		//字母得分        
		if ((alpha == 1 && Alpha == 0) || (alpha == 0 && Alpha == 1)){
			score += 10;
		}
		else if (alpha == 1 && Alpha == 1){
			score += 20;
		}
		//数字得分        
		if (number_count>1){
			score += 20;
		}
		else if (number){
			score += 10;
		}
		//符号得分       
		if (ch_count>1){
			score += 25;
		}
		else if (ch){
			score += 10;
		}
		//奖励得分       
		if (Alpha && alpha && number && ch){
			score += 5;
		}
		else if ((Alpha || alpha) && number && ch){
			score += 3;
		}
		else if ((Alpha || alpha) && number){
			score += 2;
		}
		if (score >= 90){
			cout << "VERY_SECURE" << endl;
		}
		else if (score >= 80){
			cout << "SECURE" << endl;
		}
		else if (score >= 70){
			cout << "VERY_STRONG" << endl;
		}
		else if (score >= 60){
			cout << "STRONG" << endl;
		}
		else if (score >= 50){
			cout << "AVERAGE" << endl;
		}
		else if (score >= 25){
			cout << "WEAK" << endl;
		}
		else{
			cout << "VERY_WEAK" << endl;
		}
	}
	system("pause");
	return 0;
}