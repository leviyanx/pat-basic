//此方法错误——int的范围为-2147483648~2147483647
#include <stdio.h>
int main(){
	int n, sum, num, n1;
	num = 0, sum = 0;
	scanf("%d",&n);
	n1 = n;
	while (n!=0)
	{
		num++;
		printf("%d\n",num);
		n = n/10;
		printf("%d\n",n);
	}
	printf("%d\n",num);
	while (n1!=0)
	{
	    int i, p;
	    p = 1;//乘的次数
		for (i=0;i<num-1;i++){//次数：num-1的基础上-1
            p = 10*p;
		}
		sum = n1/p+sum;//加上首位
		n1 = n1 - p*(n1/p);
		num--;
	}
	printf("%d\n",sum);

	//求位数
	int sum1 = sum;
	int num1 = 0;
    while (sum!=0) {
        num1++;
        sum = sum/10;
    }

    while (sum1/10!=0) {
        int i, p, first;
        p = 1;
        for (i=0;i<num1-1;i++) {
            p = p*10;//最高位位数
        }
        first = sum1/p;//最高位
        sum1 = sum1 - first*p;//减去最高位
        switch (first) {
            case 1:printf("yi ");break;
            case 2:printf("er ");break;
            case 3:printf("san ");break;
            case 4:printf("si ");break;
            case 5:printf("wu ");break;
            case 6:printf("liu ");break;
            case 7:printf("qi ");break;
            case 8:printf("ba ");break;
            case 9:printf("jiu ");break;
            default:printf("ling ");
        }
        num1--;
    }
    switch (sum1) {
                    case 1:printf("yi ");break;
            case 2:printf("er");break;
            case 3:printf("san");break;
            case 4:printf("si");break;
            case 5:printf("wu");break;
            case 6:printf("liu");break;
            case 7:printf("qi");break;
            case 8:printf("san");break;
            case 9:printf("jiu");break;
            default:printf("ling");
    }

}
