#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int add(int a,int b)
{
    return a+b;
}
int test()
{
    printf("this is in the test branch!\n");
}
int main(void)
{
    printf("this is also a test\n");
    //printf("Hello,World!\n");
    int a=20;
    int b=30;
    int c;
    c=max(a,b);
    printf("%d is the max num!",c);
}
