#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    int a = 0XABCDEF;//����ʮ�����Ʊ�������ֵǰ��ü���0X\0x.
//
//    printf("%15d\n", a);
//
//    return 0;
//}

//����������
//���������������X��N��1��X��7, 1��N��1000����
//���������
//���һ�����֣���ʾ��ѧ���������ڼ���
int main()
{
    int a = 0;
    int b = 0;
    int i = 0;

    while (scanf("%d %d", &a, &b) == 2)//ѭ������
    {
        b = b % 7;//һ������7�죬���ھ���7��һ�����������ھ��Ǳ���
        for (i = 1; i <= b; i++)
        {
            a += 1;
            if (a > 7)//a>7ʱ�����¸�ֵΪ0
            {
                a = 1;
            }
        }
    }

    printf("%d\n", a);

    return 0;
}