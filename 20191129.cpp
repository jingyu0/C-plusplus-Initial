#include <iostream>
using namespace std;


#if 0
// C ����������ת������ʽ����ת�� & ��ʽ����ת��
int main()
{
	double d = 12.34;
	int a = d;

	int* pa = &a;
	pa = (int*)&d; // ����׶Σ�ֱ�ӱ���

	cout << pa << endl;
	cout << &d << endl;

	const int c = 10;
	int* pc = (int*)&c;
	return 0;
}
#endif


#if 0
typedef void(*FUNC)();

int DoSomething(int i)
{
	cout << "DoSomething" << endl;
	return 0;
}


void Test()
{
	//
	// reinterpret_cast���Ա�������FUNC�Ķ��巽ʽȥ����DoSomething����
	// ���Էǳ���BUG������ת������ָ��Ĵ����ǲ�����ֲ�ģ����Բ�����������
	// C++����֤���еĺ���ָ�붼��һ����ʹ�ã�������������ʱ�������ȷ���Ľ��
	//
	FUNC f = reinterpret_cast<FUNC>(DoSomething);
	f();
}

int main()
{
	double d = 12.34;
	int a = static_cast<int>(d);

	int* pa = &a;
	pa = reinterpret_cast<int*>(&d);

	const int c = 10;
	int* pc = const_cast<int*>(&c); // const int*
	return 0;
}
#endif

#if 0
class Base
{
public:
	virtual void func()
	{
		cout << "Base::func()" << endl;
	}

protected:
	int _b;
};

class Derived : public Base
{
public:
	void funcD()
	{
		cout << "Derived::funcD()" << endl;
	}

protected:
	int _d;
};


// pa--->�������  pa---->����ת��Ϊ������ָ��--->�з���  ����ת��--dynamic_cast
// pa--->�������         ������ָ��ת��Ϊ����ָ��-->��ȫ ����ת��  ֧��
void fun(Base* pa)
{
	// dynamic_cast���ȼ���Ƿ���ת���ɹ����ܳɹ���ת���������򷵻�
	pa->func();  // ʵ�ֶ�̬

	Derived* pb1 = static_cast<Derived*>(pa);
	Derived* pb2 = dynamic_cast<Derived*>(pa);

	cout << "pb1:" << pb1 << endl;
	cout << "pb2:" << pb2 << endl;

	// ���paָ�����������󣬿�����Ҫ��������ĳ�Ա������һЩ��������
	
	// ԭ���ڱ����ڼ䣬������ʶ���pa��һ�������ָ��
	// ���paֻ�ܵ��û���ĳ�Ա����
	//pa->funcD();  // ����ʧ��

	// �����Ҫ����������ĺ�����ֻ�ܽ�paת��Ϊ�����ָ��
	// ���pa����ָ�����һ��������󣬴����ǰ�ȫ��
	// ���pa����ָ�����һ��������󣬴��벻��ȫ
	
	if (pb1)
		pb1->funcD();

	if (pb2)
		pb2->funcD();
}

int main()
{
	Base b;
	Derived d;

	// ��ֵ���ݹ���
	b = d;
	Base* pb = &d;
	Base& rb = d;

	Derived* pd = dynamic_cast<Derived*>(&b);


	fun(&b);
	fun(&d);

	return 0;
}
#endif

#if 0
// ���ι��캯�������߳�����һ����������������������Ĭ��ֵ�Ĺ��캯��
class Date
{
public:
	explicit Date(int year, int month=1, int day=1)
		: _year(year)
		, _month(1)
		, _day(1)
	{
		cout << "Date::Date(int):" << this << endl;
	}


	Date& operator=(const Date& d)
	{
		cout << this << "=" << &d << endl;
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}

		return *this;
	}

	~Date()
	{
		cout << "Date::~Date()" << this << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};


int main()
{
	Date d1(2019);

	// 1. ���õ��ι��캯������2020����һ����ʱ����
	// 2. �ù���õ���ʱ�����d1��ֵ
	// 3. ��ֵ��������ʱ���󽫱�����
	d1 = 2020;

	return 0;
}
#endif

