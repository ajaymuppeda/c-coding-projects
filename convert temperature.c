#include <stdio.h>   
int main() 
{  
    while(1) 
{
 int temp_f;     
int temp_c;
printf("Input a temperature (in Centigrade): ");  
scanf( "%d", &temp_c);   
temp_f = ((9.0 / 5.0) * temp_c) + 32.0;     
printf("%d degrees Fahrenheit.\n", temp_f);
}
return(0); 
}
