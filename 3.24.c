#include<stdio.h>
//求最小数实验  if训练
int main()
{
    int n1,n2,n3,n4,min;
    printf("请输入4个数\n");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    min = n1;
    if(n2<min){
          min= n2;
    }
    if(n3<min){
          min= n3;
    }
    if(n4<min){
          min= n4;
    }

    printf("%d为最小数",min);
    return 0;
}
