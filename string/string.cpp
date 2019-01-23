

//#pragma once
//#include<iostream>
//using namespace std;
//namespace bit
//{
//	class String
//	{
//	public:
//		typedef char* iterator;
//
//		iterator begin()
//		{
//			return _str;
//		}
//
//		iterator end()
//		{
//			return _str + _size;
//		}
//
//		String(char* str = "")
//		{
//			_size = strlen(str);
//			_capacity = _size;
//			_str = new char[_capacity + 1];
//
//			strcpy(_str, str);
//		}
//
//		// copy(s1)
//		String(const String& s)
//			:_str(nullptr)
//			, _size(0)
//			, _capacity(0)
//		{
//			String tmp(s._str);
//			this->Swap(tmp);
//		}
//		// copy = s2;
//		String& operator=(String s)
//		{
//			this->Swap(s);
//			return *this;
//		}
//
//		void Swap(String& s)
//		{
//			swap(_str, s._str);
//			swap(_size, s._size);
//			swap(_capacity, s._capacity);
//		}
//
//
//		~String()
//		{
//			if (_str)
//			{
//				delete[] _str;
//				_size = 0;
//				_capacity = 0;
//			}
//		}
//
//		bool operator<(const String& s);
//		bool operator>(const String& s);
//		bool operator<=(const String& s);
//		bool operator>=(const String& s);
//		bool operator==(const String& s);
//		bool operator!=(const String& s);
//
//		void Reserve(size_t n);
//
//		void PushBack(char ch)
//		{
//			// ?
//			_str[_size] = ch;
//			++_size;
//		}
//
//		// "hello"  "xxxxxxxxxxxxxxxxxxxxxxxxxx"
//		void Append(const char* str)
//		{
//			// ?
//			strcpy(_str + _size, str);
//			_size += strlen(str);
//		}
//
//		String& operator+=(char ch);
//		String& operator+=(const char* str);
//		void Insert(size_t pos, char ch);
//		void Insert(size_t pos, const char* str);
//
//		void Erase(size_t pos, size_t len);
//		size_t Find(char ch, size_t pos = 0);
//		size_t Find(const char* str, size_t pos = 0);
//
//
//		char* c_str()
//		{
//			return _str;
//		}
//
//		char& operator[](size_t pos)
//		{
//			//assert(pos < _size);
//
//			return _str[pos];
//		}
//
//		size_t Size()
//		{
//			return _size;
//		}
//
//		size_t Capacity()
//		{
//			return _capacity;
//		}
//
//	private:
//		char* _str;
//		size_t _size;
//		size_t _capacity;
//
//		static size_t npos;
//	};
//
//	size_t String::npos = -1;
//
//	void TestString1()
//	{
//		String s1("hello");
//		String s2("world");
//		String copy(s1);
//		cout << s1.c_str() << endl;
//		cout << s2.c_str() << endl;
//		cout << copy.c_str() << endl;
//
//		copy = s1 = s2;
//
//		cout << s1.c_str() << endl;
//		cout << s2.c_str() << endl;
//		cout << copy.c_str() << endl;
//
//		String::iterator it = s1.begin();
//		while (it != s1.end())
//		{
//			cout << *it << " ";
//			++it;
//		}
//		cout << endl;
//
//		for (auto e : s1)
//		{
//			cout << e << " ";
//		}
//		cout << endl;
//	}
//}