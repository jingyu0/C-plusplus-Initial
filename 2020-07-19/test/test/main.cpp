////单例模式
//class singleton{
//private:
//	//static静态成员目的是为了让所有对象使用同一份资源
//	//volatile 关键字是为了防止编译器过度优化
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
////不用加减乘除做加法
////在计组中，半加器、全加器中：
////两个二进制的相加结果是用一个异或门实现的；
////两个二进制的进位结果是用一个与门来实现的。
//class Solution {
//public:
//	int Add(int num1, int num2)
//	{
//		while (num2 != 0)
//		{
//			// 负数左移会在低位补1，所以转化为无符号整数
//			int res = ((unsigned int)(num1 & num2)) << 1;
//			num1 ^= num2;
//			num2 = res;
//		}
//		return num1;
//	}
//};

////变态跳台阶
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

//用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。
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