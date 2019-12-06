class Solution {
public:
	vector<int> printMatrix(vector<vector<int> > matrix) {
		int row = matrix.size();
		int col = matrix[0].size();
		vector<int> res;
		int circle = ((row<col ? row : col) - 1) / 2 + 1;
		for (int i = 0; i != circle; i++){
			//从左到右
			for (int j = i; j != col - i; j++){
				res.push_back(matrix[i][j]);
			}
			//从上到下
			for (int k = i + 1; k != row - i; k++){
				res.push_back(matrix[k][col - i - 1]);
			}
			//从右到左
			for (int m = col - i - 2; (m >= i) && (row - i - 1 != i); m--){
				res.push_back(matrix[row - i - 1][m]);
			}
			//从下往上
			for (int n = row - i - 2; (n>i) && (col - i - 1 != i); n--){
				res.push_back(matrix[n][i]);
			}
		}
		return res;

	}
};
