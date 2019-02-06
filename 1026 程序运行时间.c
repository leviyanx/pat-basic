/**
-  Author : Yan lian   Version : 1.0   Date : 2019日2月9日星期三
-  Thought :
   1.四舍五入 通过判断c的后两位来判断是四舍还是五入

-  highlights :
   1.四舍五入操作
   2.输出：%02d
*/

#include <stdio.h>

#define CLK_TCK 100

int main()
{
    int c1, c2, c, time;
    int hou, min, sec;

    scanf("%d %d", &c1, &c2);

    c = c2 - c1;

    /*四舍五入操作*/
    if (c % CLK_TCK >= 50)
    {
        time = c / 100 + 1;
    }
    else
    {
        time = c / 100;
    }

    /*计算时间*/
    hou = time / 3600;
    min = (time % 3600) / 60;
    sec = (time % 3600) % 60;

    printf("%02d:%02d:%02d", hou, min, sec);
}
