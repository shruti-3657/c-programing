#include<stdio.h>
int main()
{
    int amt;
    printf("enter amount\n");
    scanf("%d",&amt);
    printf(" \n 10 * %d",amt/10);
    amt=amt%10;
    printf(" \n 5 * %d",amt/5);
    amt=amt%5;
    printf(" \n 1 * %d",amt/1);
    return 0;
}