#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>//��������ʹ����Sleep()����������������ͷ�ļ�
#include <stdlib.h>//��������������system��������������������ͷ�ļ�
#include <string.h>//���ͷ�ļ���strcmp�����й�

int main(void)
{
	////��д���룬��ʾ����ַ��������ƶ������м���
	//char arr1[] = { "Welcome to bit!!!" };
	//char arr2[] = { "#################" };
	//int left = 0;
	//int right = 0;
	//right = strlen(arr1)-1;//strlen���㵽\0֮ǰ���ַ�����
	////���ʹ�����ַ�������Ҫ��2����Ϊsizeof��\0Ҳ���ȥ��
	////right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	//while(left<=right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);//�ǵ����
	//	Sleep(1000);//�ӳ�1000ms��Ҳ����1s
	//	system("cls");//system��һ���⺯��������ִ��ϵͳ�������
	//	left++;
	//	right--;
	//}
	//printf("%s\n", arr2);
	//return 0;

	//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Σ���ֻ���������������룬���������ȷ����ʾ��¼�ɹ����������������������˳�����
	//�Ƚ������ַ����Ƿ���ȣ�����ʹ��==����Ӧ��ʹ��һ���⺯����strcmp(##,##)=0������ֵΪ0�����������ַ���ȣ�
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("�������¼����:");
		scanf("%s", password);//ע�������password����Ҫȡ��ַ���ţ���Ϊ���鱾�����ȡ��ַ���ţ�
		if (strcmp(password,"abcde")==0)//strcmp��string_compare��д
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (3 == i)
	{
		printf("��½ʧ�ܣ��˳�����");
	}
	return 0;

}//��ο�ѧϰ������ͷ�ļ���windows.h;stdlib.h;string.hע�⹮��