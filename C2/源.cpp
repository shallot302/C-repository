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
//	//printf�ڴ�ӡ���ݵ�ʱ�򣬿���ָ����ӡ�ĸ�ʽ
//	//����
//	printf("%d", 100);
//	//�ַ�
//	printf("%c", 'a');
//	//�ַ���
//	printf("%s", "abc");
//	
//	return 0;
//}
//ת���ַ���ת������ԭ������˼
//int main() {
//	printf("%c\n", '\130');//8���Ƶ�130ת��Ϊʮ����x
//	printf("%c\n", '\101');//8���Ƶ�130ת��Ϊʮ����a
//	printf("%c\n", '\x30');//16���Ƶ�130ת��Ϊʮ����0
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}������ĸ���ASCII

//ע�����������͸��Ӵ����
//int main() {
//	//int a = 10;//C++ע�ͷ��
//	/*c����ע�ͷ��*/
//	//ȱ�ݲ���Ƕ��ע��
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
	scanf("�������ɫ������ = %d", &ATK);
	int point2 = 0;//�����˺������쳣�˺����
	int point3 = 0;//�����̵�������+���������
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