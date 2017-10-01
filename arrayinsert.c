#include <stdio.h>
int main()
{
	int n,k,pos;
	printf("Enter number of elements :");
	scanf("%d",&n);
	int a[n];
	printf("Enter Elements :\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element: ");
	scanf("%d",&k);
	printf("Enter index: ");
	scanf("%d",&pos);
	n=n+1;
	for(int i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=k;
	printf("\n");
	for(int i=0;i<n;i++)
        {
                printf("%d ",a[i]);
        }
return 0;	
}
