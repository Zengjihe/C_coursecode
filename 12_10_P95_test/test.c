#define _CRT_SECURE_NO_WARNINGS


//��Ŀ���ƣ���ӡ����
//��Ŀ���ݣ���C��������Ļ���������ͼ��
#include <stdio.h>
//#include <assert.h>
//
//void print_rhombus(int m)
//{
//	assert((m % 2 != 0) && (m <= 100));
//
//	int i = 0;
//	int j = 0;
//	
//	char str[100][100] = { 0 };//������Ҫʹ��ѭ����ʼ������
//	//��Ҫ��Ϊ������ʼ��Ϊĳһ��ֵ�ˣ�����������涼�����ֵ��û�г�ʼ���Ķ�����0�����
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			str[i][j] = ' ';
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		if (i <= m / 2)
//		{
//			for (j = -i; j <= i; j++)
//			{
//				str[i][((m - 1) / 2) + j] = '*';
//			}
//		}
//		else
//		{
//			for (j = -(m - 1 - i); j <= m - 1 - i; j++)
//			{
//				str[i][(m / 2) + j] = '*';
//			}
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%c", str[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//
//
//int main()
//{
//	int m = 0;
//
//	while (scanf("%d", &m) == 1)
//	{
//		print_rhombus(m);
//	}
//
//
//	return 0;
//}

//��ʦд��-�ҹ���
//int main()
//{
//	int line = 0;
//	int i = 0;
//	int j = 0;
//
//	scanf("%d", &line);
//
//	//��
//	for (i = 0; i < line; i++)
//	{
//		//�ո�
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for (i = 0; i < line - 1; i++)
//	{
//		//�ո�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//��Ŀ���ƣ�����ˮ����
//��Ŀ���ݣ�����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ
//��20Ԫ�������ж���ƿ��ˮ
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		sum = 0;
//		while (n / 2)
//		{
//			//ż����ƿ��
//			if (n % 2 == 0)
//			{
//				sum += n;
//				n /= 2;
//			}
//			//������ƿ��
//			else if(n - 1 != 0)
//			{
//				sum += n - 1;
//				n /= 2;
//				n += 1;
//			}
//		}
//		printf("%d\n", sum + 1);//�����һ��ƿ��û�кȣ�һ��ƿ��Ҳ���ܻ�
//	}
//
//	return 0;
//}

//��ʦ����
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//	scanf("%d", &money);
//	empty = money;//�ж��ٿ�ƿ
//	total = money;//���˵���ˮƿ��
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d\n", total);
//
//	return 0;
//}
