#include<stdio.h>
int main()
{
	int F;
	printf("enter the value of fahrenheit");
	scanf("%d",&F);
    int	C=(F-32)*5/9;
	printf("celsius is : %d",C);
	return 0;
}