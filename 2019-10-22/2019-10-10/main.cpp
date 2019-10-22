//函数重载 & 缺省参数
#include<iostream>
#include<stdlib.h>
using namespace std;
//命名空间里即可以放变量也可以放函数；不是一个类型，而是一个作用域。
//不同作用域中的同一名字不会冲突； 命名空间可以嵌套 
//同一个工程中允许存在多个相同名称的命名空间；编译器后会合成同一个命名空间中。 

//注意：一个命名空间就定义了一个新的作用域，命名空间中的所有内容都局限于该命名空间中


//::作用域运算符  可以访问全局变量中的变量

   //namespace N {
	  // int a = 10;    
	  // int b = 20;    
	  // int Add(int left, int right)    
	  // { 
		 //  return left + right; 
	  // }

	  // int Sub(int left, int right)    
	  // { 
		 //  return left - right; 
	  // }
   //}

   //int main() {
	  // printf("%d\n", a);
	  // // 该语句编译出错，无法识别a    
	  // return 0;
   //}

   //using namespace N;
   //using N::b;
   //int main() 
   //{ 
	  // printf("%d\n", N::a);  
	  // printf("%d", b);
	  // Add(10, 20);
	  // return 0; 
   //}

//整形--%d，字符--%c

//缺省参数是声明或定义函数时为函数的参数指定一个默认值。在调用该函数时，如果没有指定实参则采用该默认值，否则使用指定的实参.

//void TestFunc(int a = 10)
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	TestFunc();
//	TestFunc(100);
//	system("pause");
//	return 0;
//}

//全缺省参数
//void TestFunc1(int a = 1,int b=2,int c=3)
//{
//	cout << a <<" "<< b <<" "<< c << endl;
//}
////半缺省参数：部分参数带有缺省值
//void TestFunc2(int a , int b = 2, int c=3)
//{
//	//1. 半缺省参数必须从右往左依次来给出，不能间隔着给
//	cout << a << " " << b << " " << c << endl;
//}
//
//int main()
//{
//	TestFunc1();
//	TestFunc1(10,20,30);
//
//	TestFunc1(10);
//	TestFunc1(10, 20);
//	//接收参数时反而从左往右给，因为函数有可能是半缺省。
//
//	TestFunc2(10, 20);
//	system("pause");
//	return 0;
//}

//2. 缺省参数不能在函数声明和定义中同时出现
//因为，如果声明与定义位置同时出现，恰巧两个位置提供的值不同，那编译器就无法确定到底该用那个 缺省值。
//3. 缺省值必须是常量或者全局变量 
//4. C语言不支持（编译器不支持）


//函数重载：函数的一种特殊情况，C++允许在同一作用域中声明几个功能类似的同名函数，
//这些同名函数的形参列表(参数个数 或 类型 或 顺序)必须不同，常用来处理实现功能类似数据类型不同的问题。

//函数重载：必须在相同的作用域，条件：函数名字必须相同，参数列表必须不同。
//与返回值类型相同无关（如果函数仅仅是返回值不同，则不为函数重载）


//int Add(int left, int right) { 
//	return left + right; 
//}
//
//double Add(double left, double right) {
//	return left + right;
//}
//
//long Add(long left, long right) { 
//	return left + right; 
//}
//
//int main() 
//{ 
//	Add(10, 20);    
//	Add(10.0, 20.0);    
//	Add(10L, 20L);        
//	return 0; 
//}


//预处理；编译；汇编；链接；可执行程序。