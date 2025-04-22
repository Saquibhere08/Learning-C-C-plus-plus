#include<stdio.h>
int main()
{
    int i=0;
    while(i<2)
    {
        if(i==1)
        break;
        i++;
        if(i==1)
        continue;
        printf("In the while loop\n");
    }
    print("After loop\n");
}