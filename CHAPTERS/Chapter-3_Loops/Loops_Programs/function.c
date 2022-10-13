#include<stdio.h>
int sum(int,int);//function declaration

int main()
{
	int a=10;
	int b=20;
	int r=0;
	r=sum(a,b);
	printf("r=%d",r);
	return 0;
}
int sum(int x,int y)//function definition //function header
{
	/*int a,b,sum=0;
	printf("Enter two no:\n");
	scanf("%d%d",&a,&b);*/
	int sum=0;
	sum=x+y;
	return sum;
}
