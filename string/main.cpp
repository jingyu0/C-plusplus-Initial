#define _CRT_SECURE_NO_WARNINGS
#include<assert.h>
#include"string.h"
#include<iostream>
using namespace std;

	class String
	{
	public:
		typedef char* iterator;

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}

		String(char* str = "")
		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 1];

			strcpy(_str, str);
		}

		// copy(s1)
		String(const String& s)
			:_str(nullptr)
			, _size(0)
			, _capacity(0)
		{
			String tmp(s._str);
			Swap(tmp);
		}
		// copy = s2;
		String& operator=(String s)
		{
			this->Swap(s);
			return *this;
		}

		void Swap(String& s)
		{
			swap(_str, s._str);
			swap(_size, s._size);
			swap(_capacity, s._capacity);
		}


		~String()
		{
			if (_str)
			{
				delete[] _str;
				_size = 0;
				_capacity = 0;
			}
		}

		bool operator<(const String& s);

		bool operator>(const String& s);

		bool operator<=(const String& s);

		bool operator>=(const String& s);

		bool operator==(const String& s);

		bool operator!=(const String& s);


		void Reserve(size_t n)
		{
			if (n > _capacity)
			{
				char* tmp = new char[n + 1];
				strcpy(tmp, _str);
				delete[]_str;
				_str = tmp;
				_capacity = n;
			}
		}

		void PushBack(char ch)
		{
			if (_size == _capacity)
			{
				size_t newcapacity = _capacity == 0 ? 15 : _capacity * 2;
				Reserve(newcapacity);
			}
			_str[_size] = ch;
			_str[_size] = '\0';
			++_size;
		}

		// "hello"  "xxxxxxxxxxxxxxxxxxxxxxxxxx"
		void Append(const char* str)
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				Reserve(_size + len);
			}
			strcpy(_str + _size, str);
			_size += strlen(str);
		}

		String& operator+=(char ch)
		{
			PushBack(ch);
			return *this;
		}
		String& operator+=(const char* str)
		{
			Append(str);
			return *this;
		}
		/*	void Insert(size_t pos, char ch);
		{
		assert(pos <= _size)
		size_t end = _size - 1;
		while (end >=pos)
		{
		_str[end + 1] = _str[end];
		--end;
		}
		}*/
		void Insert(size_t pos, char ch)
		{
			assert(pos <= _size);
			if (_size == _capacity)
			{
				size_t newcapacity = _capacity == 0 ? 15 : _capacity * 2;
				return Reserve(newcapacity);
			}
			size_t  end = _size + 1;
			while (end >= pos)
			{
				_str[end] = _str[end - 1];
				--end;
			}
			_str[pos] = ch;
			_size++;
			_str[_size] = '\0';
		}
		void Insert(size_t pos, const char* str)
		{
			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				Reserve(_size + len);
			}
			size_t end = _size;
			while (end > pos)
			{
				_str[end - 1 + len] = _str[end - 1];
				--end;
			}
			while (*str)
			{
				_str[pos++] = *str++;
			}
			_size += len;
			_str[_size] = '\0';
		}

		void Erase(size_t pos, size_t len)
		{
			assert(pos);
			if (pos + len >= _size)
			{
				_size = pos;
				_str[_size] = '\0';
			}
			else
			{
				for (size_t i = pos + len; i < _size; ++i)
				{
					_str[pos++] = _str[i];
				}
				_size -= len;
				_str[_size] = '\0';
			}
		}
		size_t Find(char ch, size_t pos = 0)
		{
			for (size_t i = pos; i < _size; ++i)
			{
				if (ch == _str[i])
				{
					return i;
				}
			}
			return npos;
		}
		size_t Find(const char* str, size_t pos = 0)
		{
			/*const char* start = strstr(_str + pos, str);
			if (start)
			{
			return start - _str;
			}
			else
			{
			return npos;
			}*/
			size_t begin = pos;
			int len = strlen(str);
			while (begin < _size)
			{
				int j = 0;
				char* arr = _str + begin;
				while (j < len)
				{
					if (arr[j] == str[j])
						j++;
					else
						break;
				}
				if (j == len)
					return begin;
			}
		}

		char* strstr(char* str, char* sub)
		{
			char*pstr = str, *psub = sub;
			while (*pstr)
			{
				if (*pstr == *psub)
				{
					char* matchstr = pstr,
						*matchsub = psub;
					while (*matchsub && (*matchsub++ == *matchstr++))
					{
						if (*matchsub == '\0')
							return pstr;
						++pstr;
					}
				}
			}
		}

		char* c_str()
		{
			return _str;
		}

		char& operator[](size_t pos)
		{
			//assert(pos < _size);

			return _str[pos];
		}

		size_t Size()
		{
			return _size;
		}

		size_t Capacity()
		{
			return _capacity;
		}

	private:
		char* _str;
		size_t _size;
		size_t _capacity;

		static size_t npos;
	};
	size_t String::npos = -1;

	void TestString1()
	{
		String s1("hello");
		String s2("world");
		String copy(s1);
		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;
		cout << copy.c_str() << endl;

		copy = s1 = s2;

		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;
		cout << copy.c_str() << endl;

		String::iterator it = s1.begin();
		while (it != s1.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto e : s1)
		{
			cout << e << " ";
		}
		cout << endl;
	}
	void TestString2()
	{
		String s1("hello");
		s1.PushBack('w');
		cout << s1.c_str() << endl;
	}

int main()
{
	TestString2();
	system("pause");
}
