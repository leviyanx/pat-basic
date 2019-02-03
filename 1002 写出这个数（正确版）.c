#include <stdio.h>
int main() {
    int sum = 0;
    char ch, s[4];//ch作为临时变量保存输入的每一个字符，s保存sum的每一个数字
    char b[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    //b[0][0]=l, b[0][1]=i, b[0][2]=n, b[0][3]=g

    while ((ch = getchar()) != '\n'){//如果一直输入字符，不按回车的话
        sum += (ch-'0');
    }
    sprintf(s, "%d", sum);//将整型sum转化成字符串s
    int i;
    for (i=0; s[i]!='\0'; i++) {//s[i]是字符串 //'\0'是字符串的结尾
        if (i>0)
            printf(" ");
        printf("%s", b[s[i]-'0']);//输出数字对应的拼音
    }
}
