#include <stdio.h>
#include <stdlib.h>
//*************************************************************
//int main()
//{
////    printf("%d\n",sizeof(char*));
////    printf("%d\n",sizeof(int*));
////    printf("%d\n",sizeof(short*));
////    printf("%d\n",sizeof(double*));既然指针这个变量内存大小一样 为什么要分类呢
//    int a = 0x11223344;
////    int *pa = &a;
////    *pa = 0;//（引用了int的内存）
////    printf("%d",a);//实验一  指针存入对应类型的变量 成功 a值为0
//    int *pc = &a;
//    *pc = 0;//（引用了char的内存，一个 所以导致只有第一个字节被改为0）
//    printf("%c",a);//实验二  指针存入不对应类型的变量 失败 a为空白  只改变了内存里的一个字节（引用指针时只引用了char的内存长度，而不是int的4个）
//
//    return 0;
//}
////经过实验 可以知道，指针所占内存大小都为4bite。所以任何类型的变量地址的都可以存储
////但是 对指针分类的原因是在 引用地址符并且赋值的时候会导致内存取值不匹配
////指针类型的意义一
////***指针类型决定了指针进行解引用操作的时候，能够访问内存空间的大小(能够访问几个字节)******
////如 int*p; *p能够访问4个字节
////如 char*p; *p能够访问1个字节
////如 double*p; *p能够访问8个字节
//********************************************************************
//指针的类型二
//int main()
//{
//    int a= 1;
//    int* pa = &a;
//    char* pc = &a;
//    printf("%p\n",pa);
//    printf("%p\n",pa+1);//pa跳过四个字节（刚好是pa所指int的内存大小）
//
//
//    printf("%p\n",pc);
//    printf("%p\n",pc+1);//pc过一个字节（刚好是pa所指char的内存大小）
//
//
//
//    return 0;
//
//}
////指针类型决定了：指针走一步走多远（指针的步长）
////int*p; p+1---->4bite
////char*p  p+1---->1bite
////double*p p+1---->8bite
