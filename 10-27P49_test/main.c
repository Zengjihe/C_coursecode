#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//char������Ҳ���������ͼ���
//��Ϊ�ַ��洢��ʱ�򣬴洢����Ascll��ֵ

//��Ŀһ��
//�Ӵ�С���
//��Ŀ���ݣ�
//д���뽫�����������Ӵ�С���
//���磺
//���룺2 3 1
//�����3 2 1
// �Լ��ķ���
//void lar_to_sma(int a, int b, int c)
//{
//	int max1 = 0;
//	int max2 = 0;
//	int min = 0;
//	if (a > b)
//	{
//		max1 = a;
//		if (max1 > c)
//		{
//			if (b > c)
//			{
//				max2 = b;
//				min = c;
//			}
//			else
//			{
//				max2 = c;
//				min = b;
//			}
//		}
//		else
//		{
//			max1 = c;
//			max2 = a;
//			min = b;
//		}
//	}
//	else 
//	{
//		max1 = b;
//		if (max1 > c)
//		{
//			if (a > c)
//			{
//				max2 = a;
//				min = c;
//			}
//			else
//			{
//				max2 = c;
//				min = a;
//			}
//		}
//		else
//		{
//			max1 = c;
//			max2 = b;
//			min = a;
//		}
//	}
//	printf("%d %d %d\n", max1, max2, min);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	lar_to_sma(a, b, c);
//	return 0;
//}

////��ʦ�ķ���-Ч�ʸ��ߣ���������
//void swap(int* x, int* y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		swap(&a, &b);
//	}
//	if (a < c)
//	{
//		swap(&a, &c);
//	}
//	if (b < c)
//	{
//		swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//���ֱȽ������Ŀ���Բ��ý�����ֵ�ķ���

////��Ŀ����
////��ӡ3�ı�������
////��Ŀ���ݣ�
////дһ�������ӡ1-100֮�����е�3�ı���������
//int main()
//{
//	int i = 0;
//	/*for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}*/
//	for (i = 3; i <= 100; i += 3)
//		printf("%d ", i);
//	//��ѧ��ѧϰ�ķ�������������
//	//�������ַ������ͱ�������ĺ�һЩ
//	return 0;
//}

////��Ŀ3
////�����Լ��
////��Ŀ���ݣ�
////�������������������������Լ��
//int gcf(int x, int y)
////ʹ��շת�����
//{
//	int temp1 = 0;
//	int temp2 = 0;
//	if (x < y)
//	{
//		temp1 = x;
//		x = y;
//		y = temp1;
//	}
// ����if������ɾȥ����Ϊ˭��˭С��û��ϵ
//	while (temp2=x % y )
//	{
//		x=y;
//		y = temp2;
//	}
//	return y;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int ret=gcf(x, y);
//	printf("%d\n", ret);
//	return 0;
//}

////��ʦ����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m==0 && b % m==0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d\n", m);
//	return 0;
//}
////�����ڱ�����⣬������Ч�����ѵ�ʱ���Ƚ϶�
////��Ϊһֱ�ڱȽ�
////������û���Ҫ��շת�����
//// ���Ҫ����С��������ͨ�����������ʽ���
////��a*b/���Լ����������С������

//��Ŀ��
//��ӡ����
//��Ŀ���ݣ�
//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

////��Ŀ��
////��ӡ����
////��Ŀ����
////дһ�����룺��ӡ100-200֮�������
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 10; i <= 20; i++)
//	{
//		for (k = 2; k < i; k++)
//		{
//			if (i % k == 0)
//			{
//				break;
//			}
//		}
//		if (k == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
////���ú���д��������
////�������ַ����ֱ����淽����Щ������ģ�黯
//#include <stdbool.h>//��������ͷ�ļ�
//bool is_prime(int i)
//{
//	int k = 0;
//	for (k = 2; k < i; k++)
//	{
//		if (i % k == 0)
//		return false;//ֱ�ӽ���������ִ�к�����䣬������ֵ
//	}
//	return true;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////��Ŀ��
////��Ŀ���ƣ�
////��9�ĸ���
////��Ŀ����
////��д������һ��1��100�����еĲ����г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//�ж���λ�ϵ�9�ĸ���
//		{
//			count++;
//		}
//		if (i / 10 == 9)//�ж�ʮλ��9�ĸ���
//		{
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
////����ǰһ��Ҫ���������Ŀ����˼
////�������ȥ������Ҫ

//��Ŀ��
//��Ŀ����
//�������
//��Ŀ����
//����1/1-1/2+1/3-1/4+1/5-����+1/99-1/100,��ӡ���
int main()
{
	int i = 0;
	float sum = 0;
	int flag = 1;
	//�Լ�д��
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 2 == 0)
	//	{
	//		sum -= (1.0 / i);
	//	}
	//	else
	//	{
	//		sum += (1.0 / i);
	//	}
	//��ʦд��
	for(i=1;i<=100;i++)
	{
		sum = sum + flag * (1.0 / i);
		//����ʹ�õ�ʱ��
		//��Ҫ�õ�������
		//�����������ٵ���һ����С����ʽ
		flag = -1 * flag;//��������Ҫ�жϣ�Ч�ʻ����
		//���Ծ�һ�������ŵı任�����Բ���������ʦ����������
	}
	printf("%.2f\n", sum);//������λС��
	return 0;
}