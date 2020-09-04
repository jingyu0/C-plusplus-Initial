//字符串碎片
/**
* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
*
* @param str string字符串
* @return int整型
*/
int GetFragment(char* str) {
	// write code here
	//assert(str);
	int len = strlen(str);
	char temp = str[0];
	int count = 1;
	str++;
	while (*str){
		if (*str != temp){
			temp = *str;
			count++;
		}
		str++;
	}
	return (len / count);
}

//螺旋矩阵
class Solution {
public:
	/**
	* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
	*
	* @param matrix int整型vector<vector<>>
	* @return int整型vector
	*/
	vector<int> SpiralMatrix(vector<vector<int> >& matrix) {
		// write code here
		vector<int> ans;
		if (matrix.empty())
			return ans;
		int under = 0;
		int down = matrix.size() - 1;
		int left = 0;
		int right = matrix[0].size() - 1;
		while (true){
			//向右
			for (int i = left; i <= right; ++i)
				ans.push_back(matrix[under][i]);
			if (++under>down)
				break;
			//向下
			for (int i = under; i <= down; ++i)
				ans.push_back(matrix[i][right]);
			if (--right<left)
				break;
			//向左
			for (int i = right; i >= left; --i)
				ans.push_back(matrix[down][i]);
			if (--down<under)
				break;
			//向上
			for (int i = down; i >= under; --i)
				ans.push_back(matrix[i][left]);
			if (++left>right)
				break;
		}
		return ans;
	}
};

//最长连续子数组
import java.util.*;
public class Solution {
	/**
	* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
	*
	* @param arr int整型一维数组
	* @param k int整型 允许0变为1的个数
	* @return int整型
	*/
	public int GetMaxConsecutiveOnes(int[] arr, int k) {
		// write code here
		int left = 0, right = 0, res = 0, count = 0;
		while (right<arr.length){
			if (arr[right] == 0){
				count++;
			}
			while (count>k){
				if (arr[left++] == 0)
					count--;
			}
			res = Math.max(res, right - left + 1);
			right++;
		}
		return res;
	}
}