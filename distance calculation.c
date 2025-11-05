#include<stdio.h>
/*
to calculate the distance by an object
*/
int main()
{
	int u,t,a;
	printf("enter the value of velocity,time,accelaration");
	scanf("%d%d%d",&u,&t,&a);
	int s = u*t+(a*t*t)/2;
	printf("the distance travelled by an object is : %d",s);
	return 0;
}