#if 0
#include <vector>
#include <map>


class Date
{
public:
	explicit Date(int year, int month = 1, int day = 1)
		: _year(year)
		, _month(1)
		, _day(1)
	{
		cout << "Date::Date(int):" << this << endl;
	}


	Date& operator=(const Date& d)
	{
		cout << this << "=" << &d << endl;
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}

		return *this;
	}

	~Date()
	{
		cout << "Date::~Date()" << this << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	int a1 = 0;
	int a2(0);
	int a3{ 0 };

	int array[] = { 1, 2, 3, 4 };
	vector<int> v0(array, array+sizeof(array)/sizeof(array[0]));

	vector<int> v1{ 1, 2, 3, 4 };

	int array1[5]{1, 2, 3, 4, 5};
	int array2[]{1, 2, 3, 4, 5};


	map<string, string> m{ { "one", "1" }, {"tow", "2"} };

	int* pa = new int[10]{1,2,3,4,5,6,7,8,9,0};

	Date d1(2019);
	Date d2{ 2019, 11, 21 };

	return 0;
}
#endif

#if 0
#include <initializer_list>
namespace bite
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;

	public:
		vector()
		{
			_start = _finish = _end_of_storage = nullptr;
		}

		vector(const initializer_list<T>& il)
			: _start(new T[il.size()])
		{
			auto it = il.begin();
			_finish = _start;
			while (it != il.end())
			{
				*_finish++ = *it;
				++it;
			}

			_end_of_storage = _finish;
		}

		iterator begin()
		{
			return _start;
		}

		iterator end()
		{
			return _finish;
		}

	private:
		iterator _start;
		iterator _finish;
		iterator _end_of_storage;
	};
}

int main()
{
	bite::vector<int> v1;
	bite::vector<int> v2{ 1, 2, 3, 4 };
	
	// ��Χfor�������û�д���뷽��
	// ���Ǳ��������ջὫ��Χforת��Ϊ��������ʽ��ӡ��begin()/end()
	for (auto e : v2)
		cout << e << " ";
	cout << endl;
	
	return 0;
}
#endif

// Add(1, 2.0);
// Add(1.0, 2);

#if 0
// auto�ڷ���ֵ����λ�ò�����
template<class T1, class T2>
auto Add(const T1& left, const T2& right)
{
	return left + right;
}
#endif


#if 0
template<class T1, class T2, class T3>
void Add(const T1& left, const T2& right, T3& ret)
{
	ret = left + right;
}

int main()
{
	//cout << Add(1, 3) << endl;

	int ret = 0;
	Add(1, 3, ret);
	cout << ret << endl;
	return 0;
}
#endif

#if 0
void TestFunc(int)
{}

typedef decltype(TestFunc) PF;

void(*set_malloc_handler(void(*f)()))()
{
	return nullptr;
}

typedef decltype(set_malloc_handler) SH;

int main()
{
	short a = 32760;
	short b = 32760;

	decltype(a+b) c = a + b;
	cout << typeid(c).name() << endl;

	cout << typeid(SH).name() << endl;

	cout << typeid(decltype(set_malloc_handler(nullptr))).name() << endl;
	return 0;
}
#endif

#if 0
// ����ֵ����׷��
template<class T1, class T2>
auto Add(const T1& left, const T2& right)->decltype(left + right)
{
	return left + right;
}

int main()
{
	Add(1, 2.0);
	return 0;
}
#endif

/*
���һ����ʲô��û�ж��壬���������Զ���������Ĭ�ϵĳ�Ա������
1. ���캯��
2. �������캯��
3. ��������
4. ��ֵ�����������
5.6 ����&
*/

// ���������ɵ�Ĭ�Ϲ��캯��
// 1. �����������Ƿ������Ĭ�ϵĹ��캯����
// �𰸣���һ��,�񵥶���Date��������һ����������

// 2. ʲô����±�����һ��������Ĭ�ϵĹ��캯��
//  �𰸣������������Ҫ�����Լ��ͻ�����
// 4������
// 1: 

