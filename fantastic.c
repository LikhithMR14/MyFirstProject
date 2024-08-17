#include <stdio.h>
#include<math.h>

int main() 
{
    int a[3][4]={{10,20,30,40},{50,60,70,80},{90,100,110,120}};
    int i=0;
    int j=0;
    for(i=0;i<3;i++)
    {
    	for(j=0;j<4;j++)
    	{
    		a[i][j]=pow(a[i][j],2);
        	printf("%d ",a[i][j]);
		}
		printf("\n");
    }
    return 0;
}
