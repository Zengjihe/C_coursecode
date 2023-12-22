#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    int a = 0XABCDEF;//创建十六进制变量，数值前面得加上0X\0x.
//
//    printf("%15d\n", a);
//
//    return 0;
//}

//输入描述：
//输入包含两个数字X，N（1≤X≤7, 1≤N≤1000）。
//输出描述：
//输出一个数字，表示开学日期是星期几。
int main()
{
    int a = 0;
    int b = 0;
    int i = 0;

    while (scanf("%d %d", &a, &b) == 2)//循环输入
    {
        b = b % 7;//一个星期7天，周期就是7，一个数加上周期就是本身
        for (i = 1; i <= b; i++)
        {
            a += 1;
            if (a > 7)//a>7时，重新赋值为0
            {
                a = 1;
            }
        }
    }

    printf("%d\n", a);

    return 0;
}