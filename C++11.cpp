#include <iostream>
#include <vector>
#include <list>
#include <map>
using namespace std;

//int main()
//{
//	int a[5] = { 1, 2 };
//	//vector<int> v(a, a+5);
//	vector<int> v = {1,2,3,4};
//
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	list<int> l = { 1, 2, 3, 4 };
//
//	for (auto e : l)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	map<int, int> m = { { 1, 1 }, { 5, 5 }, { 3, 3 } };
	map<int, int> ::iterator it;
//	for (auto e: m)
//	{
//		cout << e.first << ":" << e.second << endl;
//	}
//
//	return 0;
//}

//class A
//{
//public:
//	explicit A(int a)
//		:_a(a)
//	{}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	explicit B(int b1, int b2)
//		:_b1(b1)
//		, _b2(b2)
//	{}
//private:
//	int _b1;
//	int _b2;
//};
//
//int main()
//{
//	A a1(1);
//	A a2 = 2; // C++98  单参数构造函数的类，支持的隐式类型的转换
//
//	B b1(1, 1);
//	B b2 = { 2, 2 }; // C++11  多参数构造函数的类，支持的隐式类型的转换
//
//	return 0;
//}



#include <initializer_list>
template<class T>
class Vector {
public:
	// ...    
	Vector(initializer_list<T> l) 
		: _capacity(l.size()), _size(0)
	{
		_array = new T[_capacity];
		for (auto e : l)
			_array[_size++] = e;
	}

	Vector<T>& operator=(initializer_list<T> l) {
		delete[] _array;
		size_t i = 0;
		for (auto e : l)
			_array[i++] = e;
		return *this;
	}
	// ...
private:
	T* _array;
	size_t _capacity;
	size_t _size;
};

//int main()
//{
//	auto list1 = { 1, 2, 3, 4 };
//	initializer_list<int> list2 = { 1, 2, 3, 4 };
//
//	initializer_list<int>::iterator it = list2.begin();
//	while (it != list2.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	for (auto e : list1)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	Vector<int> v1 = { 1, 2, 3 };
//
//	return 0;
//}

#include <array>

//int main()
//{
//	auto list1 = { 1, 2, 3, 4 };
//	cout << typeid(list1).name() << endl;
//
//	decltype(list1) list2;
//	cout << typeid(list2).name() << endl;
//
//	array<int, 100> a1;
//	array<int, 20> a2;
//	cout << a1.size() << endl;
//	cout << a2.size() << endl;
//
//
//
//	return 0;
//}

class A
{
public:
	A(int a)
		: _a(a)
	{}

	A() = default;
	A(const A&) = delete;

private:
	int _a = 10;
};

//int main()
//{
//	// a是左值，10是右值 (常量、临时对象等都是右值)
//	int a = 10;
//	int b = a;
//
//	// 左值引用 左值
//	int& lr1 = a;
//	// const 左值引用 右值
//	const int& lr2 = 10;
//
//	// 右值引用 右值
//	int&& rr1 = 10;
//	// 右值引用 move(左值)
//	int&& rr2 = move(a);
//
//	return 0;
//}

//int main()
//{
//	// a是一个const修饰的左值
//	const int a = 10;
//	const int& lr = a;
//	const int&& rr = move(a);
//}

class String
{
public:
	String(char* str = "")
	{
		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}

	// 拷贝构造参数 ->左值引用 
	// String s(左值)
	String(const String& s)
		: _str(new char[strlen(s._str) + 1])
	{
		cout << "String(const String& s)" << endl;
		strcpy(_str, s._str);
	}

	// 移动构造参数 ->右值引用
	// String s(将亡值string对象)
	String(String&& s)
	{
		cout << "String(String&& s)" << endl;

		_str = s._str;
		s._str = nullptr;
	}

	String& operator=(const String& s)
	{
		if (this != &s)
		{
			char* pTemp = new char[strlen(s._str) + 1];
			strcpy(pTemp, s._str);
			delete[] _str;
			_str = pTemp;
		}
		return *this;
	}

	// s1 = s2
	// 移动赋值
	String& operator=(String&& s)
	{
		swap(_str, s._str);

		return *this;
	}

	~String()
	{
		if (_str)
			delete[] _str;
	}

	// s1 += s2
	String& operator+=(const String& s)
	{
		// Append(s._str);
		return *this;
	}

	// s1 + s2
	String operator+(const String& s)
	{
		String tmp(*this);
		//tmp.Append(s._str);
		return tmp;
	}

private:
	char* _str;
};

//int main()
//{
//	//String s("hello");
//	//String copy1(s);		// 拷贝构造
//	//String move1(move(s));  // 移动构造
//
//	String s1("hello");
//	String s2("world");
//
//	String ret = s1 + s2;
//	//s1 += s2;
//
//	return 0;
//}

// 移动构造+移动赋值 =》好处，再也不怕传值返回

int main()
{
	vector<string> v;
	string s1("hello");
	v.push_back(s1);
	v.push_back(move(s1));
	vector<vector<int>> vv;
	vv.push_back({ 1 });
	vv.push_back({ 1, 2});
	vv.push_back({ 1, 2 ,3});


	return 0;
}