#include<stdio.h>
#include<malloc.h>
 void f(int *p,int k );
 int main()
 {
     int *a;
     int n,i,t,j;
     scanf("%d\n",&n);
      a=(int*)malloc(n*sizeof(int));
      for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
            {
                 t=a[i];
        if(t==0)
            continue;
        while(t!=1)
            {
                if(t%2==0)
                 t/=2;
        else
            t=(3*t+1)/2;
        for(j=0;j<n;j++)
            {
                if(a[j]==t)
                 {
                    a[j]=0;
                    break;
                 }
            }
            }
              }
    f(a,n);
    for(i=0;a[i]>0;i++)
    {
        printf("%d%s",a[i],a[i+1]>0?" ":"");
    }
    return 0;
}
void f(int *p,int k)
{
    int i,j,m;
     for(i=0;i<k;i++)
        for(j=i+1;j<k;j++)
         {
             if(p[i]<p[j])
              {
                   m=p[i];
                   p[i]=p[j];
                   p[j]=m;
              }
         }
}