#if 0
class Time
{
public:
	Time()
		: _hour(0)
		, _minute(0)
		, _second(0)
	{}

private:
	int _hour;
	int _minute;
	int _second;
};

// ���캯�����ã���ʼ�����󣬲�����Ϊ���󿪱ٿռ�
// Date* pd = new Date;
class Date
{
public:
// 	Date()
// 	{}

	Date(int year){}

private:
	int _year;
	int _month;
	int _day;
	//Time _t;
};


int main()
{
	Date d;   // call Date::Date()

	return 0;
}
#endif

#if 0
// 2. �ڼ̳���ϵ�У�������ඨ�����޲εĹ��캯����������û����ʽ�����κι��캯��
// ���������������������һ��Ĭ�ϵ��޲ι��캯��
// ���ã�Ҫ�����ɵ��޲ι��캯����ʼ���б�λ�õ��û���Ĺ��캯��

class A
{
public:
	A()
	{}

};

class B : public A
{};


int main()
{
	B b;
	return 0;
}
#endif


#if 0
// �����麯�����࣬���û����ʽ�����κι��캯����������Ҳ������
class A
{
public:
	virtual void Test()
	{}
};


int main()
{
	A a;
	return 0;
}
#endif

struct Goods
{
	string _name;
	double _price;
};

#if 0
#include <algorithm>


// 1. ����ָ��: ʵ��һ���ȽϹ���
bool isLess(const Goods& g1, const Goods& g2)
{
	return g1._price < g2._price;
}


// 2. ͨ���º���
struct IsGreater
{
	bool operator()(const Goods& g1, const Goods& g2)
	{
		return g1._price > g2._price;
	}
};


// Date

// Time
int main()
{


	Goods gds[] = { { "ƻ��", 2.1 }, { "�ཻ", 3 }, { "����", 2.2 }, { "����", 1.5 } };
	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), isLess);

	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), IsGreater());
	return 0;
}
#endif

#if 0
#include <algorithm>

int main()
{
	Goods gds[] = { { "ƻ��", 2.1 }, { "�ཻ", 3 }, { "����", 2.2 }, { "����", 1.5 } };
	sort(gds, gds + sizeof(gds) / sizeof(gds[0]), [](const Goods& l, const Goods& r)
		->bool
	{
		return l._price < r._price;
	});
	return 0;
}
#endif

#if 0
int Add(int left, int right)
{
	return left + right;
}

void TestFunc()
{
	int a = 10, b = 20;
	Add(a, b);
}

int main()
{
	int a = 10, b = 20;

	// [�����б�](�����б�)->returnType{ʵ����};

	auto Add = [](int a, int b)->int{
		cout << "[](int a, int b)->int{}" << endl;
		return a + b; 
	};

	int c = 30, d = 40;
	Add(c, d);


	[]{};
	return 0;
}
#endif

#if 0
int main()
{
	int a = 10, b = 20;
	int c = 0;

	cout << &c << endl;

	// c ����ֵ�ķ�ʽ���в���
	auto Add = [c](int left, int right)mutable->int
	{
		cout << &c << endl;
		c = left + right;
		return c;
	};

	Add(a, b);

	return 0;
}
#endif

#if 0
int main()
{
	int a = 10, b = 20;
	int c = 0;

	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;

	// c ����ֵ�ķ�ʽ���в���
	auto Add = [=](int left, int right)mutable->int
	{
		cout << &a << endl;
		cout << &b << endl;
		cout << &c << endl;

		c = left + right;
		return c;
	};

	Add(a, b);

	return 0;
}
#endif

#if 0
int main()
{
	int a = 10, b = 20;
	int c = 0;

	cout << &c << endl;

	// c ����ֵ�ķ�ʽ���в���
	auto Add = [&c](int left, int right)mutable->int
	{
		cout << &c << endl;
		c = left + right;
		return c;
	};

	Add(a, b);

	return 0;
}
#endif

