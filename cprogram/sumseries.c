#include <stdio.h>
void main()
{
    int n, sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1; i<=n;i++)
    {
        sum=sum+i;
        printf("%d + ",i);
    }
    printf("\b");
    printf("\nsum is %d",sum);
}