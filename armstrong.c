#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,re,m,dig=0;
    scanf("%d",&n);
    m=n;
    while(n!=0)
    {
        dig++;
        n=n/10;
    }
    n=m;
    while(n!=0)
    {
        re=n %10;
        sum=sum+pow(re,dig);
        n=n/10;
    }
    if (m==sum)
        printf("Given number is Armstrong number");
    else
        printf("Given number is not a Armstrong number");
    return 0;
}