#if 0
int main()
{
	int a = 10, b = 20;
	int c = 0;

	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;

	// c ����ֵ�ķ�ʽ���в���
	auto Add = [&](int left, int right)mutable->int
	{
		cout << &a << endl;
		cout << &b << endl;
		cout << &c << endl;

		c = left + right;
		return c;
	};

	Add(a, b);
	return 0;
}
#endif

#if 0
int main()
{
	int a = 10, b = 20;
	int c = 0;

	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;

	// =: ��ֵ�ķ�ʽ�������б���
	// a����ֵ�ķ�ʽ����a
	// a�ظ�����  �������ʱ����
	auto Add = [=, a](int left, int right)mutable->int
	{
		cout << &a << endl;
		cout << &b << endl;
		cout << &c << endl;

		c = left + right;
		return c;
	};

	Add(a, b);
	return 0;
}
#endif



#if 0
int main()
{
	int a = 10, b = 20;
	int c = 0;

	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;

	if (1)
	{
		// =: ��ֵ�ķ�ʽ�������б���
		// &a�������õķ�ʽ����a
		//auto Add = [=, &a](int left, int right)mutable->int
		auto Add = [&, a](int left, int right)mutable->int
		{
			cout << &a << endl;
			cout << &b << endl;
			cout << &c << endl;

			c = left + right;

			return c;
		};

		Add(a, b);
	}
	
	return 0;
}
#endif

#if 0
//auto Add = [](int a, int b)->int{ return a + b; };

int main()
{
	Add(10, 20);

	return 0;
}
#endif

//

#if 0
int g_a = 10;
int main()
{
	int a = 10;
	int b = 20;

	auto Add = [a, b](int left, int right)->int{ return left + right; };
	Add(10, 20);

	return 0;
}
#endif

#if 0
// ����һ��û�в�����û�з���ֵ���͵ĺ���ָ�����
void(*PF)();


//main::<lambda_70cf8d9e75d81d4fee39ed2f2f0febe9>& main::<lambda_70cf8d9e75d81d4fee39ed2f2f0febe9>::operator=(const main::<lambda_70cf8d9e75d81d4fee39ed2f2f0febe9> &);
// main::<A>& operator=(const main::<A>);

int main()
{
	auto f1 = []{cout << "hello world" << endl; };
	auto f2 = []{cout << "hello world!" << endl; };
	// �˴��Ȳ�����ԭ�򣬵�lambda���ʽ�ײ�ʵ��ԭ����󣬴�Ҿ������
	//f1 = f2; // ����ʧ��--->��ʾ�Ҳ���operator=()
	// ����ʹ��һ��lambda���ʽ��������һ���µĸ���
	
 	auto f3(f2);
 	f3();
 	// ���Խ�lambda���ʽ��ֵ����ͬ���͵ĺ���ָ��
 	PF = f2;
 	PF();
	return 0;
}
#endif

#if 0
class Rate
{
public:
	Rate(double rate) : _rate(rate)
	{}

	double operator()(double money, int year)
	{
		return money * _rate * year;
	}
private:
	double _rate;
};


int main()
{
	// ��������
	double rate = 0.49;
	Rate r1(rate);
	r1(10000, 2);

	// lamber
	auto r2 = [rate](double monty, int year)->double
	{
		return monty*rate*year; 
	};

	r2(10000, 2);
	return 0;
}
#endif

#if 0
int main()
{
	const int& cra = 10;
	return 0;
}
#endif


#if 0
// C++98: ���ø���
// C++11: ��ֵ����: Ҳ��һ��������ֻ��������ֵ
int Test()
{
	int a = 10;
	return a;
}

int main()
{
	int a = 10;
	int& ra = a;

	a = 10;
	cout << &a << endl;

	// int&& rra = a;  // ����ʧ�ܣ���Ϊa����ֵ
	int&& rra = 10;


	const int c = 20;
	// cout << &c << endl;
	//const int&& rrc = c;

	int b1 = 1, b2 = 2;
	// b1 + b2 = 10;
	// &(b1 + b2);

	// b1+b2�ı��ʽ�������ֵ
	int&& rrb = b1 + b2;
	
	// ++b1���ʽ�������ֵ
	//++b1 = 20;

	//Test() = 10;
	//(&Test());
	int&& rt = Test();

	int t = Test();
	return 0;
}
#endif

