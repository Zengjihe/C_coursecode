#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Add.h"
//����Add��̬�⣬Add.lib���Ƕ�������
//���������д��Add������
//ֻ��Ҫ��Add.h��Add.lib���Ƶ���ǰ����
//����һ�¾Ϳ�������ʹ����
//�������Ա����Լ���Դ���룬ά��֪ʶ��Ȩ
#pragma comment(lib,"Add.lib")

//�����������Ͷ���
// һ������£����ֱ�ӰѺ�����������������
// ��Ȼ�����ܹ����е��ǣ��������ᱨ��
// һ���������Ѻ�������������ǰ��
//��Ҳ����ǿ�ưѺ�������������������
// ��Ҫ��ǰ���һ������
//����int Add(int x,int y);�����������Ͳ�����־���
//int Add(int x, int y);
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}
//int Add(int x, int y)
//{
//	return 0;
//}