#include <stdio.h>
//指针进阶学习
//一.字符 指针
//test 1  数组名是首元素地址
//int main()
//{
//	char arr[] = "abcde";
//	char* pc = arr;//（数组名是首元素地址）放入的是a的地址
//	printf("%s\n", arr);//%s是对地址解引用 开始打印字符串
//	printf("%s\n",pc);
//	return 0;
//}
//test 2 字符串放入指针变量的是首字母地址
//int main()
//{
//	char* p = "abcde";
//    printf("%c\n", *p);//结果为a
//	
//	printf("%s\n", p);//结果为abcde 证明字符串放入的是首个字符的地址
//	return 0;
//}
//test 3  指针解引用时 被指对象是常量字符是不能被修改
//int main()
//{
//	const char* p = "abcde";//"abcde"是一个常量字符不能修改  加const后 指向对象不能修改 更加严谨
//	//*p = 'w';
//	printf("%s\n", p);
//	return 0;
//
//}
//test 4 面试题
//int main()
//{
//	char arr1[] = "abcdef";//开辟内存1 数组名为a地址  
//	char arr2[] = "abcdef";//开辟内存2
//	char* p1 =  "abcdef";
//	char* p2 =  "abcdef";
//	//if (arr1 == arr2)//内存一地址 与内存二地址 判断
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//
//	//}
//	if (p1 == p2)////***字符常量（为了节省内存空间） 在内存中只存一份  所以p1 p2都指向“abcde”
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//
//	}//实验结果为hehe
//
//	return 0;
//}


//二.指针数组 （存放指针的数组） 用来存放指针
// test 1
//int main()
//{
//	//int arr[10] = { 0 };
//	//int* parr[4];//存放整形指针的数组
//	//char* pch[5];//存放字符指针的数组
//	//int a = 10;
//	//int b = 20;	
//	//int c = 30;
//	//int d = 40;
//	//int i = 0;
//	//int* arr[4] = { &a,&b,&c,&d };
//	//for (i = 0; i < 4; i++)//用法低级
//	//{
//	//	printf("%d\n",* arr[i]);
//	//}
//	
//	return 0;
//}
//**********指针数组一般用法
	//int main()
	//{
	//	int arr1[] = { 1,2,3,4,5 };
	//	int arr2[] = { 2,3,4,5,6 };
	//	int arr3[] = { 3,4,5,6,7 };
	//	int* parr[] = { arr1,arr2,arr3 };
	//	int i =0;
	//	for (i = 0; i < 3; i++)
	//	{
	//		int j = 0;
	//		for(j = 0;j<5;j++)
	//		{
	//			printf(" %d",*( parr[i] + j));
	//		}
	//		printf("\n");
	//		
	//	}
	//	return 0;
	//}

//三.数组指针 是指针（对指针解引用可指向数组）
// test 1 
//int main()
//{
//	//int* p = NULL;//p是整形指针---指向整形的指针-可以存放整形的地址
//	//char* pc = NULL;//pc是字符指针--指向字符的指针-可以存放字符的地址
//	//int arr[10] = { 0 };
//	//arr-首元素地址
//	//&arr[0]-首元素地址
//	//&arr-数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//*P表示是指针 int[10]表示数组  所以代表 ---指针指向数组（即为数组地址）
//	int(*p)[10] = &arr;（int [10]的地址）
//
//
//}
//test 2
//int main()
//{
//	char* arr[5];//arr先与[]结合 判断arr为数组类型 而其中放的是char* 则为指针数组
//	char* (*pa)[5] = &arr;//(*pa)指的是pa为指针类型 指向char* [5] 为指针数组   所以这个为数组指针
//	int arr2[10] = { 0 };
//	int(*pa)[10] = &arr2;
//	//arr = 0133fbbo    &arr = 0133fbbo     arr+1 = 0133fbb4 跳过一个元素   &arr+1 =0133fbd4 跳过一个数组
//	return 0;
//}
//test 3数组指针的使用
//int main()//比较复杂
//{
//	int arr[8] = { 1,2,3,4,5,6,7,8 };
//	int(*pa)[8] = &arr;
//	int i = 0;
//	for (i = 0; i < 8; i++)
//	{
//		//(*pa)为arr数组名  也解引用数组就为 (*pa)[i]
//		printf("%d ", (*pa)[i]);
//
//	}
//	return 0;
//}
////test 4数组指针最优写法
//int main()//*********一般使用这种方法解引用数组
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf(" %d", *(p + i));
//	}
//	return 0;
//	
//
//}