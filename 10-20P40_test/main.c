#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void swap(int* px, int* py)
{
	int z = 0;
	z = *px;
	*px = *py;
	*py = z;
}

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
		//ֱ�Ӽ���i�Ŀ�ƽ�����Ż�����
	{
		if (n % j == 0)
		{
			return 0;//return 0����Ҫ��break����ǿ��ֻҪ���������ͽ�����������
		}
	}
	return 1;
}
int main(void)
{
	//int a = 0;
	//int b = 0;
	//scanf("%d %d", &a, &b);
	//printf("����ǰ��a=%d,b=%d\n", a, b);
	//swap(&a, &b);
	//printf("������a=%d,b=%d\n", a, b);
	//return 0;

	//int a = 0;
	//int b = 0;
	//scanf("%d %d", &a, &b);
	//int c = 0;
	//c=Add(a, b);//�����ڴ���ַ�����ﲻ��Ҫ
	//printf("%d\n", c);
	//return 0;
	//���������������͵ĺ������ܽ�һ�£����Ҫ�ı��βα�������Ҫ����ַ����������Ҫ����Ҫ����ַ
	//�����ֺô�ֵ�����ʹ�ַ����
	
	//дһ�����������ж�һ�����ǲ�������
	//�Լ�д��
	//int i = 0;
	//int j = 0;
	//int ret = 0;
	//int k = 0;
	//for(i = 1; i <= 30; i++)
	//{
	//	if (1 == k||2==k)
	//	{
	//		printf("%d ", i-1);
	//	}
	//	k = 0;
	//	for (j = 1; j < =i; j++)
	//	{
	//		ret = i % j;
	//		if (0 == ret)
	//		{
	//			k++;
	//		}
	//	}
	//}
	//return 0;
	//��ʦд��
	//int i = 0;
	//int j = 0;
	//for (i = 100; i <= 200; i++)
	//{
	//	int flag = 1;
	//	for (j = 2; j <= i - 1; j++)
	//	{
	//		if (i %j == 0)
	//		{
	//			flag = 0;
	//			break;
	//		}
	//	}
	//	if (flag == 1)
	//	{
	//		printf("%d ", i);
	//	}
	//}
	//return 0;
	//��ʦ�Ż�д��
	//int i = 0;
	//int j = 0;
	//for (i = 101; i <= 200; i+=2)
	////ֱ�Ӵ�������ʼ���ӿ�����ٶ�
	//{
	//	int flag = 1;
	//	for (j = 2; j <= sqrt(i); j++)
	//	//ֱ�Ӽ���i�Ŀ�ƽ�����Ż�����
	//	{
	//		if (i % j == 0)
	//		{
	//			flag = 0;
	//			break;//������Լ����㷨���Ż��˺ܶ�
	//			//��Ҫ����õ���������һ��һ���������ˣ�һ��������������ֱ��������
	//			//�����ظ�����
	//		}
	//	}
	//	if (flag == 1)
	//	{
	//		printf("%d ", i);
	//	}
	//}
	//return 0;

	//������ѧ�ĺ���֪ʶ�ж�һ�����ǲ�������
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	//ֱ�Ӵ�������ʼ���ӿ�����ٶ�
	{
		if (is_prime(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}