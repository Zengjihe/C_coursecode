#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//pa��һ��ָ�������ָ���������������ڴ��ַ
//	//������ָ����ǵ�ַ��ָ���������һ������
//	//����һ����˵��ָ��һ��ָ����ָ�����
//	return 0;
////}

//int main()
//{
//	char* pa = NULL;
//	short* pb = NULL;
//	int* pc = NULL;
//	double* pd = NULL;
//	
//	//sizeof ����ֵ���������޷�������
//	//ת������Ϊ->%zu����Ȼ��%d��Ӱ���ӡ��������%zu����׼ȷ��
//	printf("%zu\n", sizeof(pa));
//	printf("%zu\n", sizeof(pb));
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(pd));
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//
//	char* pa = &a;
//	*pa = 0;
//
//	//���ۣ�
//	//ָ�����;�����ָ���ڱ������õ�ʱ����ʼ����ֽ�
//	//�����int*��ָ�룬�����÷���4���ֽ�
//	//�����char*��ָ�룬�����÷���1���ֽ�
//	//�ƹ㵽��������
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	//������ַ��һ����
//
//	printf("pa = %p\n", pa);
//	printf("pa + 1 = %p\n", pa + 1);
//
//	printf("pc = %p\n", pc);
//	printf("pc + 1 = %p\n", pc + 1);
//
//	//���ۣ�
//	//ָ������;�����ָ��+-1������ʱ�����������ֽ�
//	//������ָ��Ĳ���
//	//int*����4���ֽ�->һ�η���һ���ֽ�
//	//char*����1���ֽ�->һ�η����ĸ��ֽ�
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* pa = &a;//pa�����÷���4���ֽڣ�pi+1Ҳ������4���ֽ�
//	float* pb = &a;//pb�����÷���4���ֽڣ�pi+1Ҳ��������4���ֽ�
//	//int*��float*������ͨ�ã������ǲ�ͬ��
//	//*pa = 100;
//	*pb = 100.0;
//	return 0;
//}

//Ұָ�룺
//int main()
//{
//	int* p;//pû�г�ʼ��������ζ��û����ȷ��ָ��
//	//һ���ֲ���������ʼ���Ļ����ŵ������ֵ��0xcccccccc
//	*p = 10;//�Ƿ������ڴ��ˣ������p����Ұָ��
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//
//	for (i = 0; i < 11; i++)//������11��Ԫ�أ������Խ����ʣ�����Ұָ��
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int* p = &a;//��ʱ��ʼ��
//	//int* p1 = NULL;//���ʵ�ڲ�֪����ʲôֵ��NULL->0
//	
//	//int* p3 = NULL;
//	//*p3 = 100;//error����ֵNULL���ܷ���
//	
//	//int* p2 = NULL;
//	//
//	//if (p2 != NULL)//���ַ�ʽ�����Ͻ�
//	//{
//	//	*p2 = 100;
//	//}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//������ȫ��Ԫ�ظ�ֵΪ1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	arr[i] = 1;
//	//}
//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	//int* p = arr;
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	*p++ = 1;//������*p = 1����p++
//	//}
//
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//
//
//	return 0;
//}

//ָ���ָ��õ�����ֵ�ľ���ֵ����ָ���ָ��֮��ĸ���
//�������е�ָ�붼�����
//ָ��ͬһ��ռ��ָ�������������
#include <string.h>

//����һ��
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//���������õݹ�
//int my_strlen(char* str)
//{
//	int sum = 0;
//	if (*str != '\0')
//	{
//		str++;
//		sum = my_strlen(str) + 1;
//		return sum;
//	}
//	else
//	{
//		return 0;
//	}
//
//}

//��������
//int my_strlen(char* str)
//{
//	int i = 0;
//	int*start = str;
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	
//	count = str - start;
//
//}
//int main()
//{
//	//int len = strlen("abddng");
//	int len = my_strlen("abddng");
//	printf("%d\n", len);
//
//	return 0;
//}
////ע�⣺
//ָ���ָ��û��ʲô����

