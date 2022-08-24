#include<stdio.h>
int count(int n)
{
     if(n==0)
          return 0;

     return 1+count(n/10);
}
int main()
{
     int n;
     printf("enter a number");
     scanf("%d",&n);
     printf("%d",count(n));
     return 0;
}
