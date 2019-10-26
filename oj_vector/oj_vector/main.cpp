////ɾ�����������е��ظ���
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		int len = nums.size();
//		if (len <= 1)
//			return len;
//
//		int k = 0;
//		for (int i = 1; i < len; ++i) {
//			if (nums[k] != nums[i]) {
//				nums[++k] = nums[i];
//			}
//		}
//		return k + 1;
//	}
//};


//ֻ����һ�ε��� ii
//���ǰ����������ֵ�ÿһλ�ۼ�������3ȡ�࣬ʣ�µĽ�������Ǹ����������λ�ϵ�����.
//�ö����Ʊ�ʾ�Ĺ���Ϊ00->01->10->00, ��a �� b����ʾһ��ʼ��״̬��ʮλ�͸�λ��
//b = b ^ r & ~a;
//a = a ^ r & ~b;
//�տ�ʼ��ʱ��a��b����0������������1��ʱ��b����Ϊ1��a����Ϊ0������01��״̬��
//�ٴ�����1��ʱ��b����Ϊ0��a����Ϊ1������10��״̬���ٴ�����1��ʱ��b����Ϊ0��
//a����Ϊ0������00��״̬���൱�������ˣ��������Ľ��������b�С�

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int a = 0, b = 0;
		for (int i = 0; i < nums.size(); ++i) {
			b = (b ^ nums[i]) & ~a;
			a = (a ^ nums[i]) & ~b;
		}
		return b;
	}
};



