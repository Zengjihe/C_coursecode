#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

//int main()
//{
//	//����������
//	int a = 7;
//	int b = 2;
//	int c = a / b;
//	int d = a % b;
//	printf("c = %d\n", c);//3
//	printf("d = %d\n", d);//1
//	return 0;
//}

//int main()
//{
//	//�ƶ�������
//	//int a = 7;
//	int a = -7;
//	//����
//	//int b = a << 1;//C���Դ洢���ǲ���
//	//printf("a = %d\n", a);//aʼ�ձ��ֲ���
//	//printf("b = %d\n", b);//14,����=ԭ����2
//	//����
//	int b = a >> 1;//visual studio���õ�������λ�ƣ�����ԭ��������
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);//3;4
//
//	return 0;
//}

//int main()
//{
//	//λ������ &(��λ��) |(��λ��) ^(��λ���)  ֻ����������
//	int a = 7;
//	int b = -2;
//	//int c = a & b;//һ������¶������ģ����������������ƶ�Ӧ��λ���Ǹ�����Ϊ��
//	//int c = a | b;//һ������¶��Ǹ��ģ����������������ƶ�Ӧ��λ����������Ϊ��
//	int c = a ^ b;//�����������ƶ�Ӧ��λ����򷵻�0�������򷵻�1
//	printf("c = %d\n", c);//6��-1; -7
//	return 0;
//}

//int main()
//{
//	//������������ֵ
//	int a = 3;
//	int b = 5;
//	printf("a = %d  b = %d\n", a, b);
//	//���ַ����Ǵ��������
//	//��a��b�������ǳ����ʱ��
//	//���ǵĺ;ͺ��п��ܻ����
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d  b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ��a = %d  b = %d\n", a, b);
//	//������㽻���ɣ���3^5^3=3^3^5
//	a = a ^ b;//3^5
//	b = a ^ b;//3^5^5->3^0->3
//	a = a ^ b;//3^5^3->5^0->5
//	printf("������a = %d  b = %d\n", a, b);
//	return 0;
//}

////��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ���
//int main()
//{
//	int a = 0;
//	int i = 0;
//	unsigned int b = 0;
//	int c = 0;
//	int count = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 32; i++)//����2^31�Ƿ���λ�ˣ��ͻ�ʹaΪ�������õ�������
//	{
//		b = (unsigned int)pow((int)2, (int)i);
//		c = a ^ b;
//		if (c < a)
//		{
//			count++;
//		}
//	}
//	printf("%u\n", b);
//	printf("%d\n", count);
//	return 0;
//}
////��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ���
////����Ķ�������1�ĸ���
//int main()
//{
//	int a = 0;
//	int i = 0;
//	int b = 0;
//	int c = 0;
//	int countOnes = 0;
//	int countZeros = 0;
//	scanf("%d", &a);
//	for (i = 0; i < 31; i++)
//	{
//		b = (int)pow((int)2, (int)i);
//		c = a ^ b;
//		if (c < a)
//		{
//			countOnes++;
//		}
//	}
//	if (a < 0)
//	{
//		countOnes++;
//	}
//	countZeros = 32 - countOnes;
//	printf("%d\n", b);
//	printf("%d\n", countOnes);
//	printf("%d\n", countZeros);
//	return 0;
//}
//������
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	int c = 0;
//	for (i = 0; i < 32; i++)
//	{
//		c = a & 1;//�߼���
//		if (c == 1)
//		{
//			count++;
//		}
//		a = a >> 1;//����λ
//
//	}
//	printf("%d\n", count);
//	return 0;
//}
//������
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int c = 0;
//	int i = 0;
//	int b = -2;//��������Ҫ�����
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		c = a | b;
//		if (c == -1)
//		{
//			count++;
//		}
//		a = a >> 1;
//	}
//	printf("%d\n", c);
//	printf("%d\n", count);
//	return 0;
//}

//��ֵ������
//��ֵ��һ���Ⱥţ���==���ж����
//int main()
//{
//	int a = 3;//���ǳ�ʼ��
//	int a = 0;
//	a = 5;//����Ǹ�ֵ
//	return 0;
//}

////���ϸ�ֵ������
////+= -= *= /= ^= &= |= %= >>= <<= 
//int main()
//{
//	int a = 3;
//	a = a + 5;
//	a += 5;//����д���������д���ǵȼ۵�
//	return 0;
//}

