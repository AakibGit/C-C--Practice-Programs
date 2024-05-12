#include<stdio.h>
void myfunc(char name[])
{
 printf("Hie...%s",name);
}
int main()
{
    char name[20];
    char i;
    
    do
    {
        printf("\nSay Hi To-->");
        scanf("%s",&name);
        myfunc(name);
        printf("\nPRESS E IF U WANT TO EXIT AND C FOR CONTINUE--->");
        scanf("%s",&i);
    }
    while(i!='e');
    
    return 0;
}
