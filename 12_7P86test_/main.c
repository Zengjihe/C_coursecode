#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//��Ŀ��
//��Ŀ���ƣ����������������в�ͬλ�ĸ���
//��Ŀ���ݣ�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ��bit����ͬ
//^->�������ͬ��������Ӧ�����Ʋ����λ��ͬ����0����ͬ����1

//�㷨1��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int temp = 0;
//	int count = 0;
//	int ret = 0;
//	int i = 0;
//
//	scanf("%d %d", &m, &n);
//
//	temp = m ^ n;
//	for (i = 1; i <= 32; i++)
//	{
//		ret = temp & 1;
//		if (ret == 1)
//		{
//			count++;
//		}
//		temp = temp >> 1;//temp >> 1���ı�temp��ֵ
//	}
//
//	printf("%d\n", count);
//
//	return 0;
//}

//�㷨2��

//int count_num_of_diff_bit(unsigned int m, unsigned int n)
//{
//	int count = 0;
//	int i = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		if ((n % 2) != (m % 2))
//		{
//			count++;
//		}
//		m /= 2;
//		n /= 2;
//	}
//	
//	return count;
//}

//�㷨3��

//int count_num_of_diff_bit(int m, int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//
//	return count;
//}

//�㷨4��
//int count_num_of_diff_bit(int m, int n)
//{
//	int ret = 0;
//	int count = 0;
//
//	//��λ���->��������Ӧ������λ��ͬ����0����ͬ����1
//	ret = m ^ n;
//	while (ret)
//	{
//		//����ret������λ��1�ĸ���
//		ret = ret & (ret - 1);
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int ret = 0;
//
//	scanf("%d %d", &m, &n);
//	ret = count_num_of_diff_bit(m, n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//��Ŀ��
//��Ŀ���ƣ�ͳ�ƶ������е�1�ĸ���
//��Ŀ���ݣ�дһ���������ز����������е�1�ĸ���

//int main()
//{
//	int m = 0;
//	int i = 0;
//	int count = 0;
//	int ret = 0;
//	
//	scanf("%d", &m);
//
//	for (i = 1; i <= 32; i++)
//	{
//		ret = m & 1;
//		if (ret == 1)
//		{
//			count++;
//		}
//		m >>= 1;
//	}
//
//	printf("%d\n", count);
//	 
//	return 0;
//}

//��ʦ�㷨��

//�㷨1��
//int count_num_of_1(int num)
//int count_num_of_1(unsigned int num)
//{
//	int temp = 0;
//	int count = 0;
//
//	while (num != 0)
//	{
//		temp = num % 2;
//		if (temp == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//
//	return count;
//}//����д���ڸ����ǲ����еģ����ǿ�����취ʵ��
////��int num��Ϊunsigned int num���������ڸ���Ҳ��������

//�㷨2��n & 1->���Եõ�n�Ķ�����λ�����һλ��1or0��
//���Ƶķ������Խ����λ������

//int count_num_of_1(int n)
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//
//	return count;
//}

//����������������Ч����Ҫһֱѭ��
//�㷨3��

//int count_num_of_1(int n)
//{
//	int count = 0;
//
//	while (n)
//	{
//		n = n & (n - 1);//ִ��һ��ȥ��һ��1
//		count++;
//	}
//
//	return count;
//}//���ַ����Ƚ����д����һ��Ҫѧ���ܽᣬ������Ұ
//��չ-�ж�һ�����ǲ���2��n�η�
// 2^1->10
// 2^2->100
// 2^3->1000
// ����
//if (n & (n - 1) == 0)
//{
//   
//}

//int main()
//{
//	int num = 0;
//	int n = 0;
//
//	scanf("%d", &num);
//
//	n = count_num_of_1(num);
//
//	printf("%d\n", n);
//
//	return 0;
//}

//��Ŀ��
//��Ŀ���ƣ���ӡ���������Ƶ�����λ��ż��λ
//��Ŀ���ݣ���ȡһ���������������������е�ż��λ������λ
//�ֱ��ӡ������������

