/**
-  Author : Yan lian   Version : 1.0   Date : 2019��2��9��������
-  Thought :
   1.�������� ͨ���ж�c�ĺ���λ���ж������ỹ������

-  highlights :
   1.�����������
   2.�����%02d
*/

#include <stdio.h>

#define CLK_TCK 100

int main()
{
    int c1, c2, c, time;
    int hou, min, sec;

    scanf("%d %d", &c1, &c2);

    c = c2 - c1;

    /*�����������*/
    if (c % CLK_TCK >= 50)
    {
        time = c / 100 + 1;
    }
    else
    {
        time = c / 100;
    }

    /*����ʱ��*/
    hou = time / 3600;
    min = (time % 3600) / 60;
    sec = (time % 3600) % 60;

    printf("%02d:%02d:%02d", hou, min, sec);
}
