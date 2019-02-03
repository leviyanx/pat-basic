/*************************************************************
-  File name : A+B和C
-  Author : Yan Lian  Version : 2.0  Date : 2019年2月3日星期日
-  History :

   1.Date : 2019年2月3日星期日
     Author : Yan Lian
     Modification : 将test_exam的数据类型从int改为long long。
                    将输入从 %d 改为 %lld
*************************************************************/
#include <stdio.h>

int main()
{
    int test_num;

    scanf("%d", &test_num); //输入测试用例个数

    /*存储测试用例*/
    int i, j;
    long long test_exam[test_num][3];
    for (i = 0; i < test_num; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%lld", &test_exam[i][j]);
        }
    }

    /*比较测试用例*/
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
