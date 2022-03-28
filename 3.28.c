#include<stdio.h>
//test 1 求直到0为止的数字和
//int main()
//{
//	int anser = 0;
//	int num ;
//	printf("please enter  continual numbers you need to add\n");
//	scanf("%d", &num);
//	while(num != 0){
//	anser = num + anser;
//	scanf("%d", &num);//这个步骤会做很多次（有条件的终止，当num==0时）
//	}
//	printf("和为%d，\n",anser);
//	return 0;
//}
//test 2 求直到0位置的平均值
//思路 提示输入  先执行一次  n此执行（在不是0的条件下执行）  一次输出
//int main()
//{
//	double average;
//	int num;
//	int add = 0;
//	int count = 0;
//	printf("请输入要算的平均值的数字\n");
//	scanf("%d", &num);//先执行一次
//	count++;
//	while(!(num == 0))
//	{
//		add = add + num;
//		scanf("%d", &num);//在num不是0的条件下执行
//		count++;
//		
//	}
//	average = (double)add / count;//(add/count) 只执行一次
//	printf("平均值使%f", average);
//	return 0;
//}
//test 3 输出连续数字
int main()
{
	int count = 0;
	int n = 0;
	printf("请输入要数的次数\n");
	scanf("%d", &n);
	while(count <= n){
	printf("%d\n",count);//执行多次（条件为n次）
	count++;
	}
	return 0;
}