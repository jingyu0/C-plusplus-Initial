//ƒÍ÷’Ω±
class Bonus { 
public:    
	int dp[6][6];    
	int getMost(vector<vector<int> > board) 
	{ 
		memset(dp, 0, sizeof(dp));        
		dp[0][0] = board[0][0];        
		for (int i = 1; i < 6; i++) 
			dp[0][i] = dp[0][i - 1] + board[0][i];        
		for (int i = 1; i < 6; i++) 
			dp[i][0] = dp[i - 1][0] + board[i][0];        
		for (int i = 1; i < 6; i++) {
			for (int j = 1; j < 6; j++){
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + board[i][j];
			}
		}	
		return dp[5][5]; 
	}
};

class Bonus { 
public:     
	int getMost(vector<vector<int> > board) 
	{ 
		if (board.empty()) 
			return 0;                   
		for (int i = 1; i < 6; ++i) 
		{ 
			board[0][i] += board[0][i - 1];             
			board[i][0] += board[i - 1][0]; 
		}                   
		for (int i = 1; i < 6; ++i)
		{ 
			for (int j = 1; j < 6; ++j)
			{ 
				board[i][j] += max(board[i - 1][j], board[i][j - 1]); } 
		}     return board[5][5]; 
	} 
};