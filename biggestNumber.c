#include<stdio.h>
int biggest (int ,int ,int ,int);
int main()
{
    int a,b,c,d;
    printf("Enter the a,b,c and d values:\n ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("Biggest number is : %d\n ",biggest (a,b,c,d));
    return 0;

}
int biggest (int a,int b,int c,int d)
{
    if(a>b&&a>c&&a>d)
    return a;
    else if(b>a&&b>c&&b>d)
    return b;
    else if (c>a&&c>b&&c>d)
    return c;
    else
    return d;
}
