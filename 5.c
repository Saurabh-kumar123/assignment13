#include<stdio.h>
int sum(int n)
{
     int s=0;
     if(n==0)
     return 0;
     s=sum(n/10)+(n%10);
     return s;
}
int main()
{
     int n;
     printf("enter a number\n");
     scanf("%d",&n);
     printf("%d",sum(n));
     return 0;
}
