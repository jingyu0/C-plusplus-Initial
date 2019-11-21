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
class Date
{
public:
// 	Date()
// 	{}

private:
	int _year;
	int _month;
	int _day;
	Time _t;
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


class A
{};

class B : virtual public A
{};


int main()
{
	B b;
	return 0;
}