#include <stdio.h>
#include <stdlib.h>
//实验内容1.结构体类型的声明2.结构体初始化3.结构体成员访问4.结构体传参
////struct 结构关键字 Stu结构体标签  struct stu 为结构体类型（类似于int）
//typedef struct Stu//结构体类型的创建
//{
//    //成员变量
//    char name[20];
//    short age;
//    char tele[12];
//    char sex[5];
//}Stu;
//int main()
//{
//    Stu s = {"小马",20,"13183847824","男"};//创建变量s其类型为struct Stu
//
//    return 0;
//}
//struct s//结构体的定义
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
//    struct T t={"hehe",{5,'w',"hello world",3.14},NULL};//结构体初始化
//    printf("%s\n",t.ch);//hehe
//    printf("%s\n",t.S.arr);//hello world
//    return 0;
//}
typedef struct Stu//结构体类型的创建
{
    //成员变量
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
    Stu s = {"小马",20,"13183847824","男"};//创建变量s其类型为struct Stu
    print1(s);
    print2(&s);//两种打印结构体的方法 那个比较好
    //首选方法二 因为第一种方法 会在临时copy一份 占内存 。而第二种方法只传地址过去

    return 0;
}
//结论  结构体传参 只传地址，不穿结构体
