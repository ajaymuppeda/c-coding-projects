#include<stdio.h>
int main ()
{printf("This is A Simple calculator\n");
while(1)
{
int option;
    printf("choose option\n 1)Additon\n 2)Subtraction\n 3)Mutlipication\n 4)Division\n 5)exit\nEnter option:");
    scanf("%d",&option);
    if(option==5)
    {
        printf("Thnak you for using this simple calculator!");
      break;  
    }
    int a,b;
    printf("Enter a value:");
    scanf("%d",&a);
     printf("Enter b value:");
    scanf("%d",&b);
    switch(option)
    {
    case 1:
    printf("Addition is :%d",a+b);
    break;
    case 2:
    printf("Subtraction is :%d",a-b);
    break;
    case 3:
    printf("Mutlipication is :%d",a*b);
    break;
    case 4:
    printf("Division  is :%f",(float)a/b);
    break;
    default:
    printf("pick up a wrong option: thank you"); 
    }
}
    return 0;
    
}