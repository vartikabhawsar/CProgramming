#include <stdio.h>
void main()
{
    int l,m,i;
    printf("enter the size of array");
    scanf("%d",&l);
    printf("enter the size of array 2");
    scanf("%d",&m);
    
    printf("enter the elements of array 1");
    int a[l],b[m],c[l+m];
    for(int i=0;i<=l;i++)
    {
        scanf("%d",a[i]);
        printf("%d",a[i]);
    }
    printf("enter the elements of array 2");
    for( i=0;i<m;i++)
    {
        scanf("%d",b[i]);
        printf("%d",b[i]);
        
    }
    for ( i=0;i<l;i++)
    {
        c[i]=a[i];
    }
    for( i=m;i<l+m;i++);
    {
        c[i]=b[i];
    }
    for ( i=0;i<l+m;i++)
    printf("the values after merging c[%d] = %d",i,c[i]);
}