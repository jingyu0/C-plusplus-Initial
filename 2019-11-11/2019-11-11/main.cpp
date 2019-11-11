#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

////1.下面描述正确的是
//int *p1 = new int[10]; // 10个未初始化int
//int *p2 = new int[10](); // 10个值初始化为0的int
////内置类型，new只分配内存，后面加(), 相当于调用它的构造函数，所以值全部初始化为0；
////自定义类型，只要调用new，那么编译器不仅仅给它分配内存，还调用它的默认构造函数初始化，即使后面没有加()。
////p1申请的空间里的值是随机值，p2申请的空间里的值已经初始化
//
//2.下面的程序可以从0....n - 1中随机等概率的输出m个不重复的数。这里我们假设n远大于m
//void knuth(int n, int m)
//{
//	srand((unsigned int)time(0));
//	for (int i = 0; i < n; i++) {
//		if (rand() % (n - i)<m) {
//			cout << i << endl;
//			(m--);
//		}
//	}
//}
//int main()
//{
//	knuth(10,5);
//	system("pause");
//	return 0;
//}
//为了方便解释假设n等于10，m等于5：
//第一次rand() % (n - 0)的余数范围是0~9, 有可能小于m(= 5)，可以输出i = 0；随后i++, m--
//第二次rand() % (n - 1)的余数范围是0~8, 有可能小于m(= 4)，可以输出i = 1；随后i++, m--
//...
//第五次rand() % (n - 4)的余数范围是0~5, 有可能小于m(= 1)，可以输出i = 4；随后i++, m--得到i = 5, m = 0
//第六次rand() % (n - 5)的余数范围是0~4, 不可能小于m(= 0)，算法结束。
//倘若rand() % (n - i) <= m，则第六次还满足条件，意味着多输出的一次；
//而rand() % (n - i) >= m，将会因为判断条件不满足而提早退出。

//3.以下prim函数的功能是分解质因数。括号内的内容应该为？
//void prim(int m, int n)
//{
//	if (m >= n)
//	{
//		while (m%n) n++;
//		(m /= n);
//		prim(m, n);
//		cout << n << endl;
//	}
//} 

//4.
//enum string{
//	x1,
//	x2,
//	x3 = 10,
//	x4,
//	x5,
//} x;
//函数外部访问x等于什么？  0
//全局变量时初始化为0，局部变量时初始化为随机值。

//5.unsigned char *p1;
//unsigned long *p2;
//p1 = (unsigned char *)0x801000;
//p2 = (unsigned long *)0x810000;
//请问p1 + 5 = 什么？  801005
//p2 + 5 = 什么？   810014
   
//
//6.在32位机器中，如下代码：
//void example(char acWelcome[]){
//	printf("%d", sizeof(acWelcome));
//	return;
//}
//void main(){
//	char acWelcome[] = "Welcome to Huawei Test";
//	example(acWelcome);
//	return;
//}
//4
//32位系统是4 64位系统是8，数组作为函数的参数是会退化为函数指针的，想想看，数组作为函数参数的时候经常是需要传递数组大小的

//7.虚函数也是类的成员函数
//虚函数和函数重载都实现了C += 的多态性，但表现形式不一样，函数重载调用根据参数个数、参数类型等进行区分，而虚函数则是根据动态联编来确定调用什么
//函数重载可以是类的成员函数也可以是非成员函数, 比如:
//int fun(int a);
//int fun(int a, int b);
//这就是非成员重载，虚函数必须是成员函数了，否则就失效了

//10.下面程序运行后的结果为：
//char str[] = "glad to test something";
//char *p = str;
//p++;
//int *p1 = reinterpret_cast<int *>(p);
//p1++;
//p = reinterpret_cast<char *>(p1);
//printf("result is %s\n", p);

//result is to test something
//该题的关键是要认清楚强制类型转换后指针的类型。
//p的类型为char *，p++后p指向str数组的第2个元素即字母“l”的位置。
//p1的类型为int *，p1++后p1指向的位置增加4个字节，指向str数组中的第6个元素即字母“t”的位置。
//因此最后p的内容为“to test something”。

