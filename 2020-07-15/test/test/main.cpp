#include<iostream>
using namespace std;
class singleton{
private:
	//静态成员目的是为了让所有对象使用同一份资源
	//volatile关键字是为了防止编译器过度优化
	static int *_data;
};
int main()
{
	return 0;
}