class Solution {
public:
	/**
	* ʹ�ò��������㷨�����������򣬲���������������
	* @param data int����һά����
	* @param dataLen int data���鳤��
	* @return int����vector
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