#include<stdio.h>
void main()
{
	
	int m,n,i,j;
	int sum;
	int count=0;
	printf("enter the value of m and n:\n");
	scanf("%d%d",&m,&n);
	int alloc[m][n],max[m][n],need[m][n],avail[m][n],r=1,flag[m],stk[m];
	printf("enter the values of allocation:\n");
	for(i=0;i<m;i++)
	{
	 for(j=0;j<n;j++)
	 {
	 	scanf("%d",&alloc[i][j]);
	 }
	}
	printf("enter the values of max:\n");
	for(i=0;i<m;i++)
	{
	 for(j=0;j<n;j++)
	 {
	 	scanf("%d",&max[i][j]);
	 }
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			need[i][j]=max[i][j]-alloc[i][j];
			
		}
	}
	printf("the need value will be:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",need[i][j]);
			
		}
		printf("\n");
	}
	int tot[n],work[n];
	printf("Enter the value of available recources in the CPU\n");
	for(j=0;j<n;j++)
	scanf("%d",&avail[0][j]);
	j=0;
	while(j<n)
	{
		sum=0;
		for(i=0;i<m;i++)
		sum+=alloc[i][j];
		tot[j]=avail[0][j]+sum;
		work[j]=avail[0][j];
		j++;		
	}
	for(i=0;i<m;i++)
	flag[i]=0;
	int l=0,f=0;
	while(l<2)
	{
	for(i=0;i<m;i++)
	{
		count=0;
		if(flag[i]==0)
		{
		for(j=0;j<n;j++)
		{
			
			if(work[j]>=need[i][j])
			{
				count++;
				continue;
			}
			else
			break;
		}
		}
		if(count==n)
		{
			for(j=0;j<n;j++)
			{
				avail[r][j]=avail[r-1][j]+alloc[i][j];
				work[j]=avail[r][j];
				
			}
			r++;
			flag[i]=1;
			stk[f++]=i+1;
		}
	}
	l++;
	}
	int safe_count=0;
	for(i=0;i<n;i++)
	{
		if(work[i]==tot[i])
		safe_count++;
	}
	if(safe_count==n)
	{
		printf("It is Safe\n");
		printf("The available matrix will be:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",avail[i][j]);
			
		}
		printf("\n");
	}
		printf("The safe sequence is:\n");
		for(f=0;f<m;f++)
		printf("Process %d\n",stk[f]);
		
	}
	else
	printf("It is not safe");	
}
