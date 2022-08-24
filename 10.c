#include<stdio.h>
#include<conio.h>
int sol(int n,int p)
{
    if(p==0)
    return 1;
    else
   return (n*sol(n,p-1));
}
int main()
{
    int n,p;
    printf("enter a number - ");
    scanf("%d",&n);
    printf("enter a power - ");
    scanf("%d",&p);
    printf("calculate is power %d",sol(n,p));
    return 0;
}
