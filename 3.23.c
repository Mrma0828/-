#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//if �����ϰ
//test ֱ�������ε��ж�
int main()
{
	int num1, num2, num3;
	printf("�����������߳� \n");
	scanf("%d%d%d", &num1, &num2, &num3);
	if (num1 * num1 == num2 * num2 + num3 * num3 || num2 * num2 == num1 * num1 + num3 * num3 || num3 * num3 == num2 * num2 + num1 * num1  )
	{
		printf("��������Ϊֱ��������");//����������ִ�� ������������ִ�� ����֮�͵��ڵ�����
	}
	else
	{
		printf("����");
	}
	return 0;
}