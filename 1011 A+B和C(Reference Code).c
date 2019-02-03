/************************************************************
-  File name : A+B和C（参考代码）
-  Author : 算法笔记  Version : 1.0  Date : 2019年2月3日星期日
************************************************************/
#include <stdio.h>

int main()
{
    int T;
    int tcase = 1;

    scanf("%d", &T);  //输入数据组数

    /*While循环判断语句是亮点*/
    while (T--)      //T=0时不执行
    {
        long long a, b, c;

        scanf("%lld %lld %lld", &a, &b, &c);

        if (a + b > c)
        {
            /*此处是亮点*/
            printf("Case #%d: true\n", tcase++);  //先输出tcase，再自加1
        }
        else
        {
            printf("Case #%d: false\n", tcase++);
        }
    }

    return 0;
}
