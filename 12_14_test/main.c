#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//
//    while (scanf("%4d%2d%2d", &a, &b, &c) == 3)//%m�ƶ��������,scanf�������%m����ʹ��
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
//    getchar();//ע����ַ��Լ����з��Ķ�ȡ
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

    scanf("%c %c", &a, &b);//�м�ӿո�Ĭ������' ','\n'��tab
    //getchar();//ע����ַ��Լ����з��Ķ�ȡ
    //scanf("%c", &b);
    //getchar();

    printf("%c\n", a + 32);
    printf("%c\n", b + 32);

    return 0;
}