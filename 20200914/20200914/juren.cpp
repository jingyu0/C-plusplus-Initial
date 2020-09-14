class Solution {
public:
	/**
	* 使用插入排序算法进行数组排序，并返回排序后的数组
	* @param data int整型一维数组
	* @param dataLen int data数组长度
	* @return int整型vector
	*/
	vector<int> insertSort(int* data, int dataLen) {
		// write code here
		int i, j;
		vector<int> tep(dataLen);
		for (int i = 0; i<dataLen; ++i)
		{
			tep[i] = data[i];
			int temp = data[i];
			for (j = i - 1; j >= 0; --j)
			{
				if (temp<tep[j]){
					tep[j + 1] = tep[j];
				}
				else
					break;
			}
			tep[j + 1] = temp;
			cout << tep[i] << endl;
		}
		return tep;
	}
};