//ָ���ѧϰ��2��
#include<stdio.h>

void printf1(int arr[3][5],int x,int y )
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		
		for (j = 0; j < y; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}


}

void printf2(int (*p)[5],int x,int y )
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d", *(*(p + i) + j));
		}
	}

}



int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7,} };

	printf1(arr,3,5);//��������ʽ���Σ�����ȥΪ���飩
	printf2(arr,3,5);//�Ե�ַ��ʽ������ȥΪ��λ��ַ�׵�ַ�����������ַ�������� ��ӡ

	return 0;
}

