//1�������λ����5�֣�
//��Ŀ���ݣ�
//
//�������λ����
//
//
//
//����ÿ�ζ���һ������λ����Ȼ�������������֡�ע�⣬����������ֺ��н�β��0ʱ�������Ӧ����ǰ����0����������700�����Ӧ����7��
//
//
//
//��ʾ����%10���Եõ���λ������/100���Եõ���λ��...���������õ����������ֺ���������λ*100+ʮλ*10+��λ���͵õ��˽����
//
//
//
//ע�⣺������ĿҪ����������������κ��������ݣ���������ʱ����ʾ�����ʱ��˵���ȵȶ����ܡ������ĿҪ�������������֣������ֻ�����������֣�����֮���κ����ݶ����������
//
//
//
//�����ʽ:
//
//ÿ��������һ��3λ����������
//
//
//
//�����ʽ��
//
//������������
//
//
//
//����������
//
//123
//
//
//
//���������
//
//321



#include <stdio.h>

int main()

{
	int a, b;
	scanf("%d", &a);
    b = a % 10 * 100 + a / 10 % 10 * 10 + a / 100;
    printf("%d\n", b);
    
    return 0;
}