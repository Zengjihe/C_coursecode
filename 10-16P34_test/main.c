#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int i = 1;
	//do
	//{
	//	if (i == 5)
	//	{
	//		continue;//ע��continue�����������������䣬��ӡ��1234�������5����ѭ��
	//	}
	//	printf("%d ", i);
	//	i++;
	//}
	//while (i <= 10);
	//return 0;

	//int i = 1;
	//do//do whileһ�㲻����ʹ�ã�for>while>do while
	//{
	//	i++;
	//	if (i == 5)
	//	{
	//		continue;//ע�����һ��ѭ������
	//	}
	//	printf("%d ", i);
	//}
	//while (i <= 10);
	//return 0;

	//д���룺
	//�취�����˼ά��+д���루�����﷨��ʽȥд��
	//���˼ά

	/*int i = 0;
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	printf("%d\n", ret);
	return 0;*/

	//int i = 0;
	//int j = 0;
	//int ret = 0;
	//int sum = 0;
	//for (i = 1; i <= 3; i++)
	//{
	//	for (j = 1,ret=1; j <= i; j++)//ret�ó�ʼ��Ϊ1
	//	{
	//		ret = ret * j;
	//	}
	//	sum += ret;//�����䲻Ҫ�ŵ�����ѭ�������棬�����������
	//}
	//printf("%d", sum);
	//return 0;

	//int n = 0;
	//int ret = 1;
	//int sum = 0;
	//for (n = 1; n <= 3; n++)
	//{
	//	ret = ret * n;
	//	sum += ret;
	//}
	//printf("%d", sum);
	//return 0;

	//int arr[] = { 1,2,3,4,5,6,7,8,9 };//���ֲ��ҷ���Ч��̫��
	//int i = 0;
	//int sz = 0;
	//int k = 17;
	//sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//	if (k == arr[i])
	//	{
	//		printf("�ҵ��ˣ��±��ǣ�%d\n", i);
	//		break;
	//	}
	//}
	//if (i == sz)
	//{
	//	printf("�Ҳ���");
	//}

	//return 0;

	int arr[] = {1,2,3,4,5,6,7,8,9};//ʹ���۰뷨-������������
	int k = 1;
	int left_i = 0;
	int right_i = 0;
	int mid_i = 0;
	int sz = 0;//�������
	sz = sizeof(arr) / sizeof(arr[0]);
	for (left_i = 0, right_i = sz-1; left_i<=right_i;)
	{
		//mid_i = (left_i + right_i)/2;//�������������п��ܻ������left_i��right_i�ĺʹ������ͱ����ܱ�ʾ�����ֵʱ���ᷢ���洦
		//Ϊ�˷�ֹ������ɲ������·�ʽ,��������ֱ��������������2��������������
		mid_i = left_i + (right_i - left_i) / 2;
		if (k < arr[mid_i])
		{
			right_i =mid_i-1;//�۰���ҷ�����
		}
		else if(k>arr[mid_i])
		{
			left_i =mid_i+1;//�۰���ҷ�����
		}
		else 
		{
			printf("�ҵ��ˣ����±�Ϊ��%d", mid_i);
			break;
		}
	}
	if (left_i>right_i)
	{
		printf("�Ҳ�����");
	}
	return 0;

}