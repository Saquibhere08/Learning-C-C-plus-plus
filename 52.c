#include<stdio.h>
int x=5;
void main()
{
    int x=4;
    m();
    printf("%d",x);
}
void m()
{
    x=6;
    n();
}
void n()
{
    printf("%d",x);
}