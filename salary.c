#include<stdio.h>
int main()
{

    int eid;
    char name[20];
    float bs,da,hra,tax,totalsalary;
    FILE *fp;
    fp=fopen("Salary slip.txt","w");
    printf("enter employe details :\n");
    printf("enter employe id \n");
    scanf("%d",&eid);
    printf("enter employe name \n");
    scanf("%s",&name);
    printf(" enter basic salary \n");
    scanf("%f",&bs);
    printf("enter DA(%%) \n");
    scanf("%f",&da);
    printf("enter HRA(%%) \n");
    scanf("%f",&hra);
    printf("enter tax(%%) \n");
    scanf("%f",&tax);
    totalsalary=bs+((bs*(da+hra-tax))/100);
    printf("Total salary: %.2f",totalsalary);
    return 0;
}