#include <stdio.h>
#include <stdlib.h>
//��Ŀ������ sizeof
int main()
{
    int a = 0;
    char b = 'w';
    int arr[10] = {0};

    printf("%d\n",sizeof a);
    printf("%d\n",sizeof (int));//�����������ڴ��С�üӣ���

    printf("%d\n",sizeof b);
    printf("%d\n",sizeof (char));//�����������ڴ��С�üӣ���

    printf("%d\n",sizeof arr);
    printf("%d\n",sizeof (int[10]));//�����������ڴ��С�üӣ���


    return 0;
}
