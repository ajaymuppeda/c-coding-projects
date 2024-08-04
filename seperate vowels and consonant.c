#include<stdio.h>
#include<string.h>
int main()
{
    char sc[100];
    int i,v=0,c=0;
    printf("Enter any word:");
    scanf("%s",sc);
    for(i=0;i<strlen(sc);i++) 
    {
    if(sc[i]=='a'||sc[i]=='A'||sc[i]=='e'||sc[i]=='E'||sc[i]=='I'||sc[i]=='i'||sc[i]=='o'||sc[i]=='O'||sc[i]=='U'||sc[i]=='u')
    v=v+1;
    else
    c=c+1;
    }
    printf("vowels are:%d\n",v);
    printf("consonant are:%d",c);
    return 0;
}