//����1��
//int main()
//{
//	int num = 0;
//	int odd = 0;
//	int even = 0;
//	int i = 0;
//	int temp = 0;
//
//	scanf("%d", &num);
//	temp = num;
//
//	for (i = 1; i <= 32; i++)
//	{
//		if (i % 2 != 0)
//		{
//			odd = temp % 2;
//			printf("%d ", odd);
//		}
//		temp /= 2;
//	}
//	printf("\n");
//	for (i = 1; i <= 32; i++)
//	{
//		if (i % 2 == 0)
//		{
//			even = num % 2;
//			printf("%d ", even);
//		}
//		num /= 2;
//	}
//	printf("\n");
//
//	return 0;
//}

//����2��
//int main()
//{
//	int num = 0;
//	int odd = 0;
//	int even = 0;
//	int i = 0;
//	int temp = 0;
//
//	scanf("%d", &num);
//
//	//��ȡ����λ������
//	for (i = 31; i >= 1; i -= 2)
//	{
//		odd = (num >> i) & 1;
//		printf("%d ", odd);
//	}
//	printf("\n");
//
//	//��ȡż��λ������
//	for (i = 30; i >= 0; i -= 2)
//	{
//		even = (num >> i) & 1;
//		printf("%d ", even);
//	}
//	printf("\n");
//	
//	return 0;
//}

//��Ŀ��
//��Ŀ���ƣ�
//����������������������ʱ������
//��Ŀ���ݣ�����������ʱ������������������������
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//
//	//ͨ����λ�����ʵ�֣��������ɣ�
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("%d %d\n", a, b);
//
//	return 0;
//}


//��Ŀ��

//ȫ�ֱ�������̬�������Ƿ��ھ�̬��
//ȫ�ֱ�������̬��������ʼ����ʱ��Ĭ�ϻᱻ��ʼ��Ϊ0
//�ֲ��������Ƿ���ջ��������ʼ����Ĭ��ֵ�����ֵ��Ϊ->ccccc

//int i;
//int main()
//{
//	i--;
//	//sizeof������������㷵�صĽ����size_t���͵ģ����޷������͵�
//	//i->int��ת��Ϊunsigned int
//	if (i > sizeof(i))//C �����в�ͬ���ͱ���֮��Ƚ�ʱ����ת���ɽϴ�Χ���ͽ��бȽ�
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

//��Ŀ��
//��Ŀ���ƣ�x��ͼ��
//��Ŀ���ݣ��������룬һ��������2-20������ʾ�����������Ҳ��ʾ��ɡ�x���ķ�б�ߺ���б�ߵĳ���
//int main()
//{
//	int x = 0;
//
//	while (1)
//	{
//		int i = 0;
//		int j = 0;
//		scanf("%d", &x);
//		for (i = 0; i < x; i++)
//		{
//			for (j = 0; j < x; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == x - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//
//	return 0;
//}

//��Ŀ��
//��Ŀ���ƣ�����·�����
//��Ŀ���ݣ�������ݺ��·ݣ�������һ��������ж�����

int is_leap_year(int y)
{
	if ((y % 4 == 0) && (y % 100) != 0 || (y % 400 == 0))
	{
		return 1;
	}
	return 0;
}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int i = 0;
//
//	scanf("%d %d", &year, &month);
//
//	if (is_leap_year(year))
//	{
//		if (month < 8)
//		{
//			if (month = 2)
//			{
//				printf("29\n");
//			}
//			else if (month % 2 != 0)
//			{
//
//				printf("31\n");
//
//			}
//			else
//			{
//				printf("30\n");
//			}
//		}
//		else
//		{
//			if (month % 2 == 0)
//			{
//				printf("31\n");
//			}
//			else
//			{
//				printf("30\n");
//			}
//		}
//	}
//	else
//	{
//		if (month < 8)
//		{
//			if (month = 2)
//			{
//				printf("28\n");
//			}
//			else if (month % 2 != 0)
//			{
//
//				printf("31\n");
//
//			}
//			else
//			{
//				printf("30\n");
//			}
//		}
//		else
//		{
//			if (month % 2 == 0)
//			{
//				printf("31\n");
//			}
//			else
//			{
//				printf("30\n");
//			}
//		}
//
//	}
//
//	return 0;
//}

//��ʦд����
int main()
{
	int y = 0;
	int m = 0;
	int d = 0;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	while (scanf("%d %d", &y, &m) == 2)
	{
		d = days[m];
		if ((is_leap_year(y) == 1) && (m == 2))
		{
			d++;
		}
		printf("%d\n", d);
	}

	return 0;
}