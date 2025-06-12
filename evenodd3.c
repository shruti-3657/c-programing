#include<stdio.h>
int main()
{
    int n;
    printf("enter number \n");
    scanf("%d",&n);
    if(n&1)
        printf("odd number");
    else   
        printf("even number");
}