#include<stdio.h>
int hcf(int a,int b)
{
    if(b==0)
     return a;
    hcf(b,a%b);
}
  int main()
  {
       int a,b,c;
       printf("enter a two number\n");
       scanf("%d%d",&a,&b);
       if(a>b)
          printf("hcf is %d",hcf(a,b));
       else{
          c=a;
          a=b;
          b=c;
          printf("hcf is %d",hcf(a,b));
       }
       return 0;
  }
