////引用特性：
////1.引用在定义时必须初始化
////2.一个变量可以有多个引用
////3.引用一旦引用一个实体，再不能引用其他实体
//
////引用在底层是按照指针的方式处理的
////Int& ra = a;                 T&---- - T*const
////Int* const pa = &a;
////Pa = &b;
////Const int& cra = a;                   const T&------const T*const
//
////引用和指针的区别：
////语法概念层面：引用变量只是别名，没有实际空间，与其实体共用同一块内存（有区别）
////底层实现上：引用就是指针，引用实际上是有空间---------- - 地址（无区别）
//
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
////int main()
////{
////	char c = 'c';
////	char &rc = c;
////	char *pc = &c;
////
////	//有多级指针，但是没有多级引用。
////	int** p = NULL;
////	const char&& rrc = 'c';//C++11：右值引用
////	cout << sizeof(rc) << endl; //1
////	cout << sizeof(pc) << endl; //4 32位平台下指针始终占4个字节
////	system("pause");
////	return 0;
////}
//
////1.引用在定义时必须初始化，指针没有要求。
////2.引用在初始化时引用一个实体后，就不能再引用其他实体，而指针可以在任何时候指向任何一个同类型实体。
////Int* pa = &a;    Int* const p = &a;
////Pa = &b; 错
////3.没有NULL 引用，但有NULL指针。
////4.在sizeof中含义不同：引用结果为引用类型的大小，但指针始终是地址空间所占字节个数（32位平台下占占4个字节）
////5.引用自加即引用的实体增加1，指针自加即指针向后偏移一个类型的大小。
////6.有多级指针，但是没有多级引用。
////7.访问实体方式不同，指针需要显示解引用，引用编译器自己处理。
////int main()
////{
////	int a = 10;
////	int b = 20;
////
////	int& ra = a;//int*
////	ra = 20;
////
////	int* pa = &a;
////	*pa = 20;
////
////	return 0;
////}
//////8.引用比指针使用起来相对更安全。
////
//////宏常量
//////宏函数
////#define MAX_SIZE 100
////
////struct SeqList
////{
////	int array[MAX_SIZE];
////	int _size;
////};
////
////#define PI 3.14
//////宏常量 代码可读性高  一改都改
//////缺陷  宏定义错误不好发现
////int main()
////{
////	int r = 2;
////	double s = PI*r*r;
////	system("pause");
////	return 0;
////}
////
//////C++11对宏常量缺陷修改
////int main()
////{
////	const int a = 10; 
////	//a定义为常量  
////	/*宏常量的属性（预处理阶段替换）  
////		const在编译阶段替换*/
////    //const的安全性较高
////	//int array[a];
////
////	int* pa = (int*)&a;
////
////	*pa = 100;
////	cout << a << endl; //编译阶段a直接被替换为10 尽管指针把a改为100，但打印的是10
////	cout << *pa << endl;
////	return 0;
////}
////
////#define MAX(a,b) (((a)>(b))?(a):(b))
////
////int main()
////{
////	int a = 10;
////	int b = 20;
////	cout << MAX(a, b) << endl;//20
////	cout << MAX(++b, a) << endl;//22,在比较与返回a的时候多加了一次  有时具有宏作用 不会参与编译
////	return 0;
////}
//
////内联函数
////以inline修饰的函数叫做内联函数，编译时C++编译器会在调用内联函数的地方展开，没有函数压栈的开销， 
////内联函数提升程序运行的效率；内联函数，在编译期间编译器会用函数体替换函数的调用。
//
////#include"Add.h"
////int main()
////{
////	Add(10, 20);
////	return 0;
////}
//
//// 链接错误：main.obj : error LNK2019: 无法解析的外部符号 "void __cdecl f(int)" (? f@@YAXH@Z)，该符号在函数 _main 中被引用
////所以inline不建议声明和定义分离，分离会导致链接错误。inline被展开后，就没有函数地址了，链接就会找不到，只能在当前文件使用。
//
////int main()
////{
////	auto a = 10;
////	auto b = 12.34;
////	auto c = a + b;
////
////	cout << typeid(a).name() << endl;
////	cout << typeid(b).name() << endl;
////	cout << typeid(c).name() << endl;
////	cout << c << endl;
////	
////	//auto d;  注意：无法通过编译，使用auto定义变量时必须对其进行初始化，
////	//因为，在编译阶段编译器需要根据初始化表达式来推导auto的实际类型，没有声明就无法推导。
////	//因此，auto并非是一种“类型”的声明，而是一个类型声明时的“占位符”，编译器在编译阶段会将auto替换为变量实际的类型。
////	system("pause");
////	return 0;
////}
//
////auto的使用细则 
////1. auto与指针和引用结合起来使用
////int main()
////{
////	int a = 10;
////	auto pa1 = &a;
////	auto* pa2 = &a;
////	auto& ra = a;
////
////	cout << typeid(pa1).name() << endl; //int *
////	cout << typeid(pa2).name() << endl; //int * 因为a是整形，取地址
////	//因此，auto与指针结合在一起，auto* 与auto 没有任何区别。
////
////	cout << typeid(ra).name() << endl; //int
////	//但是，auto与引用结合在一起，必须要加引用的标记。若不加与普通整形一样。
////	return 0;
////}
//
////2. 在同一行定义多个变量
//
////当在同一行声明多个变量时，这些变量必须是相同的类型，否则编译器将会报错，
////因为编译器实际只对第一个类型进行推导，然后用推导出来的类型定义其他变量。
//
////auto不能推导的场景
////1. auto不能作为函数的参数
//
////// 此处代码编译失败，auto不能作为形参类型，因为编译器无法对a的实际类型进行推导,缺省值也不行 
////void TestAuto(auto a) {}
//
////int main()
////{
////	
////	/*auto a = 1, b = 2; 
////	auto c = 10, d = 12.34;*/
////
////	return 0;
////}
//
////2. auto不能直接用来声明数组
////void TestAuto() { 
////	int a[] = { 1, 2, 3 };    
////	auto b[] = { 1, 2, 3 };
////	auto b[3] = a; 
////}
//
////3. 为了避免与C++98中的auto发生混淆，C++11只保留了auto作为类型指示符的用法 
////4. auto在实际中常见的优势用法就是跟以后会讲到的C++11提供的新式for循环，还有lambda表达式等进行配合使用。
////5. auto不能定义类的非静态成员变量 
////6. 实例化模板时不能使用auto作为模板参数
//
////基于范围的for循环(C++11)
////C++98中如果要遍历一个数组，可以按照以下方式进行
////void TestFor() { 
////	int array[] = { 1, 2, 3, 4, 5 };    
////	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)        
////		array[i] *= 2;        
////	for (int* p = array; p < array + sizeof(array) / sizeof(array[0]); ++p)        
////		cout << *p << endl; 
////}
//
////C++11中 引入了基于范围的for循环。
////for循环后的括号由冒号“ ：”分为两部分：第一部分是范围内用于迭代的变量， 第二部分则表示被迭代的范围。
//
////void TestFor() { 
////	int array[] = { 1, 2, 3, 4, 5 };    
////	for (auto& e : array)        
////		e *= 2;        
////	//使用范围for时，若要对数组中的内容进行修改，则须加引用&
////	for (auto e : array)        
////		cout << e << " ";        
////}
//
////int main() {
////	int* p1 = NULL;    
////	int* p2 = 0;        
////	// …… 
////	return 0;
////} 
////
////void TestFunc(int) { 
////	cout << "f(int)" << endl; 
////}
////
////void TestFunc (int*) { 
////	cout << "f(int*)" << endl; 
////}
////
////int main() { 
////	TestFunc(0);    
////	TestFunc(NULL);    
////	TestFunc((int*)NULL);    
////	return 0;
////}
////
//////NULL被定义成0，无法通过f(NULL)调用指针版本的f(int*)函数。
//
////C++11给出了全新的nullptr表示空值指针。
//
//typedef decltype(nullptr) nullptr_t;
////nullptr是值0，有类型的，其类型为nullptr_t，仅仅可以被隐式转化为指针类型，nullptr_t被定义在头文件中。
