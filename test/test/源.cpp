#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
////int main() //函数名
////{
//	//printf("Hello，world\n");
//	
//	//return 0;
////}
//
////存储字符a
////"a"-zifu a
//
////int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整形
//	int age = 50;
//	//短整型
//	short num = 10;
//	//long
//	//long long
//
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//
//	return 0;
//
//}



//int main()
//{
//	printf("hehe\n");
//	printf("bite\n");
//	printf("%d\n", 100);//打印一个整数-%d
//	//sizeof-关键字-操作符-计算类型或者变量所占空间的大小
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	
//	return 0;
//}
//sizeof的单位是什么-字节
//
//int main()
//{
//	//创建变量的方法：1 类型 变量的名字 =  ；
//	//2类型 变量的名字；但是不推荐
//	int age = 20;
//	double weight = 75.3;
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//
//}
//%d整型
//%f-float
//%lf-double

//全局变量
//int a = 100;
//
//int main()
//{
//	//局部变量（在大括号内部）
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//写一个代码求两个整数的和
//scanf函数是输入函数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//
//
//	return 0;
//
//}
//作用域和生命周期
// 作用域：
//局部变量的作用域只在所在的局部范围
//全局变量的作用域;全局变量整个工程
//生命周期：从创建到销毁之间的时间段
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期
//int g_val = 2023;
//int main()
//{
//	int a = 10;
//	printf("a = %d\n", a);
//	return 0;
//
//
//}
//常量
//1.字面常量
//int main() {
//	3.14;
//	10;
//	"addahh";
//	'a';
//	return 0;
//}
//2.const修饰的常变量
//#define MAX 10000
//int main() {
//	//const int num = 10;//num就是常变量 - 具有常属性（不能被改变的属性）
//	///*num = 20;*/
//	//printf("%d\n", num);
//	//return 0;
//
//	/*int arr[10] = { 0 };
//	const int n = 10;
//	int arr2[n] = { 0 };*/
//	//3.#define定义的标识符常量
//	//定义的常量无法更改
//	//int n = MAX;
//	//printf("n = % d\n", n);
//	//4.枚举常量
//	//可以一一列举的常量
//	return 0;
//	
//
//}
//4.枚举常量
	//可以一一列举的常量
//定义性别
//enum SEX 
//{
//	//枚举常量内的未来取值
//	//枚举常量默认从0开始也就是
//	//这是0
//	MALE = 3,//但赋初值不是从0开始
//	//1
//	FEMALE,
//	//2
//	SECRET
//};
//int main() {
//
//	enum SEX s;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//字符串就是一串字符
//用双引号括起来的一串字符
//int main() {
//	"hello world.\n";
//	return 0;
//}
#include <string.h>
//int main() {
	//字符数组 - 数组是一组相同类型的元素
	//字符串在结尾的位置隐藏了一个\0的字符
	//\0是字符串的结束标志
	//"hello";
	////char arr[] = "hello";
	//char arr1[] = "abc";
	//char arr2[] = { 'a','b','c','\0'};//不终止意味长度找到\0为止
	//////打印字符串
	////printf("%s\n", arr1);
	////printf("%s\n", arr2);
	////求字符串的长度
	////字符串结尾的\0不占用长度
	////但求字符串数组元素个数会计算\0
	//int len = strlen("abc");
	//printf("%d\n", len);
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));
	//printf("%d\n", sizeof(arr2));
	//return 0;
//}
