//�ַ�����Ƭ
/**
* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
*
* @param str string�ַ���
* @return int����
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

//��������
class Solution {
public:
	/**
	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
	*
	* @param matrix int����vector<vector<>>
	* @return int����vector
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
			//����
			for (int i = left; i <= right; ++i)
				ans.push_back(matrix[under][i]);
			if (++under>down)
				break;
			//����
			for (int i = under; i <= down; ++i)
				ans.push_back(matrix[i][right]);
			if (--right<left)
				break;
			//����
			for (int i = right; i >= left; --i)
				ans.push_back(matrix[down][i]);
			if (--down<under)
				break;
			//����
			for (int i = down; i >= under; --i)
				ans.push_back(matrix[i][left]);
			if (++left>right)
				break;
		}
		return ans;
	}
};

//�����������
import java.util.*;
public class Solution {
	/**
	* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
	*
	* @param arr int����һά����
	* @param k int���� ����0��Ϊ1�ĸ���
	* @return int����
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