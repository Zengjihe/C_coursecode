#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//
//	//��ֵ
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}

//void test(int arr[])
//{
//	//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char str[] = "abcdefg";
//
//	test(arr);
//
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//int main()
//{
//	test1();
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int sum = 0;
//
//	scanf("%d", &n);
//
//	for (j = 1; j <= n; j++)
//	{
//		int ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}

#include <string.h>
//������뻹��д��̫���ˣ�Ҫ�����Ҫ
//void my_strcpy(char* s1, char* s2)
//{
//	int i = 0;
//
//	while (s2[i] != '\0')
//	{
//		s1[i] = s2[i];
//		i++;
//	}
//	s1[i] = s2[i];
//}
//�Ż�1
//void my_strcpy(char* s1, char* s2)
//{
//	while (*s2 != '\0')
//	{
//		*s1++ = *s2++;
//	}
//	*s1 = *s2;
//}
//�Ż�2
//#include <assert.h>
//void my_strcpy(char* s1, const char* s2)
//{
//	//����
//	assert (s2 != NULL);
//	assert(s1 != NULL);
//
//	while (*s1++ = *s2++)//'\0'��ASCLLΪ0,0��Ϊ��
//	{
//		;
//	}
//}
//Ϊʲô����char*�أ�
//��Ϊ��ʵ����ʽ����
//strcpy�������ص���Ŀ��ռ����ʼ��ַ
//#include <assert.h>
//char* my_strcpy(char* s1, const char* s2)
//{
//	char* ret = s1;
//	//����
//	assert (s2 != NULL);
//	assert(s1 != NULL);
//
//	while (*s1++ = *s2++)//'\0'��ASCLLΪ0,0��Ϊ��
//	{
//		;
//	}
//}


//int main()
//{
//	const int a = 10;
	//a = 20;
	//int* p = &a;//��������ͨ��ָ�����ı�const����a
	//const int* p = &a;//����˫�ر��գ�������Ҳ������
	//*p = 20;
	//const����ָ�����
	//1.const����*�����
	// ��˼�ǣ�pָ��Ķ�����ͨ��ָ�����p���ı��ˣ�����p���������ֵ�ǿ��Ըı��
	//const int* p = &a;
	//int const* p = &a;//������д����һ����Ч��
	//2��const����*���ұ�
	//int* const p = &a;
	//��˼�ǣ�pָ��Ķ����ǿ���ͨ��p���ı�ģ����ǲ����޸�p���������ֵ
	//*p = 0;//ok
	//int n = 100;
	//p = &n;
	//3.*���߶���const
	//pָ��Ķ����p�������¶����ܹ��޸�
//	printf("%s\n", a);
//
//	return 0;
//}

//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	//����
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++)//'\0'��ASCLLΪ0,0��Ϊ��
//	{
//		;
//	}
//}
//
//int main()
//{
//	char str1[20] = "xxxxxxxxxxxxxx";
//	char str2[] = "abcdefg";
//	char* p = NULL;
//
//	my_strcpy(str1, str2);
//
//	printf("%s\n", str1);
//
//	return 0;
//}

//ģ��ʵ��strlen����

//#include <string.h>
//#include <assert.h>
////size_t ���ͱ�ʾC���κζ������ܴﵽ����󳤶ȣ������޷�������
//size_t my_strlen(const char* s)
//{
//	//����
//	assert(s);
//
//	size_t count = 0;
//
//	while (*s++)//����++
//	{
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	char str[] = "abcdefg";
//	char* p = NULL;
//	printf("%zu\n", my_strlen(str));//�䷵��ֵ��%zu����
//
//	return 0;
//}

