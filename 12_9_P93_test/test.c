#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//��Ŀ���ƣ��������ж�
//��Ŀ���ݣ�KiKi��֪���Ѿ�������������a��b��c�ܷ񹹳�������
//����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ�
//������������Ŀ�ж����������ݣ�ÿһ����������a��b��c��0<a,b,c<100)��
//��Ϊ�����ε������ߣ��ÿո�ָ�
//������������ÿ���������ݣ����ռһ�У�����ܹ��������Σ��ȱ������������
//Equilaterial triangel�����������������lsoscolos triangle������������������ordinary triangel<
//��֮�����not a triangel.

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//	int sum = 0;
//
//	while (scanf("%d %d %d", &a, &b, &c) == 3)//scanf��������ֵ�ĸ���
//	{
//		sum = a + b + c;
//		max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
//		if ((sum - max) > max)
//		{
//			if (a == b && b == c)
//			{
//				printf("�ȱ�������\n");
//				continue;
//			}
//			else if (a == b || b == c || a == c)
//			{
//				printf("����������\n");
//				continue;
//			}
//			printf("��ͨ������\n");
//		}
//		else
//		{
//			printf("����������\n");
//		}
//	}
//
//	return 0;
//}

//��ʦд��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if ((a + b) > c && (a + c) > b && (b + c) > a)
//		{
//			if (a == b && b == c)
//			{
//				printf("�ȱ�������\n");
//			}
//			else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
//			{
//				printf("����������\n");
//			}
//			else
//			{
//				printf("��ͨ������\n");
//			}
//		}
//		else
//		{
//			printf("����������\n");
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	printf("%zu\n", sizeof(short));
//}

//��Ŀ���ƣ�ʹ��ָ���ӡ��������
//��Ŀ���ݣ�дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��
//arr��һ������һά���顣

//void print(int* pa)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *pa++);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	print(arr);
//
//	return 0;
//}

//��Ŀ���ƣ��ַ�������
//��Ŀ���ݣ�дһ����������������һ���ַ���������

//void reverse_str(char* s, unsigned int sz)
//{
//	int i = 0;
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%c", *(s + i));
//	}
//
//}

//void reverse_str(char* s, unsigned int z)
//{
//	int left = 0;
//	int right = z - 2;
//	int temp = 0;
//
//	while (left < right)
//	{
//		temp = *(s + right);
//		*(s + right) = *(s + left);
//		*(s + left) = temp;
//		left++;
//		right--;
//	}
//	printf("%s\n", s);
//}
//
//int main()
//{
//	char str[10] = { 0 };
//
//	//scanf("%s", &str);//scanf���������ո��ֹͣ
//	gets(str);//����ʹ��gets�����������������
//
//	unsigned int sz = sizeof(str) / sizeof(str[0]);
//
//	reverse_str(str, sz);
//
//	return 0;
//}

//��Ŀ���ƣ��������
//��Ŀ���ݣ���Sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�����a��һ�����֡�

//#include <math.h>
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	int sum = 0;
//
//	scanf("%d %d", &a, &n);
//
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int temp = 0;
//	int n = 0;
//	
//	for (i = 0; i <= 100000; i++)
//	{
//		temp = i;
//		sum = 0;
//		n = 0;
//		do
//		{
//			n++;
//		} while (temp /= 10);
//		temp = i;
//		while (temp)//ѧ���������
//		{
//			sum += (int)pow(temp % 10, n);
//			temp /= 10;
//		} 
//		if (i == sum)
//		{
//			printf("%d ", sum);
//		}
//
//	}
//
//	return 0;
//}



