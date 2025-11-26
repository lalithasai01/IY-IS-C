#include<stdio.h>
int main()
{
    int a=10,b=20,*p,*q;
    p=&a;
    q=&b;
    printf("Addition of %d and %d is:%d\n",*p,*q,*p+*q);
    printf("Subtraction of %d and %d is:%d\n",*p,*q,*p-*q);
    printf("Multiplication of %d and %d is:%d\n",*p,*q,*p**q);
    printf("Division of %d and %d is:%d\n",*p,*q,*p / *q);
    printf("Modulus of %d and %d is:%d\n",*p,*q,*p % *q);
    return 0;
}
