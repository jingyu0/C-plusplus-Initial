//����һ���������飬ʵ��һ�����������������������ֵ�˳��ʹ�����е�����λ�������ǰ�벿�֣�
//���е�ż��λ������ĺ�벿�֣�����֤������������ż����ż��֮������λ�ò��䡣//������
//����˼·��
//�����ԭ���ǲ���Ҫ��֤��żλ�ò���ġ�
//�������������󣬽������Ҳ�Ƚ϶࣬�����ý��ŷ�ʽ���һ�£����һ�²��������˼��

class Solution {
public:
	void reOrderArray(vector<int> &array) {
		int k = 0;
		for (int i = 0; i < array.size(); ++i){
			if (array[i] & 1){ //�������ң�ÿ�������ģ�������ǰ���������һ������Ҫ������k
				�±괦
					int temp = array[i]; //�ֽ���ǰ������������
				int j = i;
				while (j > k){ //��������֮ǰ������(ż������)���������һ��λ��
					array[j] = array[j - 1];
					j--;
				}
				array[k++] = temp; //���������������������ڵ�λ�ã���Ϊ�����Ǵ������ҷ�
				�ģ�û�п�Խ����������һ�������λ�ò����
			}
		}
	}
};public class Solution {
	public void reOrderArray(int[] array) {
		int k = 0;
		for (int i = 0; i < array.length; i++){
			if ((array[i] & 1) == 1){
				int temp = array[i];
				int j = i;
				while (j > k){
					array[j] = array[j - 1];
					j--;
				}
				array[k++] = temp;
			}
		}
	}
}