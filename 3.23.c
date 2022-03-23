#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//if 语句练习
//test 直角三角形的判断
int main()
{
	int num1, num2, num3;
	printf("请输入三个边长 \n");
	scanf("%d%d%d", &num1, &num2, &num3);
	if (num1 * num1 == num2 * num2 + num3 * num3 || num2 * num2 == num1 * num1 + num3 * num3 || num3 * num3 == num2 * num2 + num1 * num1  )
	{
		printf("该三角形为直角三角形");//不是无条件执行 而是有条件的执行 两边之和等于第三边
	}
	else
	{
		printf("不是");
	}
	return 0;
}