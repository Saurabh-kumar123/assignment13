#include<stdio.h>
int sum(int n)
{
     int s;
     if(n==1)
     return 1;
     s=n+sum(n-1);
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
