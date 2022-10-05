#include <stdio.h>
int main()
{
    int x, number, i;
    printf("Enter a Number for table:\n");
    scanf("%d", &x);
    printf("Enter another no.:\n");
    scanf("%d", &number);
    printf("The Table is:\n");

    for (int i = 0; i <= number; i++)
    {
        printf("%d * %d =%d \n", x, i, x * i);
    }
    return 0;
}