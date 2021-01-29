#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int a = Max(num1, num2);
//	printf("%d\n", a);
//	return 0;
//}

//条件操作符
///三目操作符  (exp1 ? exp2 : exp3)
//int main()
//{
//	int a = 100;
//	int b = 200;
//	int Max = 0;
//	Max = (a > b ? a : b);//(exp1 ? exp2 : exp3)如果1的结果为真，整个表达式的结果为2否则为3
//	/*if (a > b)
//		Max = a;
//	else Max = b;*/
//
//	printf("%d", Max);
//	return 0;
//}
///逗号表达式 exp1, exp2, exp3, -- expN （逗号也可以隔开表达式）

///下标引用操作符[]
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	printf("%d\n", arr[2]);// -[]下标引用操作符
//	return 0;
//}

///函数引用操作符
//int Add(int x , int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()--函数调用操作符
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int a = 0;//4个字节 32bit位
//	int b = ~a;
//	//~ -- 按（2进制）位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码 反码 补码 (原码 --符号位不变其它位按位取反-- 反码 -- +1 -- 补码）
//	//复数在内存中存储的时候，存储的是二进制的补码
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001 (最高位为符号位，1为负数0为正数）
//	printf("%d\n", b);//使用的，打印的是这个数的原码
//
//	return 0;
//}
//只要是整数，内存中储存的都是二进制的补码
//正数-- 原码反码补码相同


///++与--前置后置
//int main()
//{
//	int a = 10;
//	//int b = a++; //后置++, 先使用，再++ （a=11 b=10)
//	//int b = ++a; //前置++，先++， 再使用  (a=11 b=11)
//	//int b = a-- //后置--， 先使用 再-- （a=9 b=10)
//	printf("a = %d b = %d\n", a, b);
//		return 0;
//}

//int main()
//{
//	int a = (int)3.14;//强制类型转换
//		printf("%d\n", a);
//	return 0;
//}

// ！=用于测试不相等  ==用于测试相等

///逻辑操作符&& ||
//int main()
//{
//	//真 - 非0
//	//假 - 0
//	//&& - 逻辑与(有真就是真）
//	//|| - 逻辑或（都真才是真）
//	int a = 0;
//	int b = 1;
//	int c = a || b;
//	//int c = a && b;
//		printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//register int a = 10;//建议把a定义成寄存器变量
//	//int 定义的变量是有符号的
//	//signed int;	= int;
//	//unsigned int num = 1;
//
//	//typedef - 类型定义 - 类型重定义
//	typedef unsigned int Fuck;//将unsigned int 重命名为Fuck，Fuck也成为了类型名
//	unsigned int num = 20;
//	Fuck num2 = 20;
//	return 0;
//}

///关键字static:是用来修饰变量和函数的
//static 修饰局部变量
//局部变量的生命周期变长

//static修饰全局变量
//改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用

//static修饰函数
//也是改变了函数的作用域-不准确
//static修饰函数改变了函数的链接属性
//外部链接属性 -> 内部链接属性

//声明外部函数
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//int main()
//{
//	//extern - 声明外部符号
//	extern int g_val;
//	printf("%d\n", g_val);
//}


//void test()
//{
//	static int a = 1;//a是一个静态的局部变量，a的值离开作用域本该舍弃但因static延长
//	a++;
//	printf("%d\n", a);//2 3 4 5 6	
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//函数的实现
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////宏的定义
//#define MAX(X, Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数
//	int c = Max (a, b);
//	printf("%d\n", c);
//	c = MAX(a, b);
//	printf("%d\n", c);
//	return 0;
//}

