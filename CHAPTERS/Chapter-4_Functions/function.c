#include<stdio.h>
//no argument no return
/*void sum();
int main()
{
    sum();
}
void sum()
{
    int a=10;
    int b=20;
    int sum=0;
    sum=a+b;
    printf("sum=%d",sum);
}*/

//with return but no argument
/*int sum();
int main()
{
    int r;
    r=sum();// r=30
    printf("sum=%d",r);
}
int sum()
{
    int a=10;
    int b=20;
    int sum=0;
    sum=a+b;
    return (sum);//return 30
    printf("after return");
}*/

//no return value but arguments
/*void sum();
int main()
{
    int a=10,b=20;
    sum(a,b);// r=30
}
void sum(int x,int y)// 10 20
{
    int sum=0;
    sum=x+y; //10+20
    printf("sum=%d",sum); //30
}*/

//with return and also with arguments

/*int sum();
int main()
{
    int a=10;
    int b=20;
    int r;
    r=sum(a,b);// r=30
    printf("sum=%d",r);
}
int sum(int x,int y)
{
    int sum=0;
    sum=x+y;
    return (sum);//return 30
    printf("after return");
}*/

void fun();
int a=10;
int b=20;
int s=0;
int main()
{
    //int r;
    //r=fun(a,b);
    //printf("sum=%d",r);
    //a=10;
    //b=20;
    fun();
    printf("sum=%d",s);
}
void fun()
{
    printf("a=%d\n",a);
    s=a+b;
    //printf("sum=%d",s);
}
