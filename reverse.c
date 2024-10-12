/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main() 
    {
        int i,start,end;
        printf("Enter a start value:");
        scanf("%d",&start);
        printf("Enter a end value:");
        scanf("%d",&end);
        i=start;
    while(i>=end)
    {
        printf("%d\n",i);
        i--;
    }
}