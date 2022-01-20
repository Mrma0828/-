#include <stdio.h>
#include <stdlib.h>
//单目操作符 sizeof
int main()
{
    int a = 0;
    char b = 'w';
    int arr[10] = {0};

    printf("%d\n",sizeof a);
    printf("%d\n",sizeof (int));//求数据类型内存大小得加（）

    printf("%d\n",sizeof b);
    printf("%d\n",sizeof (char));//求数据类型内存大小得加（）

    printf("%d\n",sizeof arr);
    printf("%d\n",sizeof (int[10]));//求数据类型内存大小得加（）


    return 0;
}
