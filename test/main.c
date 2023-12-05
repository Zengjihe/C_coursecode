#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define HERNAME "Alice"
//int main()
//{
//	printf("ÄãºÃ");
//	//printf("ÊÀ½ç");
//	return 0;
//}
int main()
{
	char name[40] = "ZenHui";
	printf("What's your name?\n");
	printf("My name is %s.\n", name);
	printf("Hello, ZengHui. My name is %s.\n", HERNAME);

	printf("%zd ", strlen(name));//6
	printf("%zd ", sizeof(name));//40
	printf("%zd ", strlen(HERNAME));//5
	printf("%zd", sizeof(HERNAME));//6
}