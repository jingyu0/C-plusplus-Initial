////����ģʽ
//class singleton{
//private:
//	//static��̬��ԱĿ����Ϊ�������ж���ʹ��ͬһ����Դ
//	//volatile �ؼ�����Ϊ�˷�ֹ�����������Ż�
//	volatile static int*_data;
//	int *get_instance(){
//		mutex.lock();
//		if (_data == NULL){
//			_data = new int;
//			mutex.unlock();
//		}
//		return _data;
//	}
//};
//
////���üӼ��˳����ӷ�
////�ڼ����У��������ȫ�����У�
////���������Ƶ���ӽ������һ�������ʵ�ֵģ�
////���������ƵĽ�λ�������һ��������ʵ�ֵġ�
//class Solution {
//public:
//	int Add(int num1, int num2)
//	{
//		while (num2 != 0)
//		{
//			// �������ƻ��ڵ�λ��1������ת��Ϊ�޷�������
//			int res = ((unsigned int)(num1 & num2)) << 1;
//			num1 ^= num2;
//			num2 = res;
//		}
//		return num1;
//	}
//};

////��̬��̨��
//class Solution {
//public:
//	int jumpFloorII(int number) {
//		if (number == 0||number==1)
//			return 1;
//		else if (number == 2)
//			return 2;
//		else
//			return 2*jumpFloorII(number - 1);
//	}
//};

//������ջ��ʵ��һ�����У���ɶ��е�Push��Pop������ �����е�Ԫ��Ϊint���͡�
class Solution
{
public:
	void push(int node) {
		stack1.push(node);
	}

	int pop() {
		if (stack2.empty()) {
			while (!stack1.empty()) {
				stack2.push(stack1.top());
				stack1.pop();
			}
		}
		int ret = stack2.top();
		stack2.pop();
		return ret;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};