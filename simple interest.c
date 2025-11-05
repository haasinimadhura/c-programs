#include<stdio.h>
int main()
{
	int p,t,r;
	printf("enter the values of p,t,r");
	scanf("%d%d%d",&p,&t,&r);
	int s;
	s=(p*t*r)/100;
	printf("simple interest is:%d",s);
	return 0;
}