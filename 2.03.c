#include <stdio.h>
#include <stdlib.h>
//实验 检测电脑数据存储方式（大端存储，小端存储）
int check_sys()
{
    int a = 1;
    char*p = (char*)&a;//取出第一个字节放入*p内 返回 如果是0就是大端反正为小端
    return *p;
}


int main()
{
    int ret = check_sys();
    if(ret == 1)
    {
        printf("小端");
    }
    else
    {
        printf("大端");
    }
    return 0;
}
