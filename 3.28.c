#include<stdio.h>
//test 1 ��ֱ��0Ϊֹ�����ֺ�
//int main()
//{
//	int anser = 0;
//	int num ;
//	printf("please enter  continual numbers you need to add\n");
//	scanf("%d", &num);
//	while(num != 0){
//	anser = num + anser;
//	scanf("%d", &num);//�����������ܶ�Σ�����������ֹ����num==0ʱ��
//	}
//	printf("��Ϊ%d��\n",anser);
//	return 0;
//}
//test 2 ��ֱ��0λ�õ�ƽ��ֵ
//˼· ��ʾ����  ��ִ��һ��  n��ִ�У��ڲ���0��������ִ�У�  һ�����
//int main()
//{
//	double average;
//	int num;
//	int add = 0;
//	int count = 0;
//	printf("������Ҫ���ƽ��ֵ������\n");
//	scanf("%d", &num);//��ִ��һ��
//	count++;
//	while(!(num == 0))
//	{
//		add = add + num;
//		scanf("%d", &num);//��num����0��������ִ��
//		count++;
//		
//	}
//	average = (double)add / count;//(add/count) ִֻ��һ��
//	printf("ƽ��ֵʹ%f", average);
//	return 0;
//}
//test 3 �����������
int main()
{
	int count = 0;
	int n = 0;
	printf("������Ҫ���Ĵ���\n");
	scanf("%d", &n);
	while(count <= n){
	printf("%d\n",count);//ִ�ж�Σ�����Ϊn�Σ�
	count++;
	}
	return 0;
}