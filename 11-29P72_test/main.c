#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����ʽ��ֵ
//����ʽ��ֵ��˳��һ�������ɲ����������ȼ��ͽ���Ծ�����
//ͬ������Щ����ʽ�Ĳ���������ֵ�Ĺ����п�����Ҫת��Ϊ�������͡�

//int main()
//{
//	int a = 2 + 6 / 3;//�ȱȽϱ���ʽ�в��������ȼ�
//	int b = 2 + 1 + 3;//���ȼ���ͬ���������
//	return 0;
//}

//��ʽ����ת��
//C������������������������ȱʡ��Ĭ�ϣ��������͵ľ��������е�
//Ϊ�˻��������ȣ�����ʽ�е��ַ��Ͷ����Ͳ�������ʹ��֮ǰ��ת��Ϊ��ͨ���ͣ�����ת����Ϊ����������

//int main()
//{
//	//�����з��ŵ��ַ�����
//	char c = -1;//-1��������32������λ
//	//10000000000000000000000000000001
//	//11111111111111111111111111111111->-1�Ĳ���
//	//��Ϊ��char���ͣ�cֻռһ���ֽ�
//	//��11111111->c���ض��ˣ�
//	//����c��������Ϊ11111111111111111111111111111111����������ǰ�油1��
//	//��������ǰ�油0
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char a = 5;
//	//00000000000000000000000000000101
//	//00000101->a(��ʱa�ŵ������������λ)
//	//�����з�������˵
//	//��ʱһ������
//	char b = 126;
//	//00000000000000000000000011111110
//	//01111110->b
//	char c = a + b;
//	//a + b
//	//��ʱa��b�ﲻ��һ�����ʹ�С
//	//��ʱ�ͻᷢ����������
//	//���������ǰ��ձ������������͵ķ���λ��������
//	//00000000000000000000000000000101->a
//	//00000000000000000000000001111110->b
//	//00000000000000000000000010000011->a + b
//	//10000011->c
//	printf("%d\n", c);
//	//��ӡʱ������������
//	//11111111111111111111111110000011-����
//	//10000000000000000000000001111101-ԭ��
//	return 0;
//}
//�������������壺
//����ʽ����������Ҫ��CPU����Ӧ����������ִ�У�CPU��
//������������ALU���Ĳ��������ֽڳ���һ�����int���ֽڳ��ȣ�
//ͬʱҲ��CPU��ͨ�üĴ����ĳ��ȡ�
//��ˣ���ʹ����char���͵���ӣ���CPUִ��ʱʵ����ҲҪ
//��ת��ΪCPU�����Ͳ������ı�׼���ȡ�

//����ת��
//���ĳ���������ĸ������������ڲ�ͬ�����ͣ���ô��������һ��
//��������ת��Ϊ��һ�������������ͣ�����������޷����С�
//��Ҫ����Ѱ������ת��
//���ĳ�����������������б��������ϵͣ���ô����Ҫת��Ϊ
//��һ�������������ͺ�ִ������

//�������ڵĲ�������ִ���ĸ���ȡ�������ǵ����ȼ���
//ע��������ָ���ڲ�����
//������ߵ����ȼ���ͬ��ȡ�������ǵĽ���ԡ�
//�Ƿ����ֵ�����Ӱ��
//����&&��||�������������Լ����ŵȣ����Ϊ�ٻ�������������ұ߾Ͳ��ٲ���Ҫ����
//д���Ĵ���Ҫ��Ψһȷ����·��

//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//	return 0;
//}//ѧ����Կ����,����ͦ����˼��