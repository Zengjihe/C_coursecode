#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int year = 1009;
//	int* p = &year;
//
//	(*p)++;//(*p)++ -> *p=*p+1;
//
//	printf("%d\n", year);
//
//	return 0;
//}

//��Ŀ���ƣ�����С������
//��Ŀ���ݣ�������A��������B����С��������ָ�ܱ�A��B������
//��С��������ֵ�����һ���㷨��������A��B����С��������

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//
//	scanf("%d %d", &a, &b);
//
//	while (++i)
//	{
//		if ((a * i) % b == 0)
//		{
//			printf("%d\n", a * i);
//			break;
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
//	int i = 1;
//
//	scanf("%d %d", &a, &b);
//
//	while ((a * i) % b)
//	{
//		i++;
//	}
//
//	printf("%d\n", a * i);
//
//	return 0;
//}

//��Ŀ���ƣ������ַ���
//��Ŀ���ݣ���һ�仰�ĵ��ʽ��е��ã���㲻���á�
//����I like beijing.�����������Ϊ��beijing.like I

//#include <string.h>
//
//void reverse_unit(char* s)
//{
//	int num = strlen(s);
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	char v[100] = { 0 };//������������
//
//	strcpy(v, s);//ʹ��strcpy�������и���
//	for (i = num - 1; i >= 0; i--)
//	{
//		//�ɺ���ǰ�����ո�Ϳ�ʼ����
//		if (*(s + i) == ' ')
//		{
//			for (j = i + 1; j < num; j++)
//			{
//				*(v + k) = *(s + j);
//				k++;
//			}
//			*(v + k) = ' ';
//			k++;
//			//��Ϊ��һ��num����������
//			num = i--;
//		}
//	}
//	//����ǰ���һ������ʱ��û�пո������ӡ����
//	while (*(s + 1 + i) != ' ')
//	{
//		*(v + k) = *(s + 1 + i);
//		k++;
//		i++;
//	}
//	strcpy(s, v);
//	printf("%s\n", s);
//}
//
//int main()
//{
//	char str[100] = { 0 };
//
//	gets(str);
//
//	reverse_unit(str);
//
//	return 0;
//}

//����2->���������ã��������������

void reverse(char* left, char* right)
{
	int temp = 0;

	while (left < right)
	{
		temp = *right;
		*right = *left;
		*left = temp;
		left++;
		right--;
	}
}

int main()
{
	char str[101] = { 0 };

	gets(&str);

	//��������
	reverse(str, str + strlen(str) - 1);
	//����������
	char* start = str;
	char* end = start;
	
	while (*end)
	{
		while ((*end != ' ') && (*end != '\0'))
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != '\0')
		{
			end++;
		}
		start = end;
	}

	printf("%s\n", str);

	return 0;
}

