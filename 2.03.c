#include <stdio.h>
#include <stdlib.h>
//ʵ�� ���������ݴ洢��ʽ����˴洢��С�˴洢��
int check_sys()
{
    int a = 1;
    char*p = (char*)&a;//ȡ����һ���ֽڷ���*p�� ���� �����0���Ǵ�˷���ΪС��
    return *p;
}


int main()
{
    int ret = check_sys();
    if(ret == 1)
    {
        printf("С��");
    }
    else
    {
        printf("���");
    }
    return 0;
}
