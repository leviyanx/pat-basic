/**
-  Author : Yan lian   Version : 1.0   Date : 2019��2��7��������
*/

#include <stdio.h>

int main()
{
    int n;           //��ȭ����
    int A_drink = 0; //�׺Ⱦƴ���
    int B_drink = 0; //�ҺȾƴ���

    scanf("%d", &n);

    int i;

    //�׺����׻����Һ����һ�
    int A_shout[n], A_rowing[n], B_shout[n], B_rowing[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &A_shout[i], &A_rowing[i], &B_shout[i], &B_rowing[i]);
    }

    while (i--)          //�Ⱦƴ�������
    {
        if (((A_rowing[i] == A_shout[i] + B_shout[i]) && (B_rowing[i] == A_shout[i] + B_shout[i]))
            || ((A_rowing[i] != A_shout[i] + B_shout[i]) && (B_rowing[i] != A_shout[i] + B_shout[i])))
        {
            continue;   //��һ��
        }
        else if (A_rowing[i] == A_shout[i] + B_shout[i])
        {
            B_drink++;  //��Ӯ���ҺȾ�
        }
        else if (B_rowing[i] == A_shout[i] + B_shout[i])
        {
            A_drink++;  //��Ӯ���׺Ⱦ�
        }
    }

    //���
    printf("%d %d", A_drink, B_drink);
}
