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

//����������
///��Ŀ������  (exp1 ? exp2 : exp3)
//int main()
//{
//	int a = 100;
//	int b = 200;
//	int Max = 0;
//	Max = (a > b ? a : b);//(exp1 ? exp2 : exp3)���1�Ľ��Ϊ�棬�������ʽ�Ľ��Ϊ2����Ϊ3
//	/*if (a > b)
//		Max = a;
//	else Max = b;*/
//
//	printf("%d", Max);
//	return 0;
//}
///���ű��ʽ exp1, exp2, exp3, -- expN ������Ҳ���Ը������ʽ��

///�±����ò�����[]
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	printf("%d\n", arr[2]);// -[]�±����ò�����
//	return 0;
//}

///�������ò�����
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
//	int sum = Add(a, b);//()--�������ò�����
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int a = 0;//4���ֽ� 32bitλ
//	int b = ~a;
//	//~ -- ����2���ƣ�λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//ԭ�� ���� ���� (ԭ�� --����λ��������λ��λȡ��-- ���� -- +1 -- ���룩
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001 (���λΪ����λ��1Ϊ����0Ϊ������
//	printf("%d\n", b);//ʹ�õģ���ӡ�����������ԭ��
//
//	return 0;
//}
//ֻҪ���������ڴ��д���Ķ��Ƕ����ƵĲ���
//����-- ԭ�뷴�벹����ͬ


///++��--ǰ�ú���
//int main()
//{
//	int a = 10;
//	//int b = a++; //����++, ��ʹ�ã���++ ��a=11 b=10)
//	//int b = ++a; //ǰ��++����++�� ��ʹ��  (a=11 b=11)
//	//int b = a-- //����--�� ��ʹ�� ��-- ��a=9 b=10)
//	printf("a = %d b = %d\n", a, b);
//		return 0;
//}

//int main()
//{
//	int a = (int)3.14;//ǿ������ת��
//		printf("%d\n", a);
//	return 0;
//}

// ��=���ڲ��Բ����  ==���ڲ������

///�߼�������&& ||
//int main()
//{
//	//�� - ��0
//	//�� - 0
//	//&& - �߼���(��������棩
//	//|| - �߼��򣨶�������棩
//	int a = 0;
//	int b = 1;
//	int c = a || b;
//	//int c = a && b;
//		printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//register int a = 10;//�����a����ɼĴ�������
//	//int ����ı������з��ŵ�
//	//signed int;	= int;
//	//unsigned int num = 1;
//
//	//typedef - ���Ͷ��� - �����ض���
//	typedef unsigned int Fuck;//��unsigned int ������ΪFuck��FuckҲ��Ϊ��������
//	unsigned int num = 20;
//	Fuck num2 = 20;
//	return 0;
//}

///�ؼ���static:���������α����ͺ�����
//static ���ξֲ�����
//�ֲ��������������ڱ䳤

//static����ȫ�ֱ���
//�ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��

//static���κ���
//Ҳ�Ǹı��˺�����������-��׼ȷ
//static���κ����ı��˺�������������
//�ⲿ�������� -> �ڲ���������

//�����ⲿ����
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
//	//extern - �����ⲿ����
//	extern int g_val;
//	printf("%d\n", g_val);
//}


//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�������a��ֵ�뿪�����򱾸���������static�ӳ�
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

//������ʵ��
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////��Ķ���
//#define MAX(X, Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//����
//	int c = Max (a, b);
//	printf("%d\n", c);
//	c = MAX(a, b);
//	printf("%d\n", c);
//	return 0;
//}