//11.设已经有A, B, C, D4个类的定义，程序中A, B, C, D析构函数调用顺序为？
//C c;
//void main()
//{
//	A*pa = new A();
//	B b;
//	static D d;
//	delete pa;
//}
//A B D C
//这道题主要考察的知识点是 ：全局变量，静态局部变量，局部变量空间的堆分配和栈分配
//
//其中全局变量和静态局部变量时从 静态存储区中划分的空间，
//二者的区别在于作用域的不同，全局变量作用域大于静态局部变量（只用于声明它的函数中），
//而之所以是先释放 D 在释放 C的原因是， 程序中首先调用的是 C的构造函数，然后调用的是 D 的构造函数，析构函数的调用与构造函数的调用顺序刚好相反。
//
//局部变量A 是通过 new 从系统的堆空间中分配的，程序运行结束之后，系统是不会自动回收分配给它的空间的，需要程序员手动调用 delete 来释放。
//
//局部变量 B 对象的空间来自于系统的栈空间，在该方法执行结束就会由系统自动通过调用析构方法将其空间释放。
//
//之所以是 先 A  后 B 是因为，B 是在函数执行到 结尾 "}" 的时候才调用析构函数， 而语句 delete a; 位于函数结尾 "}" 之前。

//13.在Java中，以下关于方法重载和方法重写描述正确的是？
//方法重写的返回值类型必须相同或相容。（或是其子类）
//方法重载的返回值的类型可以不同，因为判断方法重载的方法主要是根据方法的参数不同来判定；
//方法重写的返回值类型需要相同，重写就是子类继承了父类的方法，并在此方法上重写属于自己的特征，既然是继承过来的，那么它的返回值类型就必须要相同

//14.下列给定程序中，函数fun的功能是:求ss所指字符串数组中长度最短的字符串所在的行下标，作为函数值返回，并把其串长放在形参n所指的变量中。
//ss所指字符串数数组中共有M个字符串，且串长小于N。
//请在程序的下画线处填入正确的内容并将下画线删除，使程序得出正确的结果。
//试题程序。
//#define M 5
//#define N 20
//int fun(char(*ss)[N], int *n)
//{
//	int i, k = 0, len = N;
//	for (i = 0; i < __M____; i++)// 这里是要遍历数组，数组的长度为M，
//	{
//		len = strlen(ss[i]);
//		if (i == 0)
//			*n = len;
//		if (len __<__ * n)// 这里是取最小的长度，
//		{
//			*n = len;
//			k = i;
//		}
//	}
//	return (__k___); // 函数返回最小长度字符串的下标，这里为k
//}
//main()
//{
//	char ss[M][N] = { "shanghai", "guangzhou", "beijing", "tianjing", "chongqing" };
//	int n, k, i;
//	printf("\nThe originalb stringsare:\n");
//	for (i = 0; i < M; i++)
//		puts(ss[i]);
//	k = fun(ss, &n);
//	printf("\nThe length of shortest string is: % d\n", n);
//	printf("\nThe shortest string is: % s\n", ss[k]);
//}

