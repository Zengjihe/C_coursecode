#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//
//    scanf("%d%d", &a, &b);
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
//    //scanf("%c%c", &a, &b);
//
//    scanf("%c", &a);
//    getchar();//注意空字符以及换行符的读取
//    scanf("%c", &b);
//    getchar();
//
//    printf("%c\n", a + 32);
//    printf("%c\n", b + 32);
//
//    return 0;
//}

//int main()
//{
//    char a = 0;
//    char b = 0;
//
//    while (scanf("%c", &a) == 1)
//    {
//        getchar();
//
//        if (a >= 'A' && a <= 'Z')
//        {
//            printf("%c\n", a + 32);
//        }
//        if (a >= 'a' && a <= 'z')
//        {
//            printf("%c\n", a - 32);
//        }
//    }
//
//    return 0;
//}

//int main()
//{
//    int a = 0;
//
//    scanf("%x", &a);
//
//    printf("%d\n", a);
//
//    return 0;
//}

//int main()
//{
//
//    printf("%#o %#X", 1234, 1234);//#控制前导显示，X为大写，后面输出的十六进制前导符也为大写0X，小写x对应0x
//
//    return 0;
//}

int main()
{
    char a = 0;
    int b = 0;
    float c = 0.0f;

    scanf("%c %d %f", &a, &b, &c);

    printf("%c %d %.6f\n", a, b, c);

    return 0;
}