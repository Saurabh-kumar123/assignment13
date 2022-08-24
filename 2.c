#include<stdio.h>
int sum(int n)
{
     int s;
     if(n==1)
     return 2;
     s=n*2+sum(n-1);
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

