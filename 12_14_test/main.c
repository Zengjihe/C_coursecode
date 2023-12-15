#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//
//    while (scanf("%4d%2d%2d", &a, &b, &c) == 3)//%m制定输入域宽,scanf可以配合%m进行使用
//    {
//        printf("year=%4d\nmonth=%02d\ndate=%02d\n", a, b, c);
//    }
//
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    int b = 0;
//
//    scanf("a=%d,b=%d", &a, &b);
//    {
//        printf("a=%d,b=%d\n", b, a);
//    }
//
//    return 0;
//}

//int main()
//{
//    char a = 0;
//    char b = 0;
//
//    scanf("%c", &a);
//    getchar();//注意空字符以及换行符的读取
//    scanf("%c", &b);
//    getchar();
//    printf("%c\n", a + 32);
//    printf("%c\n", b + 32);
//
//    return 0;
//}

int main()
{
    char a = 0;
    char b = 0;

    scanf("%c %c", &a, &b);//中间加空格默认跳过' ','\n'和tab
    //getchar();//注意空字符以及换行符的读取
    //scanf("%c", &b);
    //getchar();

    printf("%c\n", a + 32);
    printf("%c\n", b + 32);

    return 0;
}