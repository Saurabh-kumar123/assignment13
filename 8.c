#include<stdio.h>
int fab(int n)
{
     if(n==1||n==0)
     return n;
     return fab(n-1)+fab(n-2);

}
int main()
{
     int n,i;
     printf("enter a number\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     printf("%d ",fab(i));
     return 0;
}
