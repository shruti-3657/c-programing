#include<stdio.h>
int main()
{
    int a,b;
    printf("enter  2 number \n");
    scanf("%d%d",&a,&b);
    if(a<b)
        printf("%d minimum is %d",a,b);
    else
        printf("%d minimum is %d",b,a);
    return 0;
}