#include <stdio.h>
#include <math.h>
int main()
{
    int b, p, h;
    int g = 10 ;
    printf("enter p ,b ,h \n");
    //scanf("%d %d %d ",&p ,&b,&h);
    scanf("%d", &p);
    scanf("%d", &b);
    scanf("%d", &h);
    if (p*p + b*b == h*h)
    {
        printf("YES\n");

    }
    else
    {
        printf("NO\n");
    }
    return (0);
}