#include <stdio.h>
void main()
{
     int n,k,i,j;
    scanf("%d",&n);
    k=n;
    while(n!=0)
    {
        for(i=1;i<n;i++)
        printf(" ");
        for(j=i;j<=k;j++)
        printf("#");
        printf("\n");
        n--;
    }
}