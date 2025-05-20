#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void reversestring(char *str)
{
    int left = 0;
    int right = strlen(str)-1;
    char temp;

    while(left<right)
    {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;

    }
}


int main()
{
    char str[] = "Lakshman";
    reversestring(str);
    printf("The reversed string is %s\n",str);
    return 0;
}