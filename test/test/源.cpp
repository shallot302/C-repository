#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
////int main() //������
////{
//	//printf("Hello��world\n");
//	
//	//return 0;
////}
//
////�洢�ַ�a
////"a"-zifu a
//
////int main()
//{
//	//�ַ�����
//	char ch = 'a';
//	//����
//	int age = 50;
//	//������
//	short num = 10;
//	//long
//	//long long
//
//	//�����ȸ�����
//	float weight = 55.5;
//	//˫���ȸ�����
//	double d = 0.0;
//
//	return 0;
//
//}



//int main()
//{
//	printf("hehe\n");
//	printf("bite\n");
//	printf("%d\n", 100);//��ӡһ������-%d
//	//sizeof-�ؼ���-������-�������ͻ��߱�����ռ�ռ�Ĵ�С
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
//sizeof�ĵ�λ��ʲô-�ֽ�
//
//int main()
//{
//	//���������ķ�����1 ���� ���������� =  ��
//	//2���� ���������֣����ǲ��Ƽ�
//	int age = 20;
//	double weight = 75.3;
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//
//}
//%d����
//%f-float
//%lf-double

//ȫ�ֱ���
//int a = 100;
//
//int main()
//{
//	//�ֲ��������ڴ������ڲ���
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//дһ�����������������ĺ�
//scanf���������뺯��
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
//���������������
// ������
//�ֲ�������������ֻ�����ڵľֲ���Χ
//ȫ�ֱ�����������;ȫ�ֱ�����������
//�������ڣ��Ӵ���������֮���ʱ���
//�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ��������
//ȫ�ֱ������������ڣ��������������
//int g_val = 2023;
//int main()
//{
//	int a = 10;
//	printf("a = %d\n", a);
//	return 0;
//
//
//}
//����
//1.���泣��
//int main() {
//	3.14;
//	10;
//	"addahh";
//	'a';
//	return 0;
//}
//2.const���εĳ�����
//#define MAX 10000
//int main() {
//	//const int num = 10;//num���ǳ����� - ���г����ԣ����ܱ��ı�����ԣ�
//	///*num = 20;*/
//	//printf("%d\n", num);
//	//return 0;
//
//	/*int arr[10] = { 0 };
//	const int n = 10;
//	int arr2[n] = { 0 };*/
//	//3.#define����ı�ʶ������
//	//����ĳ����޷�����
//	//int n = MAX;
//	//printf("n = % d\n", n);
//	//4.ö�ٳ���
//	//����һһ�оٵĳ���
//	return 0;
//	
//
//}
//4.ö�ٳ���
	//����һһ�оٵĳ���
//�����Ա�
//enum SEX 
//{
//	//ö�ٳ����ڵ�δ��ȡֵ
//	//ö�ٳ���Ĭ�ϴ�0��ʼҲ����
//	//����0
//	MALE = 3,//������ֵ���Ǵ�0��ʼ
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

//�ַ�������һ���ַ�
//��˫������������һ���ַ�
//int main() {
//	"hello world.\n";
//	return 0;
//}
#include <string.h>
//int main() {
	//�ַ����� - ������һ����ͬ���͵�Ԫ��
	//�ַ����ڽ�β��λ��������һ��\0���ַ�
	//\0���ַ����Ľ�����־
	//"hello";
	////char arr[] = "hello";
	//char arr1[] = "abc";
	//char arr2[] = { 'a','b','c','\0'};//����ֹ��ζ�����ҵ�\0Ϊֹ
	//////��ӡ�ַ���
	////printf("%s\n", arr1);
	////printf("%s\n", arr2);
	////���ַ����ĳ���
	////�ַ�����β��\0��ռ�ó���
	////�����ַ�������Ԫ�ظ��������\0
	//int len = strlen("abc");
	//printf("%d\n", len);
	//printf("%d\n", strlen(arr1));
	//printf("%d\n", strlen(arr2));
	//printf("%d\n", sizeof(arr2));
	//return 0;
//}
