#include<stdio.h>
//����С��ʵ��  ifѵ��
int main()
{
    int n1,n2,n3,n4,min;
    printf("������4����\n");
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

    printf("%dΪ��С��",min);
    return 0;
}
