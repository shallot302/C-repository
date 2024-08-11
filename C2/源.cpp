#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
//int main() {
//	/*printf("c:\test\test.c");*/
//	printf("ab\ndf");
//	printf("%c", '\'');
//	printf("%c", "a");
//	printf("%c", "abc");
//	//printf在打印数据的时候，可以指定打印的格式
//	//整形
//	printf("%d", 100);
//	//字符
//	printf("%c", 'a');
//	//字符串
//	printf("%s", "abc");
//	
//	return 0;
//}
//转义字符：转变了它原来的意思
//int main() {
//	printf("%c\n", '\130');//8进制的130转换为十进制x
//	printf("%c\n", '\101');//8进制的130转换为十进制a
//	printf("%c\n", '\x30');//16进制的130转换为十进制0
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}上述字母详见ASCII

//注释是用来解释复杂代码的
//int main() {
//	//int a = 10;//C++注释风格
//	/*c语言注释风格*/
//	//缺陷不能嵌套注释
//	return 0;
//
//
//}
enum ERROR {
	ELETRIC,
	FIRE,
	FROZEN,
	STRIKE,
	ETHER,
};
enum character {
	lina,
	NONE,
};
int main() 
{
	enum ERROR E;
	enum character M;
	int ATK = 0;
	scanf("请输入角色攻击力 = %d", &ATK);
	int point2 = 0;//基础伤害区的异常伤害提高
	int point3 = 0;//驱动盘的增伤区+外带增伤区
	int basicdamagezone = 0;//
	int buffdamagezone = 0;
	int mysteriousnotifiy = 0;
	int defense = 0;
	int buffdefense = 0;
	int yishangqu = 0;
	int shihengyishangqu = 0;
	int level = 0;
	int damage = 0;
	int point1 = 0;
	if (E = ELETRIC) 
	{
		int N1 = 0;
		if (M = lina){
			N1 = 16;
			basicdamagezone = 1.25 * ATK * N1;
		}
		if (M = NONE){
			N1 = 10;
			basicdamagezone = 1.25 * ATK * N1;
		}
		
	}	
	if (E = FIRE)
	{
		basicdamagezone = 0.5 * ATK * 20;
	}
	/*if (E = FROZEN)
	{
		basicdamagezone = 3.5 * ATK * (1 + point2 + point3);
	}*/
	if (E = STRIKE)
	{
		basicdamagezone = 3.5 * ATK * 20;
	}
	if (E = ETHER)
	{
		basicdamagezone = 3.5 * ATK * (1 + point2 + point3);
	}


	defense = floor;
	damage = basicdamagezone * buffdamagezone * mysteriousnotifiy / 100 * defense * buffdefense;






}