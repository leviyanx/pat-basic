/************************************************************
-  File name : A+B��C���ο����룩
-  Author : �㷨�ʼ�  Version : 1.0  Date : 2019��2��3��������
************************************************************/
#include <stdio.h>

int main()
{
    int T;
    int tcase = 1;

    scanf("%d", &T);  //������������

    /*Whileѭ���ж����������*/
    while (T--)      //T=0ʱ��ִ��
    {
        long long a, b, c;

        scanf("%lld %lld %lld", &a, &b, &c);

        if (a + b > c)
        {
            /*�˴�������*/
            printf("Case #%d: true\n", tcase++);  //�����tcase�����Լ�1
        }
        else
        {
            printf("Case #%d: false\n", tcase++);
        }
    }

    return 0;
}
