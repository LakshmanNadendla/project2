#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
    {
        printf("%d*%d=%d",num,i,num*i);
    }
    return 0;
}