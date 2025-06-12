#include<stdio.h>
int main()
{
    int n;
    printf("Enter number \n");
    scanf("%d",&n);
    /*if(n>0)
        printf("positive number \n");
    else
        printf("negative number\n");*/
    (n>0)? printf("positive Number"):printf("Negative Number");
    return 0;
    
}