#pragma once
// ´«Í³
//namespace bit
//{
//	class String
//	{
//	public:
//	/*	String()
//			:_str(new char[1])
//		{
//			_str[0] = '\0';
//		}
//
//		String(char* str)
//			:_str(new char[strlen(str)+1])
//		{
//			strcpy(_str, str);
//		}*/
//
//		String(char* str = "")
//			:_str(new char[strlen(str) + 1])
//		{
//			strcpy(_str, str);
//		}
//
//		// copy(s1)
//		String(const String& s)
//			:_str(new char[strlen(s._str)+1])
//		{
//			strcpy(_str, s._str);
//		}
//
//		// copy = s2
//		String& operator=(const String& s)
//		{
//			if (this != &s)
//			{
//				delete[] _str;
//				_str = new char[strlen(s._str) + 1];
//				strcpy(_str, s._str);
//			}
//
//			return *this;
//		}
//
//		~String()
//		{
//			if (_str)
//				delete[] _str;
//		}
//
//		char* c_str()
//		{
//			return _str;
//		}
//
//		char& operator[](size_t pos)
//		{
//			return _str[pos];
//		}
//
//		size_t Size()
//		{
//			return strlen(_str);
//		}
//
//	private:
//		char* _str;
//	};
//
//	void TestString1()
//	{
//		String s1(nullptr);
//		String s2("hello");
//		s2[0] = 'x';
//
//		for (size_t i = 0; i < s2.Size(); ++i)
//		{
//			cout << s2[i] << " ";
//		}
//		cout << endl;
//
//		cout << s1.c_str() << endl;
//		cout << s2.c_str() << endl;
//	}
//
//	// Éî¿½±´
//	// Ç³¿½±´
//	void TestString2()
//	{
//		String s1("hello");
//		String copy(s1);
//		String s2("world");
//
//		cout << s1.c_str() << endl;
//		cout << copy.c_str() << endl;
//
//		copy = s2;
//		cout << copy.c_str() << endl;
//	}
//}

// ÏÖ´úÐ´·¨
//namespace bit
//{
//	class String
//	{
//	public:
//		String(char* str = "")
//			:_str(new char[strlen(str) + 1])
//		{
//			strcpy(_str, str);
//		}
//
//		// copy(s1)
//		String(const String& s)
//			:_str(nullptr)
//		{
//			String tmp(s._str);
//			swap(_str, tmp._str);
//		}
//		
//		// copy = s2
//	/*	String& operator=(const String& s)
//		{
//			if (this != &s)
//			{
//				String tmp(s._str);
//				swap(_str, tmp._str);
//			}
//
//			return *this;
//		}*/
//
//		// copy = s2;
//		String& operator=(String s)
//		{
//			swap(_str, s._str);
//			return *this;
//		}
//	
//
//		~String()
//		{
//			if (_str)
//				delete[] _str;
//		}
//
//		char* c_str()
//		{
//			return _str;
//		}
//
//		char& operator[](size_t pos)
//		{
//			return _str[pos];
//		}
//
//		size_t Size()
//		{
//			return strlen(_str);
//		}
//
//	private:
//		char* _str;
//	};
//
//	void TestString1()
//	{
//		String s1(nullptr);
//		String s2("hello");
//		s2[0] = 'x';
//
//		for (size_t i = 0; i < s2.Size(); ++i)
//		{
//			cout << s2[i] << " ";
//		}
//		cout << endl;
//
//		cout << s1.c_str() << endl;
//		cout << s2.c_str() << endl;
//	}
//
//	// Éî¿½±´
//	// Ç³¿½±´
//	void TestString2()
//	{
//		String s1("hello");
//		String copy(s1);
//		String s2("world");
//
//		cout << s1.c_str() << endl;
//		cout << copy.c_str() << endl;
//
//		copy = s2;
//		cout << copy.c_str() << endl;
//	}
//}


