#include<stdio.h>

int main()
{
    int n,i,temp,d;
    
	scanf("%d",&n);
	int a[n];
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&d);
		for(int j=0;j<d;j++)
		{
			temp=a[0];
			for(i=0;i<n-1;i++)
			{
				a[i]=a[i+1];
			}
		a[i]=temp;
		}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
