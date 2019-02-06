/**
-  Author : Yan lian  Version : 2.0  Date : 2019��2��6��������
-  Thought :
   1.�ȴ洢һ�������ٲ��������̬������Ԫ�غ�DA��DB�Ƚϣ���¼�Ƚϳɹ�����
   2.�����PA��PB�Ĵ�С�������

-  Modification :
   1.�� int ��Ϊlong long
   2.˼·�޸ģ�����һ��ʼ��������洢�������ȴ洢һ��������������ͨ��ȡģ10�ͳ�10����һλһλ�رȽ�

-  History :
   1.Author : Yan lian
   2.Version : 1.0
   3.Date : 2019��2��5�����ڶ�
*/
 #include <stdio.h>

 int main()
 {
    int PA = 0;
    int PB = 0;
    long long A, DA, B, DB;

    scanf("%lld %lld %lld %lld", &A, &DA, &B, &DB);

    /*��PA*/
    while (A != 0)
    {
        if (A % 10 == DA)
        {
            PA = PA * 10 + DA;
        }
        A /= 10;
    }

    /*��PB*/
    while (B != 0)
    {
        if (B % 10 == DB)
        {
            PB = PB *10 + DB;
        }
        B /= 10;
    }

    printf("%d", PA+PB);

    return 0;
 }
