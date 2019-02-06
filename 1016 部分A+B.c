/**
-  Author : Yan lian  Version : 2.0  Date : 2019年2月6日星期三
-  Thought :
   1.先存储一个完整的数，再通过取模10和除10运算一位一位地比较
   2.计算出PA和PB的大小，再相加

-  Modification :
   1.将 int 改为long long
   2.思路修改：不是一开始就用数组存储，而是先存储一个完整的数，再通过取模10和除10运算一位一位地比较

-  History :
   1.Author : Yan lian
   2.Version : 1.0
   3.Date : 2019年2月5日星期二
*/
 #include <stdio.h>

 int main()
 {
    int PA = 0;
    int PB = 0;
    long long A, DA, B, DB;

    scanf("%lld %lld %lld %lld", &A, &DA, &B, &DB);

    /*求PA*/
    while (A != 0)
    {
        if (A % 10 == DA)
        {
            PA = PA * 10 + DA;
        }
        A /= 10;
    }

    /*求PB*/
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
