#include <stdio.h>
#include <stdlib.h>
//ʵ������1.�ṹ�����͵�����2.�ṹ���ʼ��3.�ṹ���Ա����4.�ṹ�崫��
////struct �ṹ�ؼ��� Stu�ṹ���ǩ  struct stu Ϊ�ṹ�����ͣ�������int��
//typedef struct Stu//�ṹ�����͵Ĵ���
//{
//    //��Ա����
//    char name[20];
//    short age;
//    char tele[12];
//    char sex[5];
//}Stu;
//int main()
//{
//    Stu s = {"С��",20,"13183847824","��"};//��������s������Ϊstruct Stu
//
//    return 0;
//}
//struct s//�ṹ��Ķ���
//{
//    int a;
//    char c;
//    char arr[20];
//    double d;
//};
//struct T
//{
//    char ch[10];
//    struct s S;
//    char *pc;
//};
//int main()
//{
//    struct T t={"hehe",{5,'w',"hello world",3.14},NULL};//�ṹ���ʼ��
//    printf("%s\n",t.ch);//hehe
//    printf("%s\n",t.S.arr);//hello world
//    return 0;
//}
typedef struct Stu//�ṹ�����͵Ĵ���
{
    //��Ա����
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}Stu;
void print1(Stu tem)
{
    printf("name:%s\n",tem.name);
    printf("age:%d\n",tem.age);
    printf("tele:%s\n",tem.tele);
    printf("sex:%s\n",tem.sex);
}
void print2(Stu* ps)
{
    printf("name:%s\n",ps->name);
    printf("age:%d\n",ps->age);
    printf("tele:%s\n",ps->tele);
    printf("sex:%s\n",ps->sex);


}
int main()
{
    Stu s = {"С��",20,"13183847824","��"};//��������s������Ϊstruct Stu
    print1(s);
    print2(&s);//���ִ�ӡ�ṹ��ķ��� �Ǹ��ȽϺ�
    //��ѡ������ ��Ϊ��һ�ַ��� ������ʱcopyһ�� ռ�ڴ� �����ڶ��ַ���ֻ����ַ��ȥ

    return 0;
}
//����  �ṹ�崫�� ֻ����ַ�������ṹ��
