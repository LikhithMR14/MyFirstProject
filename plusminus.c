#include<stdio.h>
void main()
{
    int n,i;
    int pos=0,neg=0,zer=0;
    float ok1,ok2,ok3;
    printf("enter n\n");
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    for( i=0;i<n;i++)
    {
        if(a[i]>0)
        pos++;
        if(a[i]<0)
        neg++;
        if(a[i]==0)
        zer++;
    }
    
    ok1=(pos/n);
    ok2=(neg/n);
    ok3=(zer/n);
    printf("%f\n%f\n%f",ok1,ok2,ok3);

    
}
