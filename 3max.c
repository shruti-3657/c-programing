#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter number \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
        printf("%d is greater than %d and %d",a,b,c);
    else if(b>=c && c>=a)
        printf("%d is greater than %d and %d",b,a,c);
    else 
        printf("%d is greater than %d and %d",c,a,b);
    return 0;
}