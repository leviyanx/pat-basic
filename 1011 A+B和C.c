/***********************************************************
-  File name : A+B��C
-  Author : Yanlian  Version : 1.0  Date : 2019��2��3��������
***********************************************************/
#include <stdio.h>

int main()
{
    int test_num;

    scanf("%d", &test_num); //���������������

    /*�洢��������*/
    int i, j;
    int test_exam[test_num][3];
    for (i = 0; i < test_num; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &test_exam[i][j]);
        }
    }

    /*�Ƚϲ�������*/
    for (i = 0; i < test_num; i++)
    {
        if (test_exam[i][0] + test_exam[i][1] > test_exam[i][2])
        {
            printf("Case #%d: true\n", i+1);
        }
        else
        {
            printf("Case #%d: false\n", i+1);
        }
    }

    return 0;
}
