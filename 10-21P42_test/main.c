#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//�����귵��1
//�������귵��0���������н���
int is_leap_year(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int dichotomizing_search(int arr[], int k,int sz)
{
	//arr��������һ��ָ��������洢��ַ����������
	//��Ҫ���βκ��������sz�����鴫��ʵ���ϴ��ݵ���������Ԫ�ص�ַ��
	//��������������
	//�����ں����ڲ�����һ�������������ֵ������Ԫ�ظ����ǲ����׵�
	//int dichotomizing_search(int arr[], int k)//�β�arr����ȥ�����飬������ָ�����
	int right = sz-1;
	//int right = 0;
	int left = 0;
	int mid = 0;
	//right = sizeof(arr) / sizeof(arr[0]);
	while (left <= right)
	{
		//mid = (left + right) / 2;
		mid = left + (right - left) / 2;
		//mid���������������ʽ���ж��壬��ֹleft��right̫�󳬹����ͱ����ܱ�ʾ�����ֵ�����������
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;//�ҵ��ͷ���mid
		}
	}
	return -1;//���Ҳ����ͷ���-1
}
//int main(void)
//{
//	//дһ�������ж�һ���ǲ�������
//	//��ӡ1000-2000��֮�������
//	//�����жϵĹ���
//	//��ͨ���꣺�ܱ�4�����Ҳ��ܱ�100����
//	//�������꣺�ܱ�400����
//	int year = 0;
//	int count = 0;
//	for(year=1000;year<=2000;year++)
//	{
//	//�ж��ǲ�������
//		if (is_leap_year(year))
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main(void)
//{
//	//дһ��������ʵ��һ��������������Ķ��ֲ���
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 10;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	ret=dichotomizing_search(arr, k,sz);
//	//while (left <= right)
//	//{
//	//	mid = (left + right) / 2;
//	//	if (arr[mid] < k)
//	//	{
//	//		left += 1;
//	//	}
//	//	if (arr[mid] > k)
//	//	{
//	//		right -= 1;
//	//	}
//	//	if (arr[mid] == k)
//	//	{
//	//		printf("�ҵ��ˣ����±�Ϊ%d\n", mid);
//	//		break;
//	//	}
//	//}
//	//if (left > right)
//	//{
//	//	printf("�Ҳ���\n");
//	//}
//	//�ҵ��˷����±�
//	//�Ҳ�������-1����ʱ���ܷ���0����Ϊ�±�Ҳ����Ϊ0 ���������ͻ
//	//�Ҳ�������ֵ�����ǳ��±��������ֵ
//	//�βκ�ʵ�ε����ֿ�����ͬ��Ҳ���Բ�ͬ
//	//���鴫�Σ�ֱ����������������Ҫ�ӷ����ţ����βζ�����Ҫ���Ϸ�����
//	//�������ʹ����˸�����ĵ�ַ������������һ���������ڴ浥Ԫ��������������ĵ�ַΪ��0��Ԫ�صĵ�ַ
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ����±�Ϊ%d\n", ret);
//
//	}
//	return 0;
//}

////bool���ͣ�C99������
//bool is_prime(int n)
//{
//	int j = 0;
//	//����������1�����������ⲻ����������������Ȼ��
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main(void)
//{
//	//int i = 0;
//	//for (i = 100; i <= 200; i++)
//	//{
//	//	if (is_prime(i))
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//	
//	//bool�洢��С
//	//printf("%zu\n", sizeof(bool));
//	return 0;
//}

//void num_add1(int* p_num)
//{
//	*p_num += 1;
//}
////ÿ�ε��ú���ʹnum����1��
////��������num�ı��ˣ��ðѵ�ַ�������õĺ�������
//int main(void)
//{
//	int num = 0;
//	num_add1(&num);
//	num_add1(&num);
//	num_add1(&num);
//	num_add1(&num);
//	num_add1(&num);
//	printf("%d ", num);
//	return 0;
//}

//int main(void)
//{
//	//��ʽ���ʣ���һ����������ֵ��Ϊ���������Ĳ�����ǰ���ǵ��з���ֵ��
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//����ʽ�����У����ִ�����д�����Ǽ��䲻�淶��
//������д����ֵ��ʱ��Ĭ�Ϸ���������int
//���������������ַ���ȥд������д�Ƿǳ�����
//Add(int x, int y)
//{
//	return x + y;
//}
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//��ȷ��˵����main�����ǲ���Ҫ������
//��ʵ���ϣ�main�������в�����
int main(void)
{

	return 0;
}
//main��������������
//����int main()������������Բ���void
int main(int argc,char* argv[],char* envp[])
{
	return 0;
}