//���飺һ����ͬ����Ԫ�صļ���
//ָ���������һ����������ŵ��ǵ�ַ

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//ָ�����p��ʱ��ŵ���������Ԫ�صĵ�ַ
//	//ָ�������֮���������ϵ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p--------%p\n", &arr[i], p + i);
//	}
//	//arr[i]->*()
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//	return 0;
//}

//����ָ��

//int main()
//{
//	int a = 10;
//	int* p = &a;//pa��һ��ָ�������һ��ָ�����
//	int** pp = &p;//pp��һ������ָ�����
//
//	**pp = 20;
//	printf("%d\n", a);
//
//	//*p = 20;
//	//printf("%d\n", a);
//
//	return 0;
//}

//ָ������
//���ָ�������

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	
//	//int arr[10];
//
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//
//	//int* parr[10];
//	//parr���Ǵ��ָ�������
//	//ָ������
//	int* parr[10] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//
//
//	return 0;
//}

//int main()
//{
	//int arr[3][4] = { 1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 8, 9 };
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}

//	int arr1[4] = {1, 2, 3, 4};
//	int arr2[4] = {3, 4, 5, 6};
//	int arr3[4] = {4, 5, 6, 7};
//
//	int* parr[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);//����[]���ǽ�������
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//�ṹ��
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա������
// �ṹ��ÿ����Ա�����ǲ�ͬ�����͵ı�����
//������һ����ͬ����Ԫ�صļ��ϡ�
//���Ӷ���������ͻ�ʹ�õ����ṹ��
//�ṹ������
//struct tag
//{
//	member-list;
//}variable-list;

//struct Peo
//{
//	//��Ա����
//	char name[20];
//	char tel[12];
//	char sex[5];//һ������ռ�����ַ������滹����һ��'\0'
//	int high;
//};

//struct Peo
//{
//	//��Ա����
//	char name[20];
//	char tel[12];
//	char sex[5];//һ������ռ�����ַ������滹����һ��'\0'
//	int high;
//}p1, p2;//p1��p2��ʹ��struct Peo�ṹ�����ʹ�������������
////p1��p2������ȫ�ֵĽṹ����������Ա��������ã����Բ�����


//struct Peo
//{
//	//��Ա����
//	char name[20];
//	char tel[12];
//	char sex[5];//һ������ռ�����ַ������滹����һ��'\0'
//	int high;
//};
//
//struct St
//{
//	struct Peo p;
//	int a;
//	float b;
//};//�ṹ������ṹ��
//
//void print1(struct St* s)
//{
//	printf("%s %s %s %d %d %f\n", s->p.name, s->p.tel, s->p.sex, s->p.high, s->a, s->b);
//}//ָ����Ҫ��->,�ṹ��ָ��->��Ա������->��ͷ������
//
//void print2(struct St s)
//{
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tel, s.p.sex, s.p.high, s.a, s.b);
//}//�ṹ�����.��Ա������.������
//
//int main()
//{
//	struct Peo p1 = { "����", "12322244414", "��", 181 };//�ṹ������Ĵ���
//	struct St s = { { "lisi", "13423579024", "Ů", 166}, 100, 13.4f };//���������ڴ��в��ܾ�ȷ����
//	
//	printf("%s %s %s %d\n", p1.name, p1.tel, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tel, s.p.sex, s.p.high, s.a, s.b);
//	
//	print1(&s);
//	print2(s);
//
//	return 0;
//}

//struct Peo
//{
//	//��Ա����
//	char name[20];
//	char tel[12];
//	char sex[5];//һ������ռ�����ַ������滹����һ��'\0'
//	int high;
//};
//struct St
//{
//	struct Peo p;
//	int a;
//	float b;
//};//�ṹ������ṹ��

//�ṹ�崫��
//����ʱ�������ʵ��-�βΣ�ʵ���������Ƚϴ��ʱ��
//�׵���ռ�ݿռ�󣬴���ʱ�䳤
//�ṹ�崫��ʱ���������ô���ַ�ķ�ʽ
