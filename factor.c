// Online C compiler to run C program online
#include <stdio.h>

int main()
{
 int i,n,factor=1;
 printf("Enter a number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     factor=factor*i;
 }
 printf("factor of %d\n is %d",n,factor);
    return 0;
}