#if 0
/*
��ֵ�� 1.���ܷ��ڸ�ֵ����������
      2.����ȡ&
	  3.��Щ���ʽ�Ľ����������ֵ��a+b
	  4.��Щ�����ķ���ֵ�����
	  int  Test()
	  {
	      int a = 10;
		  return a;
	  }

	  ֻ�ܽ�����Ϊ�ж��Ƿ�Ϊ��ֵ�Ĳο�
*/


int& Test(int& a)
{
	a = 10;
	return a;
}

int main()
{
	int b = 0;
	Test(b) = 100;
	return 0;
}
#endif

#if 0
class Test
{
public:
	Test()
	{
		cout << "Test():" << this << endl;
	}

	Test(const Test& t)
	{
		cout << "Test(const Test&):" << this << endl;
	}

	Test& operator=(const Test& t)
	{
		cout << this << "=" << &t << endl;
		return *this;
	}

	~Test()
	{
		cout << "~Test():"<<this << endl;
	}
};

Test func(Test t)
{
	Test temp;
	temp = t;
	return temp;
}

void TestFunc()
{
	Test t1;
	Test t2(t1);
	t2 = func(t1);
}

int main()
{
	TestFunc();
	return 0;
}
#endif

#if 0
int main()
{
	int&& ra = 10;

	int b = 10;
	// int&& rb = b; 
	int&& rb = move(b);  // ��һ����ֵת��Ϊ��ֵ

	return 0;
}
#endif

class String
{
public:
	String(const char* str = "")
	{
		if (nullptr == str)
			str = "";

		_str = new char[strlen(str) + 1];
		strcpy(_str, str);
	}


	String(const String& s)
		: _str(new char[strlen(s._str) + 1])
	{
		strcpy(_str, s._str);
	}

	// �ƶ����죺��s�е���Դת�Ƹ���ǰ����
	String(String&& s)
		: _str(s._str)
	{
		s._str = nullptr;
	}

	String& operator=(const String& s)
	{
		if (this != &s)
		{
			char* str = new char[strlen(s._str) + 1];
			strcpy(str, s._str);
			delete[] _str;
			_str = str;
		}

		return *this;
	}

	// �ƶ���ֵ
	String& operator=(String&& s)
	{
		if (this != &s)
		{
			delete[] _str;
			_str = s._str;
			s._str = nullptr;
		}

		return *this;
	}

	~String()
	{
		if (_str)
		{
			delete[] _str;
			_str = nullptr;
		}
	}

	String operator+(const String& s)
	{
		char* str = new char[strlen(_str) + strlen(s._str) + 1];
		strcpy(str, _str);
		strcat(str, s._str);

		String strRet(str);
		return strRet;
	}

	char& operator[](size_t index)
	{
		return _str[index];
	}
private:
	char* _str;
};

#if 0
void TestString()
{
	String s1("hello ");
	String s2("world");
	String s3;
	s3 = s1 + s2;
}

int main()
{
	//TestString();

	String s1("hello");

	// move������
	String s2(move(s1));
	s1[0] = 'H';
	return 0;
}
#endif

class Person
{
public:
	Person(char* name, char* sex, int age)
		: _name(name)
		, _sex(sex)
		, _age(age)
	{}

	Person(const Person& p)
		: _name(p._name)
		, _sex(p._sex)
		, _age(p._age)
	{}

#if 0
	Person(Person&& p)
		: _name(p._name)
		, _sex(p._sex)
		, _age(p._age)
	{}
#else
		Person(Person&& p)
		: _name(move(p._name))
		, _sex(move(p._sex))
		, _age(p._age)
	{}
#endif
private:
	String _name;
	String _sex;
	int _age;
};

Person GetTempPerson()
{
	Person p("prety", "male", 18);
	return p;
}

int main()
{
	Person p(GetTempPerson());
	return 0;
}