//��Ŀ������-ֻ��һ��������
//˫Ŀ������-������������

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	printf("%zd\n", sizeof(a));
//	return 0;
//}

//int main()
//{
//	//~�������ư�λȡ��������λȡ������������λ
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	//00000000000000000000000000001101
//	// ���13������Ϊ�ұߵڶ�λ��0���1
//	//00000000000000000000000000000010
//	a |= (1 << 1);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 13;
//	//        00000000000000000000000000001101
//	//����ұߵ���λ1���0
//	//��λ��->11111111111111111111111111110111
//	//11111111111111111111111111110111��00000000000000000000000000001000��ȡ��
//	a &= (~(1 << 3));//������������λ��������λ
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int count = 0;
//	int b = 0;
//	for (i = 0; i < 31; i++)
//	{
//		b = a & (1 << i);
//		if (b == (1 << i))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	//*������ò������������ò�������
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	//printf("%d\n", *p);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//
//	int a = 0;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	//printf("%d", sizeof int);//�ᱨ��
//
//	return 0;
//}
////sizeof�ǲ������������������ռ�ռ���Բ������ţ���������������ռ�ռ���Ҫ������
////strlen()�Ǻ������������ַ������ȣ�ע�������ߵ�����

//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = 3;
//	int i = 0;
//	i = a++ && ++b && d++;//a���ú�ӣ�a=0������++b d++����Ҫ�ڼ���
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 2;
//	int d = 3;
//	int i = 0;
//	i = a++ || ++b || d++;//a���ú�ӣ�a=1������++b d++����Ҫ�ڼ���
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 2;
//	int d = 3;
//	int i = 0;
//	i = a++ || ++b || d++;//b�ȼӺ��ã�a=0������++b��Ҫ���㣬����Ϊ++bΪ�棬��d++����Ҫ�ټ���
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//&& ���Ϊ�٣��ұ߾Ͳ�������
//|| ���Ϊ�棬�ұ߾Ͳ������ˣ�С��ʹ��

//��������������Ŀ��������
//���ʽ1�����ʽ2�����ʽ3
//int main()
//{
//	int a = 3;
//	int b = 0;
//	
//	if (a > 5)
//	{
//		b = 3;
//	}
//	else
//	{
//		b = -3;
//	}
//
//	//(a > 5) ? (b = 3) : (b = -3);//���ʽ��Ҫ������������
//	//b = (a > 5) ? 3 : -3;
//	printf("%d\n", b);
//}

//���ű��ʽ�����ű��ʽǰ����ʽ�����㣬��ֻȡ���һ�����ʽ���
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, b = a + 1);
//	printf("c = %d\n", c);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//arr[7]-->*(arr+7)-->7[arr]-->*(7+arr)
//	//arr����Ԫ�ص�ַ
//	//arr+7��������7��Ԫ�أ�ָ���˵�8��Ԫ��
//	//*(arr+7)���ǵ�8��Ԫ��
//	arr[7] = 8;//����[]���±����ò�����
//	7[arr] = 9;//������д���ǲ���ȡ��
//	//3 + 5
//	//5 + 3
//	return 0;
//}

////�������ò�����
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = Add(a, b);//()���Ǻ������ò�������������:Add,a,b
//	printf("%d\n", c);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//void SetStu(struct Stu* ps)
//{
	//ss.age = 20;
	////ss.name = "zenghui";���������ǲ��е�
	////ss.name��ʾ������Ԫ�ص�ַ�����ܹ�ֱ�Ӹ�ֵ
	//strcpy(ss.name, "����");
	//ss.score = 100.00;

//	//ע���βε�ֵ����Ҫ�ı��
//	//strcpy((*ps).name, "����");
//	//(*ps).age = 20;
//	//(*ps).score = 100.00;
//	strcpy(ps->name, "����");//ps->age�൱��(*ps).age,�������ǵȼ۵�
//	ps->age = 20;
//	ps->score = 100.00;
//}
//void PrintStu(struct Stu ss)//����Ҳ���Ը��βδ���ַ��������ʡ�ռ�һЩ���Ͳ���Ҫ�ظ�����ʵ�ε�ֵ
//{
//	printf("%s %d %.2f\n", ss.name, ss.age, ss.score);
//}
//int main()
//{
//	struct Stu s = { 0 };
//	SetStu(&s);
//	PrintStu(s);
//	return 0;
//}