#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


//쳲���������
//1��1��2��3��5��8��13��21��34��55...
//a, b, c  |  |
//|  a, b ,c  |
//|  |  a ,b ,c
// ������⣬��ʱa,b����Ҫ���㣬ֻ��Ҫcʱ����a+b,������������
//���ӵ���λ��ʼ�����ֵ���ǰ��������֮��

//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;//����λ��С��2���򷵻�1
//	else
//		return Fib(n - 1) + Fib(n - 2);//����λ�����ڶ�������ú��������ǰ����������ǰ�������������ͬ��������ã��������
//}

//�����壨Ч�ʵ���ջ��������������ݹ飩

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
}//ֻ���㵽46λ���ٸ߾�Ҫ�������������������

int main()
{
	int n = 0;
	int ret;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret = %d", ret);
	return 0;
}



