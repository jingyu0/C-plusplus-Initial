//
//void TestString1()
//{
//	//// 注意：string类对象支持直接用cin和cout进行输入和输出
//	string s("hello!");
//	//cout << s.length() << endl;//6
//	//cout << s.size() << endl;//6
//	//cout << s.capacity() << endl;//15
//	//cout << s << endl;
//
//	//s.clear();
//	//cout << s.size() << endl;//0
//	//cout << s.capacity() << endl;//15
//
//	////将s中有效字符的个数增加到10个，多出位置用'a'进行填充
//	//s.resize(10, 'a');
//	//cout << s.size() << endl;//10
//	//cout << s.capacity() << endl;//15
//	//cout << s << endl;//"hello!aaaa"
//
//	////将s中有效字符的个数增加到15个，多出的位置用缺省值'\0'进行填充
//	//s.resize(15);
//	//cout << s.size() << endl;//15
//	//cout << s.capacity() << endl;//15
//	//cout << s << endl;//"hello"
//
//	//s.resize(5);
//	//cout << s.size() << endl;//5
//	//cout << s.capacity() << endl;//15
//	//cout << s << endl;
//
//	//s.resize(100);
//	//cout << s.size() << endl;//100
//	//cout << s.capacity() << endl;//111
//	///*cout << s << endl;*/
//
//	//s.resize(50);
//	//cout << s.size() << endl;//50
//	//cout << s.capacity() << endl;//111
//	/*cout << s << endl;*/
//}
//
////char& operator[](size_t pos)
////{
////	return _str[pos];
////}
//
//////返回pos位置的字符，非const string类对象调用
////const char& operator[](size_t pos)const
////
////void TestString2()
////{
////	    void push_back(char c) //在字符串后尾插字符c
////		string& append(const char* s); //在字符串后追加一个字符串
////		string& operator+=(const string& str)//在字符串后追加字符串str
////		string& operator+=(const char* s) //在字符串后追加C个数字符串
////		string& operator+=(char c) //在字符串后追加字符c
////		const char* c_str()const  //返回C格式字符串
////		//从字符串pos位置开始往后找字符c，返回该字符在 字符串中的位置
////		size_t ﬁnd(char c, size_t pos = 0)const
////		//从字符串pos位置开始往前找字符c，返回该字符在 字符串中的位置
////		size_t rﬁnd(char c, size_t pos = npos)
////		//在str中从pos位置开始，截取n个字符，然后将其返回
////		string substr(size_t pos = 0, size_t n = npos)const
////}
//
//void TestString3()
//{
//	string str;
//	str.push_back(' ');
//	// 在str后插入空格
//	str.append("hello");
//	// 在str后追加一个字符"hello"    
//	str += 'w';           
//	// 在str后追加一个字符'w'       
//	str += "orld";          
//	// 在str后追加一个字符串"orld"    
//	cout<<str<<endl;    
//	cout<<str.c_str()<<endl;   
//	// 以C语言的方式打印字符串    
//
//	// 获取file的后缀    
//	string file1("string.cpp");    
//	size_t pos = file1.rfind('.');    
//	string suffix(file1.substr(pos, file1.size()-pos));    
//	cout << suffix << endl;        
//	// npos是string里面的一个静态成员变量    
//	// static const size_t npos = -1; 
//
//	// 取出url中的域名
//	string url("http://www.cplusplus.com/reference/string/string/find/");    
//	cout << url << endl;    
//	size_t start = url.find("://");    
//	if (start == string::npos)    
//	{        
//		cout << "invalid url" << endl;       
//		return;    
//	}    
//	start += 3;    
//	size_t finish = url.find('/', start);   
//	string address = url.substr(start, finish - start);   
//	cout << address << endl;        
//	// 删除url的协议前缀    
//	pos = url.find("://");   
//	url.erase(0, pos+3);    
//	cout<<url<<endl;
//}
//
//// 利用reserve提高插入数据的效率，避免增容带来的开销 
//void TestPushBack() 
//{    string s;    
//     size_t sz = s.capacity();   
//     cout << "making s grow:\n";   
//     for (int i = 0; i < 100; ++i)    
//    {        
//		 s += 'c';        
//         if (sz != s.capacity())        
//      {            
//	     sz = s.capacity();            
//	     cout << "capacity changed: " << sz << '\n';        
//      }    
//    } 
//}
//
//void TestPushBack_P() 
//{
//	string s;     
//	s.reserve(100);   
//	size_t sz = s.capacity();       
//	cout << "making s grow:\n";    
//	for (int i = 0; i < 100; ++i)    
//	{
//		s += 'c';        
//		if (sz != s.capacity())        
//		{
//			sz = s.capacity();
//			cout << "capacity changed: " << sz << '\n'; 
//		}
//	}
//}
//
//
//
//int main()
//{
//	////构造空字符串
//	//string();
//	////用C-string来构造string类对象
//	//string(const char* s);
//	////string类对象中包含n个字符的c
//	//string(size_t n, char c);
//	////拷贝构造函数
//	//string(const string&s);
//	////用s中前n个字符构造新的string类对象
//	//string(const string&s, size_t n);
//
//	//void testString()
//	//{
//	//	string s1;//构造空的string类对象s1
//	//	string s2("hello bet");//用C的格式字符串构造string类对象S2
//	//	string s3(10, 'a');//用10个字符‘a'构造string类对象s3
//	//	string s4(s2);//拷贝构造s4
//	//	string(s3, 5);//用s3中前5个字符构造string对象s5
//	//}
//
//	//size_t size() const;// 返回字符串有效字符长度
//	//size_t length() const;// 返回字符串有效字符长度
//	//size_t capacity() const;// 返回空间总大小
//	//bool empty() const;// 检测字符串释放为空串，是返回true，否则返回false
//	//void clear();// 清空有效字符
//	//void resize(size_t n, char c);// 将有效字符的个数该成n个，多出的空间用字符c填充
//	//void resize(size_t n);// 将有效字符的个数改成n个，多出的空间用0填充
//	//void reserve(size_t res_arg = 0);// 为字符串预留空间
//	// size/length/clear/resize       
//	//TestString2();
//	system("pause");
//	return 0;
//}