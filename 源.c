#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


//斐波那契数列
//1，1，2，3，5，8，13，21，34，55...
//a, b, c  |  |
//|  a, b ,c  |
//|  |  a ,b ,c
// 迭代详解，此时a,b不需要计算，只需要c时计算a+b,大大减少运算量
//即从第三位开始的数字等于前两个数字之和

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;//若是位数小于2，则返回1
//	else
//		return Fib(n - 1) + Fib(n - 2);//若是位数大于二，则调用函数求出其前两个数，其前两个数亦可以用同样方法求得，如此往复
//}

//废弃稿（效率低且栈溢出（悲））（递归）

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}//只能算到46位，再高就要溢出力（悲）（迭代）

int main()
{
	int n = 0;
	int ret;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret = %d", ret);
	return 0;
}