//16.In the main() function, after ModifyString(text) is called, what’s the value of ‘text’ ?
//int FindSubString(char* pch)
//{
//	int   count = 0;
//	char  * p1 = pch;
//	while (*p1 != '\0')
//	{
//		if (*p1 == p1[1] - 1)
//		{
//			p1++;
//			count++;
//		}
//		else  {
//			break;
//		}
//	}
//	int count2 = count;
//	while (*p1 != '\0')
//	{
//		if (*p1 == p1[1] + 1)
//		{
//			p1++;
//			count2--;
//		}
//		else  {
//			break;
//		}
//	}
//	if (count2 == 0)
//		return(count);
//	return(0);
//}
//void ModifyString(char* pText)
//{
//	char  * p1 = pText;
//	char  * p2 = p1;
//	while (*p1 != '\0')
//	{
//		int count = FindSubString(p1);
//		if (count > 0)
//		{
//			*p2++ = *p1;
//			sprintf(p2, "%i", count);
//			while (*p2 != '\0')
//			{
//				p2++;
//			}
//			p1 += count + count + 1;
//		}
//		else  {
//			*p2++ = *p1++;
//		}
//	}
//}
//void main(void)
//{
//	char text[32] = "XYBCDCBABABA";
//	ModifyString(text);
//	printf(text);
//}
////XYBCDCBA1BAA
//
//17.下面程序的功能是输出数组的全排列,请填空.
//void perm(int list[], int k, int m)
//{
//	if ()
//	{
//		copy(list, list + m, ostream_iterator<int>(cout, " "));
//		cout << endl;
//		return;
//	}
//	for (int i = k; i <= m; i++)
//	{
//		swap(&list[k], &list[i]);
//		();
//		swap(&list[k], &list[i]);
//	}
//}
//k == m 和 perm（list，k + 1，m）
//for循环的作用是为先把index值为k的元素后面的元素一次与index为k的元素交换, 相当于得到index为k的元素可能的取值情况，
//然后使用递归得到index为k + 1的元素位置可能的所有取值。然而对index为k的位置元素进行取值的时候，
//操作过后需要还原避免取下一个值的时候错误,因此就有了第二个swap操作。
//由上分析可知, 第一个空格应该为k == m，当index值到了m的时候输出即可，因为index为m后面已经没有元素与其进行对调.
//
//18.写出下列程序的运行结果。
//#include "stdio.h"
//int sum(int a)
//{
//	auto int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//}
////8，10，12，14，16，
//auto int 表示的是局部变量，在我们声明局部变量，或者函数参数，可以加上这个关键字，表明是分配在堆栈中
//本程序中的变量b声明为static静态全局变量，所以它的作用域是全局作用域，每次调用sum函数都会累加2

//19.运行时的输出结果是（）
//#include<iostream>
//using namespace std;
//class MyClass
//{
//public:
//	MyClass(int i = 0)
//	{
//		cout << i;
//	}
//	MyClass(const MyClass &x)
//	{
//		cout << 2;
//	}
//	MyClass &operator=(const MyClass &x)
//	{
//		cout << 3;
//		return *this;
//	}
//	~MyClass()
//	{
//		cout << 4;
//	}
//};
//int main()
//{
//	MyClass obj1(1), obj2(2);
//	MyClass obj3 = obj1;
//	return 0;
//}
////122444
//关键是区分 浅 / 深拷贝操作 和 赋值操作 :
//没有重载 = 之前：
//A a;
//A b;
//a = b;
//这里是赋值操作。
//A a;
//A b = a;
//这里是浅拷贝操作。
//
//重载 = 之后：
//A a;
//A b;
//a = b;
//这里是深拷贝操作（当然这道题直接返回了，通常我们重载赋值运算符进行深拷贝操作）。
//A a;
//A b = a;
//这里还是浅拷贝操作。
//
//所以 MyClass obj3 = obj1; 调用的是拷贝构造函数。
//
//如果写成 MyClass obj3; obj3 = obj1; 输出的结果就是 1203444

//20.如下代码输出结果是什么？
//#include<stdio.h>
//char *myString()
//{
//	char buffer[6] = { 0 };
//	char *s = "Hello World!";
//	for (int i = 0; i < sizeof(buffer)-1; i++)
//	{
//		buffer[i] = *(s + i);
//	}
//	return buffer;
//}
//int main(int argc, char **argv)
//{
//	printf("%s\n", myString());
//	return 0;
//}
////以上全部不正确
//函数char *myString()中没有使用new或者malloc分配内存，所有buffer数组的内存区域在栈区
//随着char *myString()的结束，栈区内存释放，字符数组也就不存在了，所以会产生野指针，输出结果未知