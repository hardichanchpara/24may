#include<stdio.h>

int main()
{
	int i,j,r,c;
	printf("enter row size=");
	scanf("%d",&r);
	printf("enter colum size=");
	scanf("%d",&c);
	printf("enter array elements of a=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("enter array elements of b=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
    }
    printf("\nsum array=");
    for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++)
    	printf("\nsum=%d",sum[i][j]);
	}
	printf("\n");
}
