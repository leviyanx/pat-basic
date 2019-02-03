#include <stdio.h>
int main(){
	int step = 0;
	int n;
	scanf("%d",&n);
	while (n!=1)
	{
		if (n%2==0)
		{
			n = n/2;
			step = step+1;
		}
		else if (n%2==1)
		{
			n = (3*n+1)/2;
			step = step+1;
		}
	}
	printf("%d",step);
}