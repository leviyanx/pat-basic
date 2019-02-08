/**
-  Author : Yan lian   Version : 1.0   Date : 2019年2月7日星期四
*/

#include <stdio.h>

int main()
{
    int n;           //划拳轮数
    int A_drink = 0; //甲喝酒次数
    int B_drink = 0; //乙喝酒次数

    scanf("%d", &n);

    int i;

    //甲喊，甲划，乙喊，乙划
    int A_shout[n], A_rowing[n], B_shout[n], B_rowing[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d %d", &A_shout[i], &A_rowing[i], &B_shout[i], &B_rowing[i]);
    }

    while (i--)          //喝酒次数计算
    {
        if (((A_rowing[i] == A_shout[i] + B_shout[i]) && (B_rowing[i] == A_shout[i] + B_shout[i]))
            || ((A_rowing[i] != A_shout[i] + B_shout[i]) && (B_rowing[i] != A_shout[i] + B_shout[i])))
        {
            continue;   //下一轮
        }
        else if (A_rowing[i] == A_shout[i] + B_shout[i])
        {
            B_drink++;  //甲赢，乙喝酒
        }
        else if (B_rowing[i] == A_shout[i] + B_shout[i])
        {
            A_drink++;  //乙赢，甲喝酒
        }
    }

    //输出
    printf("%d %d", A_drink, B_drink);
}
