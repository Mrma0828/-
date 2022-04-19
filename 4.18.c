#include<stdio.h>
//案例一
//从if向if-else过度  if每个都要判断 而if-else只选一个进行判断
//int main()
//{
//	int num1, num2, num3;
//	scanf("%d %d", &num1, &num2);
//
//	if (num1 > num2)
//	{
//		num3 = num1;
//	}
//	else
//	{
//		num3 = num2;
//	}
//
//
//
//	printf("最大值为%d", num3);
//	return 0;
//}
//案例二 
//从if else 向 switch 过渡   前者可能判断多次 而后者只需要判断一次
//int main()
//{
//	int num1, num2;
//	char character;
//	float answer;
//	scanf("%d %c %d", &num1, &character, &num2);
//	if (character == '+')
//	{
//		answer = num1 + num2;
//	}
//	if (character == '-')
//	{
//		answer = num1 - num2;
//	}
//	if (character =='*')
//	{
//		answer = num1 * num2;
//	}
//	if (character == '/')
//	{
//		answer = (float)num1 / num2;
//	}
//
//	printf("num1 %c num2 = %f", character, answer);
//
//	return 0;
//}
//
int main()
{
	int num1, num2;
	char character;
	float answer;
	scanf("%d %c %d", &num1, &character, &num2);
	switch (character)
		
	{
		case '+':answer = num1 + num2; break;
		case '-':answer = num1 - num2; break;
		case '*':answer = num1 *num2; break;
		case '/':(float)answer = num1 / num2; break;

	}
	printf("num1 %c num2 = %f", character, answer);

	return 0;

}