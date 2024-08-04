#include<stdio.h>
int main()
{
    int sum_array[100];
    int size,sum=0;
    printf("How many number you want to enter :");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
    printf("Enter %d value:",i);
    scanf("%d",&sum_array[i]);
    sum=sum+sum_array[i];
    }
printf("result:%d",sum);
return 0;
}     