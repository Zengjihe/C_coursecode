#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////��Ŀһ
////��Ŀ���ƣ�
////��ӡһ������ÿһλ
////��Ŀ���ݣ�
////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void print(int num)
//{
//	if ((num / 10) != 0)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//��Ŀ��
//��Ŀ����
//��׳�
//��Ŀ���ݣ�
//�ݹ�ͷǵݹ�ʵ���������Ľ׳ˣ���������������⣩
//1.�ݹ�
//int fac(int num)
//{
//	if (num == 1)
//	{
//		return num;
//	}
//	else
//	{
//		return num * fac(num - 1);
//		//�ݹ麯��һ��������������
//		//ÿһ�εݹ�󶼻��������������������
//		//ֱ����������������
//		//�������ݡ��Ĳ��裬��ʼִ�С��顯�Ĳ���
//	}
//
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	ret = fac(num);
//	printf("%d\n", ret);
//	return 0;
//}
////2.�ǵݹ�
//int fac(int num)
//{
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= num; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	ret = fac(num);
//	printf("%d\n", ret);
//	return 0;
//}

////��Ŀ��
////��Ŀ���ƣ�
////strlen��ģ�⣨�ݹ�ʵ�֣�
////��Ŀ���ݣ�
////�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//int my_strlen(char str[])//ע������str[]��char����
//{
//	if (str[0] != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char str[] = "abcdefgh";
//	int ret = my_strlen(str);
//	printf("%d\n", ret);
//	return 0;
//}

//��Ŀ��
//��Ŀ���ƣ�
//�ַ������򣨵ݹ�ʵ�֣�
//��Ŀ���ݣ�
//��дһ������reverse_string(char* string)*���ݹ�ʵ�֣�
//ʵ�֣��������ַ������ַ��������У����������ӡ��
//����ʹ��C���Կ����ַ����Ĳ�������
//���磺
//char arr[] = "abcdef";
//����֮����������ݱ�ɣ�fedcba
//1.��ʹ�õݹ�
//void reverse_string(char arr[], int left, int right)
//{
//	int temp = 0;
//	while(left < right)
//	{
//		temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int left = 0;
//	//int right = strlen(arr) - 1;���������Ҳ����
//	int right = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	right = sz - 2;
//	reverse_string(arr, left, right);
//	printf("%s\n", arr);
//	return 0;
//}
//2.�ݹ鷽��ʵ��
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
////void reverse_string(char* str)
////{
////	char temp = *str;
////	int len = my_strlen(str);
////	*str = *(str +len - 1);
////	*(str + len - 1) = '\0';
////	if(my_strlen(str + 1) >= 2)
////	reverse_string(str + 1);
////	*(str + len - 1) = temp;
////}
////int main()
////{
////	char arr[] = "abcdefg";
////	reverse_string(arr);
////	printf("%s\n", arr);
////	return 0;
////}
//�ݹ�ķ���2-�����reverse��������
//void reverse_string(char str[], int left, int right)
//{
//	//һ��Ҫ������������������ٽ����ݹ�
//	if (left < right)
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		reverse_string(str, left + 1, right - 1);
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = my_strlen(arr);
//	int left = 0;
//	int right = 0;
//	right = sz - 1;
//	reverse_string(arr, left, right);
//	printf("%s\n", arr);
//	return 0;
//}

////��Ŀ��
////��Ŀ���ƣ�
////����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
////��Ŀ���ݣ�
////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//int DigitSum(int n)
//{
//	if (n / 10 != 0)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int n = 0;
//	int ret = 0;
//	scanf("%u", &n);
//	ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}

//��Ŀ��
//��Ŀ���ƣ�
//�ݹ�ʵ��n��k�η�
//��Ŀ���ݣ�
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
//ע�⿼�Ǹ��η�
//C���Կ�����Ҳ��һ������pow����������n�η�
//double nth_pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * nth_pow(n, k - 1);
//	}
//	else if(k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / nth_pow(n, -k);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = nth_pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}

//��Ŀ��
//��Ŀ���ƣ�
//����쳲���������
//��Ŀ���ݣ�
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//1.�ݹ鷨
//int count = 0;
//int Fibona(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n > 2)
//	{
//		return Fibona(n - 1) + Fibona(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	ret = Fibona(n);
//	printf("%d\n", ret);
//	printf("%d\n", count);
//	return 0;
//}
//2.�ǵݹ鷨
//int Fibona(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fibona(n);
//	printf("%d\n", ret);
//	return 0;
//}

//��Ŀ��
#include <string.h>
//sizeof
//sizeof��һ��������
//������������������ͣ���ռ�ڴ�ռ�Ĵ�С������ע�ڴ��д�ŵľ�������
// ��λ���ֽ�
//strlen
//strlen��һ���⺯������ר�����ַ������ȵģ�ֻ������ַ���
//�Ӳ��������ĵ�ַ���һֱ��\0��ͳ��\0֮ǰ���ֵ��ַ��ĸ���
//int main()
//{
//	char arr[] = "hello bit";
//	printf("%zu %d\n", sizeof(arr), strlen(arr));
//	return 0;
//}

////��Ŀ��
////�������������������͵ȼ�
//int main()
//{
//	int arr[] = { 1, 2, 3 };
//	printf("%zu\n", sizeof(arr));
//	printf("%zu\n", sizeof(int[3]));
//	return 0;
//}

//��Ŀʮ
//��Ŀ���ƣ�
//��������
//��Ŀ����
//������A�е����ݺ�����B�����ݽ��н�����������һ����
//void swap_arr(int arrA[], int arrB[], int sz1, int sz2)
//{
//	int temp = 0;
//	int i = 0;
//	if (sz1 == sz2)
//	{
//		for (i = 0; i < sz1; i++)
//		{
//			temp = arrA[i];
//			arrA[i] = arrB[i];
//			arrB[i] = temp;
//		}
//	}
//	else
//	{
//		printf("�Ƿ�����\n");
//	}
//}
//int main()
//{
//	int arrA[] = { 1,3,5,7,9 };
//	int sz1 = sizeof(arrA) / sizeof(arrA[0]);
//	int arrB[] = { 0,2,4,6,8 };
//	int sz2 = sizeof(arrB) / sizeof(arrB[0]);
//	swap_arr(arrA, arrB, sz1, sz2);
//	int i = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", arrA[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", arrB[i]);
//	}
//	printf("\n");
//
//	return 0;
//}

////��Ŀʮһ
////��Ŀ���ƣ�
////�������
////��Ŀ���ݣ�
////����һ���������飬��ɶ�����Ĳ���
////1.ʵ�ֺ���init������ʼ������Ϊȫ0
////2.ʵ��print������ӡ�����ÿ��Ԫ��
////3.ʵ��reverse���������������Ԫ�ص�����
////Ҫ���Լ�������Ϻ����Ĳ���������ֵ
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////ʹ��ѭ���ṹ��Ҳ���ǵ�����
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int temp = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = 0;
//	int i = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr, sz);
//	print(arr, sz);
//	//reverse(arr, sz);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	return 0;
//}

////��Ŀʮ��
////��Ŀ���ݣ�
////ð������
////��Ŀ���ݣ�
////ʵ��һ�������������ð������
//void bubble(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,7,3,6,3,9,10,-4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//��Ŀʮ��
//��Ŀ���ƣ�
//������
//��Ŀ���ݣ�
//1.�����������Ϸ����
//2.�������������ƺʹ������һƪ����