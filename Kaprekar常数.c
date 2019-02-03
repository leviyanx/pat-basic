#include<stdio.h>
void kaprekar (int a) {

    while (a = 6174){
            int x, y;
        one = (a-a/10)/1000;
        two = ((a-((a-a/10)/1000)*1000))/100;
        three = ((a-((a-a/10)/1000)*1000)-(((a-((a-a/10)/1000)*1000))/100)*100)/10;
        four = ((a-((a-a/10)/1000)*1000)-(((a-((a-a/10)/1000)*1000))/100)*100)-(((a-((a-a/10)/1000)*1000)-(((a-((a-a/10)/1000)*1000))/100)*100)/10)*10;
        if (one==two && two==three && three==four){
            printf("N - N = 0000");
            break;
        }
        else{
            int r1, r2, r3, r4;
            r1=0;
            int x[4];
            x[0] = one;
            x[1] = two;
            x[2] = three;
            x[3] = four;
            for(i = 0; i<4; i++)
                if(x[i]<x[i+i]){
                    r1 = x[i];
                    x[i] = x[i+1];
                    x[i+1] = r1
                }
            a1 = x[0]*1000+x[1]*100+x[2]*10+x[3];

    }
}
