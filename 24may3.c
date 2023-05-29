#include<stdio.h>

int main()
{
	int i,j,last,n=3,a[]={11,12,13,14,15,16};
	int langth=sizeof(a)/sizeof(a[0]);
	printf("values of array=\n");
	for(i=0;i<langth;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		last=a[langth-1];
        for(j=langth-1;j>0;j--)
    	{
		   a[j]=a[j-1];
	    }
	       a[0]=last;
	}
	printf("\n");
	printf("right rotation array=\n");
	for(i=0;i<langth;i++)
	{
		printf("%d\n",a[i]);
	}
	
}
