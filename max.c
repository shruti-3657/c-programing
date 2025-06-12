#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 number \n");
    scanf("%d%d",&a,&b);
    if(a>b )
        printf("%d max is %d",a,b);
    else
        printf("%d max is %d",b,a);

    return 0;
}