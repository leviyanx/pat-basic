#include <stdio.h>
int main() {
    int sum = 0;
    char ch, s[4];//ch��Ϊ��ʱ�������������ÿһ���ַ���s����sum��ÿһ������
    char b[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    //b[0][0]=l, b[0][1]=i, b[0][2]=n, b[0][3]=g

    while ((ch = getchar()) != '\n'){//���һֱ�����ַ��������س��Ļ�
        sum += (ch-'0');
    }
    sprintf(s, "%d", sum);//������sumת�����ַ���s
    int i;
    for (i=0; s[i]!='\0'; i++) {//s[i]���ַ��� //'\0'���ַ����Ľ�β
        if (i>0)
            printf(" ");
        printf("%s", b[s[i]-'0']);//������ֶ�Ӧ��ƴ��
    }
}
