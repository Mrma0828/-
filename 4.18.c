#include<stdio.h>
//����һ
//��if��if-else����  ifÿ����Ҫ�ж� ��if-elseֻѡһ�������ж�
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
//	printf("���ֵΪ%d", num3);
//	return 0;
//}
//������ 
//��if else �� switch ����   ǰ�߿����ж϶�� ������ֻ��Ҫ�ж�һ��
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