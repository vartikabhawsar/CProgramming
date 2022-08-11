#include <stdio.h>
#include <math.h>
void main()
{
int n,cnt,b,sum=0;
int temp=n;
int t=temp;
printf("Enter the num");
scanf("%d",&n);
while ( n>0)
{
    n=n/10;
    cnt++;
}
while(temp>0)
{
    b=temp%10;
    b=pow(b,cnt);
    sum=sum+ b;
    temp=temp/10;
}
if(t==sum)
printf("the no is armstrong");
else 
printf("the no. isnt");
}