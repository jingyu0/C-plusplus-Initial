#include <iostream>
using namespace std;

//class HeapOnly
//{
//public:
//	static HeapOnly* GetHeapObj()
//	{
//		return new HeapOnly;
//	}
//
//private:
//	HeapOnly()
//	{}
//
//	// C++98
//	//HeapOnly(const HeapOnly&);
//	// C++11
//	HeapOnly(const HeapOnly&) = delete;
//// ...
//};
//
//int main()
//{
//	//HeapOnly ho1;
//	//static HeapOnly ho2;
//	//HeapOnly* p = new HeapOnly;
//
//	HeapOnly* p1 = HeapOnly::GetHeapObj();
//	//HeapOnly copy(*p1);
//
//
//	return 0;
//}

class StackOnly
{
public:
	static StackOnly GetStackObj()
	{
		//return StackOnly();
		StackOnly so;
		return so;
	}

	//StackOnly(const StackOnly&) = delete;
	void* operator new(size_t size) = delete;
private:
	StackOnly()
	{}
};

//int main()
//{
//	StackOnly so = StackOnly::GetStackObj();
//	//static StackOnly so;
//	//StackOnly* p = new StackOnly;
//	//StackOnly* p = new StackOnly(so);
//
//
//	return 0;
//}

//// 饿汉模式
//class Singleton
//{
//public:
//	static Singleton* GetInstance()
//	{
//		static Singleton sinst;
//		return &sinst;
//	}
//
//private:
//	Singleton(const Singleton&) = delete;
//
//	Singleton()
//	{}
//	// 成员
//};
//
//int main()
//{
//	cout << Singleton::GetInstance() << endl;
//	cout << Singleton::GetInstance() << endl;
//	cout << Singleton::GetInstance() << endl;
//	cout << Singleton::GetInstance() << endl;
//
//	return 0;
//}

#include <thread>
#include <mutex>

// 懒汉模式 -> 比较复杂
class Singleton
{
public:
	static Singleton* GetInstance()
	{
		// 双检查  	// t1 // t2
		if (_sinst == nullptr) // 性能
		{
			_mtx.lock(); 
			if (_sinst == nullptr) // 安全
			{
				_sinst = new Singleton;
			}
			_mtx.unlock();
		}

		return _sinst;
	}

private:
	Singleton(const Singleton&) = delete;

	Singleton()
	{}
	// 成员
	static Singleton* _sinst;
	static std::mutex _mtx;

};

Singleton* Singleton::_sinst = nullptr;
std::mutex Singleton::_mtx;

//void func1(int* p)
//{
//	for (size_t i = 0; i < 10; ++i)
//	{
//		(*p)++;
//		cout << __LINE__ << ":" << *p << endl;
//	}
//}
//
//void func2(int* p)
//{
//	for (size_t i = 0; i < 10; ++i)
//	{
//		(*p)++;
//		cout << __LINE__ << ":" << *p << endl;
//	}
//}
//
//int main()
//{
//	// 三个线程
//	int i = 0;
//	//std::thread t1(func1, &i);
//	//std::thread t2(func2, &i);
//	func1(&i);
//	func2(&i);
//	
//	cout << __LINE__ <<":"<< i << endl;
//
//	//t1.join();
//	//t2.join();
//
//	cout << __LINE__ << ":" << i << endl;
//
//	return 0;
//}

//std::mutex mtx;
//
//void func1(int* p, int n)
//{
//	mtx.lock();
//	for (size_t i = 0; i < n; ++i)
//	{
//		(*p)++;
//		//cout << __LINE__ << ":" << *p << endl;
//	}
//	mtx.unlock();
//}
//
//void func2(int* p, int n)
//{
//	mtx.lock();
//	for (size_t i = 0; i < n; ++i)
//	{
//		(*p)++;
//		//cout << __LINE__ << ":" << *p << endl;
//	}
//	mtx.unlock();
//}

//int main()
//{
//	// 三个线程
//	int i = 0;
//	int n = 1000000;
//	std::thread t1(func1, &i, n);
//	std::thread t2(func2, &i, n);
//	//func1(&i);
//	//func2(&i);
//
//	//cout << __LINE__ << ":" << i << endl;
//
//	t1.join();
//	t2.join();
//
//	cout << __LINE__ << ":" << i << endl;
//
//	return 0;
//}
#include <windows.h>

void func1(int* p, int n)
{
	::Sleep(100);

	cout << Singleton::GetInstance() << endl;
}



int main()
{
	// 三个线程
	//int i = 0;
	//int n = 1;
	//std::thread t1(func1, &i, n);
	//std::thread t2(func1, &i, n);
	//std::thread t3(func1, &i, n);
	//std::thread t4(func1, &i, n);
	//std::thread t5(func1, &i, n);
	//std::thread t6(func1, &i, n);
	//std::thread t7(func1, &i, n);


	//t1.join();
	//t2.join();
	//t3.join();
	//t4.join();
	//t5.join();
	//t6.join();
	//t7.join();

	for (;;)
	{
		void* p = malloc(1024*100);
		cout << p << endl;
	}

	return 0;
}